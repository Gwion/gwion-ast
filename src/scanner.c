#include <stdio.h>
#include "gwion_util.h"
#include "absyn.h"
#include "macro.h"
#include "scanner.h"
#include "parser.h"
#include "lexer.h"
#include "pp.h"

#define PP_SIZE 127
ANEW static Scanner* new_scanner(const m_str filename, FILE* f) {
  Scanner* scan = (Scanner*)xcalloc(1, sizeof(Scanner));
  gwion_lex_init(&scan->scanner);
  gwion_set_extra(scan, scan->scanner);
  scan->line = scan->pos  = 1;
  scan->jmp = (jmp_buf*)xcalloc(1, sizeof(jmp_buf));
  scan->pp = new_pp(PP_SIZE, filename);
  gwion_set_in(f, scan->scanner);
  return scan;
}

ANN static void free_scanner(Scanner* scan) {
  free_pp(scan->pp, scan);
  xfree(scan->jmp);
  gwion_lex_destroy(scan->scanner);
  xfree(scan);
}

Ast parse(const m_str name, FILE* f) {
  Scanner* s = new_scanner(name, f);
  if(setjmp(*s->jmp) || gwion_parse(s))
    s->ast = NULL;
  const Ast ast = s->ast;
  free_scanner(s);
  return ast;
}
