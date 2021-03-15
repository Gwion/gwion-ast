/** @file: scanner.h
\brief scanner
*/
#ifndef __SCANNER
#define __SCANNER

typedef struct Scanner_ {
  void* scanner;
  struct Map_ map;
  SymTable *st;
  struct PP_* pp;
  struct PPArg_ *ppa;
  Ast ast;
  struct pos_t pos;
  short int interp_state;
  short unsigned int error;
  short unsigned int global;
  short unsigned int hashes;
} Scanner;

ANN2(1,2) int scanner_error(Scanner* scan, const char *main,
          const char *explain, const char *fix, const loc_t pos, uint error_code);
#endif
