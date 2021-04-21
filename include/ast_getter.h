/** @file: ast_getter.h
@brief: helper structure to get an AST
*/
#ifndef __AST_GETTER
#define __AST_GETTER

struct AstGetter_ {
  const m_str name;
  FILE* f;
  SymTable* st;
  struct PPArg_ *ppa;
  bool global;
};

ANN Ast parse(struct AstGetter_*const);

#endif
