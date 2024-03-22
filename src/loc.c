#include "gwion_util.h"
#include "gwion_ast.h"
#include "parser.h"

static pos_t default_pos = { .line = 1, .column = 1 };

void gwion_parser_set_default_pos(const pos_t pos) {
  default_pos = pos;
}

ANN void pos_ini(pos_t *pos) { *pos = default_pos; }

static void _gwlog_error(const char *main, const char *explain,
                 const char *filename, const loc_t loc, const uint error_code,
                 const enum libprettyerr_errtype errtype);
ANN static void _gwlog_warning(const char *main, const char *filename, 
                         const loc_t loc);
ANN static void _gwlog_related(const char *main, const char *filename, 
                         const loc_t loc);
ANN static void _gwlog_hint(const char *main, const char *filename NUSED, 
                         const loc_t loc NUSED) {
  gw_err("{-}hint:{0} %s\n", main);
}

static gwlog_error_function_t   _error   = _gwlog_error;
static gwlog_warning_function_t _warning = _gwlog_warning;
static gwlog_warning_function_t _related = _gwlog_related;
static gwlog_warning_function_t _hint    = _gwlog_hint;

ANN void gwlog_set_func(gwlog_error_function_t error,
                        gwlog_warning_function_t warning,
                        gwlog_warning_function_t related,
                        gwlog_warning_function_t hint) {
  _error = error;
  _warning = warning;
  _related = related;
  _hint = hint;
}

ANN static char *get_src(const char *filename, const loc_t loc) {
  char * line = NULL;
  size_t len  = 0;
  uint   i    = 0;
  FILE * f    = fopen(filename, "r");
  if (!f) return NULL;
  fseek(f, 0, SEEK_SET);
  ssize_t ret;
  while ((ret = getline(&line, &len, f)) != -1 && ++i < loc.first.line);
  fclose(f);
  if (ret != -1) return line;
  if(line) xfree(line);
  return NULL;
}

static inline const char *get_filename(const char *filename) {
#ifndef BUILD_ON_WINDOWS
  const char *pwd = getenv("PWD");
  if(!pwd) return filename;
#else
  TCHAR pwd[MAX_PATH];
  GetCurrentDirectory(MAX_PATH, pwd);
#endif
  size_t sz = strlen(pwd);
  return !strncmp(pwd, filename, sz - 1) ? filename + sz + 1 : filename;
}

ANN2(1, 2, 3)
static void nosrc(const perr_printer_t *printer, const perr_t *err,
                  const char *main, const char *explain) {
  size_t len;
  char   base[16];
  char   color[16];
  strcpy(base, "+R");
  const int status = tcol_color_parse(color, 16, base, 2, &len);
  if (status != TermColorErrorNone)
    color[0] = 0;
  else
    color[len] = 0;
  gw_err("[internal]\n");
  perr_print_line_number(printer, err, color);
  gw_err("%s\n", main);
  if (explain) gw_err("%s\n", explain);
}

static void _gwlog_error(const char *main, const char *explain,
                 const char *filename, const loc_t loc, const uint error_code,
                 const enum libprettyerr_errtype errtype) {
#ifdef __FUZZING__
  return;
#endif
  char *line = get_src(filename, loc);

  perr_printer_t printer;
  perr_printer_init(&printer, stderr, line,
                    true, // use utf8,
                    perr_runner_basic_style);

  printer.rounded = true;

  const size_t sz = line ? (loc.last.line == loc.first.line
     ? (size_t)(loc.last.column - loc.first.column)
     : strlen(line) - loc.first.column) : 0;
  const perr_t err = PERR_Error(
      errtype, PERR_Str(loc.first.line, line),
      PERR_Pos(loc.first.column - 1, sz), main,
      explain, error_code, get_filename(filename));

  if (line) {
    perr_print_error(&printer, &err);
    xfree(line);
  } else
    nosrc(&printer, &err, main, explain);
}

void gwlog_error(const char *main, const char *explain,
                 const char *filename, const loc_t loc, const uint error_code) {
  _error(main, explain, filename, loc, error_code, PERR_ERROR);
}

ANN static void _gwlog_secondary(const char *main, const char *filename,
                         const enum libprettyerr_errtype type,
                         const loc_t loc) {
  perr_printer_t printer;
  char *         line = get_src(filename, loc);

  perr_printer_init(&printer, stderr, line,
                    true, // use utf8,
                    perr_runner_secondary_style);
  printer.rounded = true;

  const perr_t err = PERR_Secondary(
      type, PERR_Str(loc.first.line, line),
      PERR_Pos(loc.first.column - 1, loc.last.column - loc.first.column), main,
          get_filename(filename));
  if (line) {
    perr_print_error(&printer, &err);
    xfree(line);
  } else
    nosrc(&printer, &err, main, NULL);
}

ANN void _gwlog_warning(const char *main, const char *filename,
                         const loc_t loc) {
  _gwlog_secondary(main, filename, PERR_WARNING, loc);
}
ANN void gwlog_warning(const char *main, const char *filename,
                         const loc_t loc) {
  _warning(main, filename, loc);
}

ANN void _gwlog_related(const char *main, const char *filename,
                         const loc_t loc) {
  _gwlog_secondary(main, filename, PERR_INFO, loc);
}
ANN void gwlog_related(const char *main, const char *filename,
                         const loc_t loc) {
  _hint(main, filename, loc);
}

ANN void gwlog_hint(const char *main, const char *filename,
                         const loc_t loc) {
  _hint(main, filename, loc);
}
