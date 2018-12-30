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

ANN Ast parse(const m_str, FILE*);
uint clear_buffer(Vector, void*, const m_bool);
#endif
