#ifndef __SCANNER
#define __SCANNER
#include <setjmp.h>
typedef struct Scanner_ {
  void* scanner;
  Ast ast;
  unsigned int line;
  unsigned int pos;
  struct PP_* pp;
  jmp_buf* jmp;
} Scanner;

ANN Ast parse(struct Scanner_*, const m_str, FILE*);
ANEW Scanner* new_scanner(const uint size);
ANN void free_scanner(Scanner* scan);
ANN void scanner_post(Scanner* scan);
uint clear_buffer(Vector, void*, const m_bool);
#endif
