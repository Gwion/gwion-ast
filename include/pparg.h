/** @file: pparg.h
\brief parser arguments
*/
#ifndef __PPARG
#define __PPARG

struct PPArg_ {
  struct Vector_ path;
  struct Hash_   hash;
  Ast            ast;
  unsigned           lint;
};

ANN void pparg_ini(MemPool, struct PPArg_ *);
ANN2(1) m_bool pparg_run(struct PPArg_ *ppa, const Vector v);
ANN void pparg_end(struct PPArg_ *);

ANN static inline struct Macro_ *ppa_has_macro(struct PPArg_ *ppa,
                                               const Symbol   sym) {
  if (!ppa->hash.table) return NULL;
  return macro_has(&ppa->hash, s_name(sym));
}

ANN static inline int ppa_rem_macro(struct PPArg_ *ppa, const Symbol sym) {
  if (!ppa->hash.table) return GW_ERROR;
  return macro_has(&ppa->hash, s_name(sym)) ? 0 : GW_ERROR;
}

ANN2(1) m_bool pparg_add(struct PPArg_ *ppa, const m_str str);
ANN2(1) static inline m_bool pparg_rem(struct PPArg_ *ppa, const m_str str) {
  if (!ppa->hash.table) return GW_ERROR;
  return macro_rem(&ppa->hash, str);
}
ANN static inline void pparg_inc(struct PPArg_ *ppa, const m_str str) {
  return vector_add(&ppa->path, (vtype)str);
}
#endif
