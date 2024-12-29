/** @file: ast_getter.h
@brief: helper structure to get an AST
*/
#ifndef __AST_GETTER
#define __AST_GETTER

typedef enum {
  comment_normal,
  comment_after,
  comment_before,
} comment_t;
typedef struct Comment {
  m_str     str;
  loc_t     loc;
  comment_t type;
  bool      alone;
} Comment;
MK_VECTOR_TYPE(Comment, comment)


typedef struct AstGetter_ {
  const char    *name;
  FILE *         f;
  SymTable *     st;
  PPArg *ppa;
  CommentList  **comments;
  bool fmt;
} AstGetter;

ANN Ast parse_pos(struct AstGetter_ *const, const pos_t);
ANN static inline Ast parse(struct AstGetter_ *const arg) {
  pos_t pos;
  pos_ini(&pos);
  return parse_pos(arg, pos);
}
#endif
