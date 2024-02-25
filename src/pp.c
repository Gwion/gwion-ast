#include "gwion_util.h"
#include "gwion_ast.h"
#include "bison_compat.h"

ANN PPState *new_ppstate(MemPool p, const m_str filename) {
  PPState *ppstate = mp_calloc(p, PPState);
  ppstate->filename        = filename;
  return ppstate;
};

ANEW PP *new_pp(MemPool p, const uint size, const m_str name) {
  PP *pp = (PP *)mp_calloc(p, PP);
  vector_init(&pp->data);
  pp->macros = (Hash)mp_calloc(p, Hash);
  hini(pp->macros, size);
  pp->macros->p = p; // in ctor ?
  vector_init(&pp->state);
  vector_init(&pp->global_undef);
  PPState *pps = new_ppstate(p, name);
  pos_ini(&pps->loc.first);
  pos_ini(&pps->loc.last);
  vector_add(&pp->state, (vtype)pps);
  return pp;
}

static void pp_post(PP *pp, void *data) {
  for (m_uint i = 1; i < vector_size(&pp->state); ++i) {
    void *ppstate = (void *)vector_at(&pp->state, i);
    clear_buffer(ppstate, data);
  }
  mp_free(pp->macros->p, PPState, (PPState*)vector_front(&pp->state));
  pp->entry = NULL;
  vector_clear(&pp->state);
  vector_clear(&pp->global_undef);
  macro_del(pp->macros);
}

ANN void free_pp(MemPool p, PP *pp, void *data) {
  pp_post(pp, data);
  vector_release(&pp->state);
  vector_release(&pp->global_undef);
  hend(pp->macros);
  mp_free(p, Hash, pp->macros);
  vector_release(&pp->data);
  mp_free(p, PP, pp);
}
