#include "gwion_util.h"
#include "gwion_ast.h"
#include "parser.h"
int main(int argc, char **argv) {
//  MemPool p = mempool_ini(sizeof(struct Exp_));
  MemPool p = mempool_ini(1024);
  SymTable *st = new_symbol_table(p, 65536);
  struct PPArg_ ppa;
  for(int i = 1; i < argc; i++) {
    FILE *f = fopen(argv[i], "r");
    if(!f) {
      gw_err("{R+}%s{0} not found\n");
      continue;
    }
    struct AstGetter_ arg = { argv[i], f, st, .ppa = &ppa};
    parse(&arg);
    fclose(f);
  }
}
