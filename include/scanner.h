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

#endif
