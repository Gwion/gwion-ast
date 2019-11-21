#ifndef __PP
#define __PP

struct PPState_ {
  uint pos;
  uint line;
  void *state;
  union {
    FILE* file;
    MacroArg arg;
    void *data;
  };
  m_str filename;
};

typedef struct PP_ {
  struct Vector_ filename;
  struct Hash_* macros;
  struct Vector_ global_undef;
  struct Macro_* entry;
  struct pp_info* def;
  int npar;
} PP;


ANN struct PPState_* new_ppstate(MemPool, const m_str);
ANEW PP* new_pp(MemPool p, const uint size, const m_str);
ANN void free_pp(MemPool p, PP* pp, void* data);
uint clear_buffer(Vector, void*);
#endif
