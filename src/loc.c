#include "gwion_util.h"
#include "gwion_ast.h"
#include "parser.h"

loc_t new_loc(MemPool mp, const uint line) {
  loc_t loc = mp_calloc2(mp, sizeof(*loc));
  loc->first_line = line;
  loc->last_line = line;
  return loc;
}

YYLTYPE* loc_cpy(MemPool mp, const YYLTYPE*src) {
  YYLTYPE *loc = mp_calloc2(mp, sizeof(YYLTYPE));
  loc->first_line = src->first_line;
  loc->first_column = src->first_column;
  loc->last_line = src->last_line;
  loc->last_column = src->last_column;
  return loc;
}

void free_loc(MemPool p, struct YYLTYPE* loc) {
  mp_free2(p, sizeof(YYLTYPE), loc);
}

#define MIN(a,b) (a < b ? a : b)
void loc_header(const YYLTYPE* loc, const m_str filename) {
  gw_err("\033[1m%s:%u:%u:\033[0m ", filename, loc->first_line, loc->first_column);
}

void loc_err(const YYLTYPE* loc, const m_str filename) {
  int n = 1;
  size_t len = 0;
  FILE* f = fopen(filename, "r");
  if(!f)
    return;
  fseek(f, 0, SEEK_SET);
  m_str line = NULL;
  ssize_t sz;
  while((sz = getline(&line, &len, f)) != -1) {
    if(n > loc->last_line)
      break;
    if(n >= loc->first_line) {
      int pos = 0;
      if(n == loc->first_line) {
        while(pos < (MIN(loc->first_column, sz) -1))
          gw_err("%c", line[pos++]);
        gw_err("\033[4m");
      }
      if(n == loc->last_line) {
        do gw_err("%c", line[pos]);
        while(++pos < loc->last_column - 1);
        gw_err("\033[0m");
      }
      do gw_err("%c", line[pos]);
      while(++pos <= sz);
    }
    n++;
  }
  fclose(f);
  free(line);
}
