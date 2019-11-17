#ifndef __SCANNER
#define __SCANNER
#include <setjmp.h>

struct PPArg_ {
  struct Vector_ file;
  struct Vector_ path;
  struct Hash_   hash;
  struct Vector_ global_undef;
  MemPool mp;
  uint lint; // only TOOL_MODE
};

typedef struct Scanner_ {
  void* scanner;
  Ast ast;
  SymTable *st;
  uint line;
  uint pos;
  struct PP_* pp;
  jmp_buf* jmp;
  struct PPArg_ *ppa;
} Scanner;

ANN void pparg_ini(MemPool, struct PPArg_*);
ANN m_bool pparg_run(struct PPArg_ *ppa, const Vector v);
ANN void pparg_end(struct PPArg_*);

struct ScannerArg_ {
  const m_str name;
  FILE* f;
  SymTable* st;
  struct PPArg_ *ppa;
};
ANN Ast parse(const struct ScannerArg_ *arg);
uint clear_buffer(Vector, void*);

ANN static inline struct Macro_* ppa_has_macro(struct PPArg_* ppa, const Symbol sym) {
  if(!ppa->hash.table)
    return NULL;
  m_int ret = vector_size(&ppa->global_undef) ? vector_find(&ppa->global_undef, (vtype)sym) : 1;
  if(!ret)
    return NULL;
  return macro_has(&ppa->hash, s_name(sym));
}

ANN static inline int ppa_rem_macro(struct PPArg_* ppa, const Symbol sym) {
  if(!ppa->hash.table)
    return 1;
  if(!macro_has(&ppa->hash, s_name(sym)))
    return 1;
  vector_add(&ppa->global_undef, (vtype)sym);
  return 0;
}

#endif
