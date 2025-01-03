/** @file: scanner.h
\brief scanner
*/
#ifndef __SCANNER
#define __SCANNER

typedef struct Scanner_ {
  void *         scanner;
  SymTable *     st;
  struct PP_ *   pp;
  AstGetter     *getter;
  struct Vector_ hashes;
  struct pos_t   pos;
  struct pos_t   tmp;
  struct pos_t   old;
  short int      interp_state;
  short int      spread_state;
//  bool           error;
  bool           locale; // handle \n in the lexer
} Scanner;

ANN2(1, 2)
int     scanner_error(Scanner *scan, const char *main, const char *explain,
                      const loc_t loc, const uint error_code);
ANN int scanner_secondary(Scanner *scan, const char *main, const loc_t loc);

#endif
