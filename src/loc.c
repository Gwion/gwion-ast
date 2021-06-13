#include "prettyerr.h"
#include "gwion_util.h"
#include "gwion_ast.h"
#include "parser.h"

ANN static char *get_src(const char *filename, const loc_t loc) {
  char * line = NULL;
  size_t len  = 0;
  uint   i    = 0;
  FILE * f    = fopen(filename, "r");
  if (!f) return NULL;
  fseek(f, SEEK_SET, 0);
  ssize_t ret;
  while ((ret = getline(&line, &len, f)) != -1 && ++i < loc.first.line)
    ;
  fclose(f);
  if (ret != -1) return line;
  return NULL;
}

static inline const char *get_filename(const char *filename) {
#ifndef BUILD_ON_WINDOWS
  const char *pwd = getenv("PWD");
#else
  TCHAR pwd[MAX_PATH];
  GetCurrentDirectory(MAX_PATH, pwd);
#endif
  size_t sz = strlen(pwd);
  return !strncmp(pwd, filename, sz - 1) ? filename + sz + 1 : filename;
}

ANN2(1, 2, 3)
static void nosrc(const perr_printer_t *printer, const perr_t *err,
                  const char *main, const char *explain, const char *fix) {
  size_t len;
  char   base[16];
  char   color[16];
  strcpy(base, "+R");
  const int status = tcol_color_parse(color, 16, base, 2, &len);
  if (status != TermColorErrorNone)
    color[0] = 0;
  else
    color[len] = 0;
  perr_print_line_number(printer, err, color);
  gw_err("%s\n", main);
  if (explain) gw_err("%s\n", explain);
  if (fix) gw_err("%s\n", fix);
}

void gwerr_basic(const char *main, const char *explain, const char *fix,
                 const char *filename, const loc_t loc, const uint error_code) {
  char *line = get_src(filename, loc);

  perr_printer_t printer;
  perr_printer_init(&printer, stderr, line,
                    true, // use utf8,
                    perr_runner_basic_style);

  printer.rounded = true;

  const perr_t err = PERR_Error(
      PERR_ERROR, PERR_Str(loc.first.line, line),
      PERR_Pos(loc.first.column - 1, loc.last.column - loc.first.column), main,
      explain, fix, error_code, get_filename(filename));

  if (line) {
    perr_print_error(&printer, &err);
    xfree(line);
  } else
    nosrc(&printer, &err, main, explain, fix);
}

ANN void gwerr_secondary(const char *main, const char *filename,
                         const loc_t loc) {
  perr_printer_t printer;
  char *         line = get_src(filename, loc);

  perr_printer_init(&printer, stderr, line,
                    true, // use utf8,
                    perr_runner_secondary_style);
  printer.rounded = true;

  const perr_t err = PERR_Secondary(
      PERR_WARNING, PERR_Str(loc.first.line, line),
      PERR_Pos(loc.first.column - 1, loc.last.column - loc.first.column), main,
      NULL, get_filename(filename));
  if (line) {
    perr_print_error(&printer, &err);
    xfree(line);
  } else
    nosrc(&printer, &err, main, NULL, NULL);
}
