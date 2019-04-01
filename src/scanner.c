#include <stdio.h>
#include "gwion_util.h"
#include "absyn.h"
#include "macro.h"
#include "scanner.h"
#include "parser.h"
#include "lexer.h"
#include "pp.h"
#include "mpool.h"

#define PP_SIZE 127
ANEW static Scanner* new_scanner(const m_str filename, FILE* f) {
  Scanner* scan = (Scanner*)mp_alloc(Scanner);
  gwion_lex_init(&scan->scanner);
  gwion_set_extra(scan, scan->scanner);
  scan->line = scan->pos  = 1;
  scan->jmp = (jmp_buf*)_mp_alloc(sizeof(jmp_buf));
  scan->pp = new_pp(PP_SIZE, filename);
  gwion_set_in(f, scan->scanner);
  return scan;
}

ANN static void free_scanner(Scanner* scan) {
  free_pp(scan->pp, scan);
  _mp_free(sizeof(jmp_buf), scan->jmp);
  gwion_lex_destroy(scan->scanner);
  mp_free(Scanner, scan);
}

Ast parse(SymTable* st, const m_str name, FILE* f) {
  Scanner* s = new_scanner(name, f);
  s->st = st;
  if(setjmp(*s->jmp) || gwion_parse(s))
    s->ast = NULL;
  const Ast ast = s->ast;
  free_scanner(s);
  return ast;
}
