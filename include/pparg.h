/** @file: pparg.h
\brief parser arguments
*/
#ifndef __PPARG
#define __PPARG

typedef struct PPArg_ {
  struct Vector_ path;
  struct Hash_   hash;
  Ast            ast;
  bool           fmt;
} PPArg;

ANN void pparg_ini(MemPool, PPArg *);
ANN void pparg_end(PPArg *);

ANN static inline struct Macro_ *ppa_has_macro(PPArg *ppa,
                                               const Symbol   sym) {
  if (!ppa->hash.table) return NULL;
  return macro_has(&ppa->hash, s_name(sym));
}

ANN static inline bool ppa_rem_macro(PPArg *ppa, const Symbol sym) {
  if (!ppa->hash.table) return false;
  return macro_has(&ppa->hash, s_name(sym)) ? true : false;
}

ANN2(1) bool pparg_add(PPArg *ppa, const m_str str);
ANN2(1) static inline bool pparg_rem(PPArg *ppa, const m_str str) {
  if (!ppa->hash.table) return false;
  return macro_rem(&ppa->hash, str);
}
ANN static inline void pparg_inc(PPArg *ppa, const m_str str) {
  return vector_add(&ppa->path, (vtype)str);
}
#endif
