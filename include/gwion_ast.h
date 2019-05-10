#ifndef __GWION_AST
#define __GWION_AST
#include "absyn.h"
#include "scanner.h"
#include "macro.h"
#include "pp.h"
//#include "parser.h"
struct YYLTYPE* loc_cpy(MemPool, const struct YYLTYPE*);
void loc_err(const struct YYLTYPE* loc, const m_str filename);
struct YYLTYPE *new_loc(MemPool, const uint);
void free_loc(MemPool p, struct YYLTYPE* loc);
#endif
