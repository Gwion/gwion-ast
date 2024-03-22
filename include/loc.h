/** @file: loc.h
\brief locations
*/
#ifndef __LOC
#define __LOC

typedef struct pos_t {
  short unsigned int line;
  short unsigned int column;
} pos_t;

ANN void pos_ini(pos_t*);
void gwion_parser_set_default_pos(const pos_t);

typedef struct loc_t_ {
  struct pos_t first;
  struct pos_t last;
} loc_t;

void     gwlog_error(const char *main, const char *explain,
                     const char *filename, const loc_t loc, const uint error_code);
ANN void gwlog_warning(const char *main, const char *filename,
                         const loc_t loc);
ANN void gwlog_related(const char *main, const char *filename, 
                         const loc_t loc);
ANN void gwlog_hint(const char *main, const char *filename, 
                         const loc_t loc);
typedef void (*gwlog_error_function_t)(const char *, const char *,
  const char *, const loc_t,  const uint,  const enum libprettyerr_errtype);
typedef void (*gwlog_warning_function_t)(const char *main, const char *filename,
                         const loc_t loc);
ANN void gwlog_set_func(gwlog_error_function_t error,
                        gwlog_warning_function_t warning,
                        gwlog_warning_function_t info,
                        gwlog_warning_function_t hint);
#endif
