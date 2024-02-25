/** @file: scanner.h
\brief scanner
*/
#ifndef __SCANNER
#define __SCANNER

typedef struct Scanner_ {
  void *         scanner;
  SymTable *     st;
  struct PP_ *   pp;
  struct PPArg_ *ppa;
  struct Vector_ hashes;
  struct pos_t   pos;
  struct pos_t   tmp;
  struct pos_t   old;
  short int      interp_state;
  short int      spread_state;
  bool           error;
  bool           handling;
  bool           locale; // handle \n in the lexer
} Scanner;

ANN2(1, 2)
int     scanner_error(Scanner *scan, const char *main, const char *explain,
                      const char *fix, const loc_t loc, const uint error_code);
ANN int scanner_secondary(Scanner *scan, const char *main, const loc_t loc);

ANN loc_t defer_stmt(Stmt* stmt);
#endif
