#ifndef __SCANNER
#define __SCANNER
#include <setjmp.h>
typedef struct Scanner_ {
  void* scanner;
  Ast ast;
  SymTable *st;
  uint line;
  uint pos;
  struct PP_* pp;
  jmp_buf* jmp;
} Scanner;

struct ScannerArg_ {
  const m_str name;
  FILE* f;
  SymTable* st;
};
ANN Ast parse(const struct ScannerArg_ *arg);
uint clear_buffer(Vector, void*, const m_bool);
#endif
