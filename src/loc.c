#include "gwion_util.h"
#include "gwion_ast.h"
#include "parser.h"

#define _MIN(a,b) (a < b ? a : b)
#define MIN(a,b) _MIN((ssize_t)a, b)

void loc_header(const loc_t loc, const m_str filename) {
  gw_err("\033[1m%s:%u:%u:\033[0m ", filename, loc.first.line, loc.first.column);
}

void loc_err(const loc_t loc, const m_str filename) {
  uint n = 1;
  size_t len = 0;
  FILE* f = fopen(filename, "r");
  if(!f)
    return;
  fseek(f, 0, SEEK_SET);
  m_str line = NULL;
  ssize_t sz;
  while((sz = getline(&line, &len, f)) != -1) {
    if(n > loc.last.line)
      break;
    if(n >= loc.first.line) {
      int pos = 0;
      if(n == loc.first.line) {
        while(pos < (MIN(loc.first.column, sz) -1))
          gw_err("%c", line[pos++]);
        gw_err("\033[4m");
      }
      if(n == loc.last.line) {
        do gw_err("%c", line[pos]);
        while(++pos < (MIN(loc.last.column,sz) - 1));
        gw_err("\033[0m");
      }
      do gw_err("%c", line[pos]);
      while(++pos <= sz);
    }
    n++;
  }
  gw_err("\033[0m");
  fclose(f);
  free(line);
}
