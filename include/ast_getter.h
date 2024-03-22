/** @file: ast_getter.h
@brief: helper structure to get an AST
*/
#ifndef __AST_GETTER
#define __AST_GETTER

struct AstGetter_ {
  const m_str    name;
  FILE *         f;
  SymTable *     st;
  PPArg *ppa;
};

ANN Ast parse_pos(struct AstGetter_ *const, const pos_t);
ANN static inline Ast parse(struct AstGetter_ *const arg) {
  pos_t pos;
  pos_ini(&pos);
  return parse_pos(arg, pos);
}
#endif
