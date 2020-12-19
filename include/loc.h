/** @file: loc.h
\brief locations
*/
#ifndef __LOC
#define __LOC

struct pos_t {
  short unsigned int line;
  short unsigned int column;
};

static inline void pos_ini(struct pos_t *pos) {
  pos->line = pos->column = 1;
}

struct loc_t_ {
  struct pos_t first;
  struct pos_t last;
};

typedef struct loc_t_ loc_t;
void loc_header(const loc_t , const m_str filename);
void loc_err(const loc_t, const m_str filename);

#endif
