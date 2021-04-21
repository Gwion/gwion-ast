#include "prettyerr.h"
#include "gwion_util.h"
#include "gwion_ast.h"
#include "parser.h"

ANN static char* get_src(const char *filename, const loc_t loc) {
  char *line = NULL;
  size_t len = 0;
  uint i = 0;
  FILE *f = fopen(filename, "r");
  if(!f)
    return NULL;
  fseek(f, SEEK_SET, 0);
  ssize_t ret;
  while ((ret = getline(&line, &len, f)) != -1 && ++i < loc.first.line);
  fclose(f);
  if(ret != -1)
    return line;
  if(line)
    xfree(line);
  return NULL;
}

static inline const char* get_filename(const char *filename) {
#ifndef BUILD_ON_WINDOWS
  const char *pwd = getenv("PWD");
#else
  TCHAR pwd[MAX_PATH];
  GetCurrentDirectory(MAX_PATH, pwd);
#endif
  size_t sz = strlen(pwd);
  return !strncmp(pwd, filename, sz - 1) ?
    filename + sz + 1 : filename;
}

void gwerr_basic(const char *main, const char *explain, const char *fix,
            const char *filename, const loc_t loc, const uint error_code) {
  char * line = get_src(filename, loc);
  if(!line) {
    gw_err("%s\n", main);
    return;
  }

  perr_printer_t printer;
  perr_printer_init(
    &printer, stderr, line,
    true, // use utf8,
    perr_runner_basic_style
    );

  printer.rounded = true;

  // Create a faux error
  const perr_t err = PERR_Error(
          PERR_ERROR /* error */,
            PERR_Str(loc.first.line, line) /* location of error */,
            PERR_Pos(loc.first.column-1, loc.last.column - loc.first.column) /* occurs at src[15] through src[19] */,
            main, explain, fix, error_code, get_filename(filename)
        );
  perr_print_error(&printer, &err);
  xfree(line);
}

ANN void gwerr_secondary(const char *main, const char *filename, const loc_t loc) {
  perr_printer_t printer;
  char * line = get_src(filename, loc);
  if(!line) {
    perr_printer_init(
      &printer, stderr, NULL,
      true, // use utf8,
      perr_runner_secondary_style
    );
    const perr_t err= {
        .filename=filename,
        .error_position=PERR_Pos(loc.first.column-1, loc.last.column - loc.first.column)
    };
    size_t len;
    char color[3];
    const int status = tcol_color_parse(color, 16, "+R", 2, &len);
    if (status != TermColorErrorNone)
       color[0] = 0;
    else
    color[len] = 0;
    perr_print_line_number(&printer, &err, color);
    gw_err("%s\n", main);
    return;
  }

  perr_printer_init(
    &printer, stderr, line,
    true, // use utf8,
    perr_runner_secondary_style
    );
  printer.rounded = true;

  // Create a faux error
  const perr_t err = PERR_Secondary(
          PERR_WARNING /* error */,
            PERR_Str(loc.first.line, line) /* location of error */,
            PERR_Pos(loc.first.column-1, loc.last.column - loc.first.column) /* occurs at src[15] through src[19] */,
            main, NULL, get_filename(filename)
        );
  perr_print_error(&printer, &err);
  xfree(line);
}
