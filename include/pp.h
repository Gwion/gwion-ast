#ifndef __PP
#define __PP

struct PPState_ {
  void *state;
  union {
    FILE* file;
    MacroArg arg;
    void *data;
  };
  m_str filename;
  struct pos_t pos;
};

struct pp_info {
  m_bit data[60];
  int idx;
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
#endif
