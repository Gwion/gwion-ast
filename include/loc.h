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

void     gwerr_basic(const char *main, const char *explain, const char *fix,
                     const char *filename, const loc_t loc, const uint error_code);
void     gwerr_warn(const char *main, const char *explain, const char *fix,
                     const char *filename, const loc_t loc);
ANN void gwerr_secondary(const char *main, const char *filename,
                         const loc_t loc);
typedef void (*gwerr_basic_function_t)(const char *, const char *, const char *,
  const char *, const loc_t,  const uint,  const enum libprettyerr_errtype);
typedef void (*gwerr_secondary_function_t)(const char *main, const char *filename,
                         const loc_t loc);
ANN void gwerr_set_func(gwerr_basic_function_t, gwerr_secondary_function_t);
#endif
