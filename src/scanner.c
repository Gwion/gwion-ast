#include <stdio.h>
#include "gwion_util.h"
#include "absyn.h"
#include "macro.h"
#include "scanner.h"
#include "parser.h"
#include "lexer.h"
#include "pp.h"

ANEW Scanner* new_scanner(const uint size) {
  Scanner* scan = (Scanner*)xcalloc(1, sizeof(Scanner));
  gwion_lex_init(&scan->scanner);
  gwion_set_extra(scan, scan->scanner);
  scan->jmp = (jmp_buf*)xcalloc(1, sizeof(jmp_buf));
  scan->pp = new_pp(size);
  return scan;
}

ANN void free_scanner(Scanner* scan) {
  free_pp(scan->pp);
  xfree(scan->jmp);
  gwion_lex_destroy(scan->scanner);
  xfree(scan);
}

static inline void scanner_pre(Scanner* scan, const m_str filename, FILE* f) {
  scan->line = scan->pos  = 1;
  pp_pre(scan->pp, filename);
  gwion_set_in(f, scan->scanner);
}

void scanner_post(Scanner* scan) {
  pp_post(scan->pp, scan);
/*
  m_uint size = vector_size(&scan->pp->filename);
  while(size > 2)
    size = clear_buffer(&scan->pp->filename, scan, size > 6);
  scan->pp->entry = NULL;
  vector_clear(&scan->pp->filename);
  macro_del(scan->pp->macros);
*/
}

Ast parse(Scanner* scan, const m_str filename, FILE* f) {
  scanner_pre(scan, filename, f);
  if(setjmp(*scan->jmp) || gwion_parse(scan))
    scan->ast = NULL;
  scanner_post(scan);
  return scan->ast;
}
