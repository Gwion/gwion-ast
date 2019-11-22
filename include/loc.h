#ifndef __LOC
#define __LOC

struct pos_t {
  uint line;
  uint column;
};

struct loc_t {
  struct pos_t first;
  struct pos_t last;
};

typedef struct loc_t* loc_t;
loc_t loc_cpy(MemPool, const loc_t );
void loc_header(const loc_t , const m_str filename);
void loc_err(const loc_t, const m_str filename);
loc_t new_loc(MemPool, const uint);
void free_loc(MemPool p, loc_t);

#endif
