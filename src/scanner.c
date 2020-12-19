#include <stdio.h>
#include "gwion_util.h"
#include "gwion_ast.h"
#include "parser.h"
#include "lexer.h"

#define PP_SIZE 127

ANEW static Scanner* new_scanner(const struct AstGetter_ *arg) {
  Scanner* scan = (Scanner*)mp_calloc(arg->st->p, Scanner);
  map_init(&scan->map);
  gwion_lex_init(&scan->scanner);
  gwion_set_extra(scan, scan->scanner);
  scan->pp = new_pp(arg->st->p, PP_SIZE, arg->name);
  gwion_set_in(arg->f, scan->scanner);
  scan->st = arg->st;
  scan->ppa = arg->ppa;
  pos_ini(&scan->pos);
  return scan;
}

ANN static void free_scanner(Scanner* scan) {
  map_release(&scan->map);
  free_pp(scan->st->p, scan->pp, scan->scanner);
  gwion_lex_destroy(scan->scanner);
  mp_free(scan->st->p, Scanner, scan);
}

ANN static Ast get_ast(MemPool mp, Scanner *s) {
  if(!gwion_parse(s))
    return s->ast;
  if(s->ast)
    free_ast(mp, s->ast);
  return NULL;
}

Ast parse(struct AstGetter_ *const arg) {
  Scanner* s = new_scanner(arg);
  const Ast ast = get_ast(arg->ppa->hash.p, s);
  arg->global = s->global;
  free_scanner(s);
  return ast;
}
