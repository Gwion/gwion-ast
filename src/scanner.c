#include <stdio.h>
#include "gwion_util.h"
#include "gwion_ast.h"
#include "parser.h"
#include "lexer.h"

#define PP_SIZE 127

ANEW static Scanner* new_scanner(const struct ScannerArg_ *arg) {
  Scanner* scan = (Scanner*)mp_calloc(arg->st->p, Scanner);
  gwion_lex_init(&scan->scanner);
  gwion_set_extra(scan, scan->scanner);
  scan->line = scan->pos  = 1;
  scan->jmp = (jmp_buf*)mp_calloc2(arg->st->p, sizeof(jmp_buf));
  scan->pp = new_pp(arg->st->p, PP_SIZE, arg->name);
  gwion_set_in(arg->f, scan->scanner);
  scan->st = arg->st;
  return scan;
}

ANN static void free_scanner(Scanner* scan) {
  free_pp(scan->st->p, scan->pp, scan->scanner);
  mp_free2(scan->st->p, sizeof(jmp_buf), scan->jmp);
  gwion_lex_destroy(scan->scanner);
  mp_free(scan->st->p, Scanner, scan);
}

Ast parse(const struct ScannerArg_ *arg) {
  Scanner* s = new_scanner(arg);
  if(setjmp(*s->jmp) || gwion_parse(s))
    s->ast = NULL;
  const Ast ast = s->ast;
  free_scanner(s);
  return ast;
}
