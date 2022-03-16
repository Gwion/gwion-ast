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
  short int      interp_state;
  bool           error;
  bool           handling;
} Scanner;

ANN2(1, 2)
int     scanner_error(Scanner *scan, const char *main, const char *explain,
                      const char *fix, const loc_t pos, uint error_code);
ANN int scanner_secondary(Scanner *scan, const char *main, const loc_t pos);
#endif
