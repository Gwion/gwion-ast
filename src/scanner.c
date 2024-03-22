#include "gwion_util.h"
#include "gwion_ast.h"
#include "parser.h"
#include "lexer.h"

#define PP_SIZE 127

ANEW static Scanner *new_scanner(const struct AstGetter_ *arg) {
  Scanner *scan = (Scanner *)mp_calloc(arg->st->p, Scanner);
  vector_init(&scan->hashes);
  gwion_lex_init(&scan->scanner);
  gwion_set_extra(scan, scan->scanner);
  scan->pp = new_pp(arg->st->p, PP_SIZE, arg->name);
  gwion_set_in(arg->f, scan->scanner);
  scan->st  = arg->st;
  scan->ppa = arg->ppa;
  pos_ini(&scan->pos);
//  pos_ini(&scan->old);
  scan->ppa->ast = NULL; // ???
  return scan;
}

ANN static void free_scanner(Scanner *scan) {
  vector_release(&scan->hashes);
  free_pp(scan->st->p, scan->pp, scan->scanner);
  gwion_lex_destroy(scan->scanner);
  mp_free(scan->st->p, Scanner, scan);
}

ANN static Ast get_ast(MemPool mp, Scanner *s) {
  if (!gwion_parse(s)) return s->ppa->ast;
  if (s->ppa->ast) free_ast(mp, s->ppa->ast);
  return NULL;
}

ANN Ast parse_pos(struct AstGetter_ *const arg, const pos_t pos) {
  Scanner * s   = new_scanner(arg);
  s->pos = pos;
  const Ast ast = get_ast(arg->ppa->hash.p, s);
  free_scanner(s);
  return ast;
}

ANN static char *get_filename(Scanner *scan, const PPState *ppstate) {
  m_str filename = ppstate->filename;
  if (!scan->pp->npar) {
    m_uint i = vector_size(&scan->pp->state) - 1;
    if (*filename == '@') {
      while (*filename == '@') {
        --i;
        const PPState *pps = (PPState*)vector_at(&scan->pp->state, i);
        filename = pps->filename;
      }
    }
  } else {
    const PPState *pps = (PPState*)vector_front(&scan->pp->state);
    filename = pps->filename;
  }
  return filename;
}

ANN static void secondary(Scanner *scan) {
  for (m_uint i = 0; i < vector_size(&scan->pp->state) - 1; i++) {
    const PPState *pp = (PPState*)vector_at(&scan->pp->state, i);
    gwlog_related("expanded from here", get_filename(scan, pp), pp->loc);
  }
}

ANN2(1, 2)
int scanner_error(Scanner *scan, const char *main, const char *explain,
                  const loc_t loc, const uint error_code) {
  const PPState *ppstate = (PPState*)vector_back(&scan->pp->state);
  const m_str filename = get_filename(scan, ppstate);
  gwlog_error(main, explain, filename, loc, error_code);
  secondary(scan);
  return 0;
}

ANN int scanner_secondary(Scanner *scan, const char *main, const loc_t loc) {
  const PPState *ppstate = (PPState*)vector_back(&scan->pp->state);
  const m_str filename = get_filename(scan, ppstate);
  gwlog_warning(main, filename, loc);
  return 0;
}
