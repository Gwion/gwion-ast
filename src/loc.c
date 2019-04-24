#include "gwion_util.h"
#include "gwion_ast.h"
#include "parser.h"

//struct YYLTYPE* new_loc(MemPool mp, const uint line) {
loc_t new_loc(MemPool mp, const uint line) {
  loc_t loc = mp_alloc2(mp, sizeof(*loc));
//  YYLTYPE *loc = (YYLTYPE*)xmalloc(sizeof(YYLTYPE));
  loc->first_line = line;
  loc->last_line = line;
  return loc;
}

YYLTYPE* loc_cpy(MemPool mp, const YYLTYPE*src) {
  YYLTYPE *loc = mp_alloc2(mp, sizeof(YYLTYPE));
//  YYLTYPE *loc = (YYLTYPE*)xmalloc(sizeof(YYLTYPE));
  loc->first_line = src->first_line;
  loc->first_column = src->first_column;
  loc->last_line = src->last_line;
  loc->last_column = src->last_column;
  return loc;
}

void free_loc(MemPool p, struct YYLTYPE* loc) {
  mp_free2(p, sizeof(YYLTYPE), loc);
//  xfree(loc);
}
