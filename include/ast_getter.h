#ifndef __AST_GETTER
#define __AST_GETTER

struct AstGetter_ {
  const m_str name;
  FILE* f;
  SymTable* st;
  struct PPArg_ *ppa;
};

ANN Ast parse(const struct AstGetter_*);

#endif
