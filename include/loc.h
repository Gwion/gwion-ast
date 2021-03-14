/** @file: loc.h
\brief locations
*/
#ifndef __LOC
#define __LOC

typedef struct pos_t {
  short unsigned int line;
  short unsigned int column;
} pos_t;

static inline void pos_ini(pos_t *pos) {
  pos->line = pos->column = 1;
}

typedef struct loc_t_ {
  struct pos_t first;
  struct pos_t last;
} loc_t;

void gwerr_basic(const char *main, const char *explain, const char *fix,
            const char *filename, const loc_t loc, const uint error_code);
ANN void gwerr_secondary(const char *main, const char *filename, const loc_t loc);
#endif
