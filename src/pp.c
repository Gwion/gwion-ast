#include "gwion_util.h"
#include "gwion_ast.h"

ANN struct PPState_* new_ppstate(MemPool p, const m_str filename) {
  struct PPState_ * ppstate = mp_calloc(p, PPState);
  ppstate->filename = filename;
  return ppstate;
};

ANEW PP* new_pp(MemPool p, const uint size, const m_str name) {
  PP* pp = (PP*)mp_calloc(p, PP);
  pp->def = (struct pp_info*)mp_calloc2(p, sizeof(struct pp_info));// watchme
  pp->macros = (Hash)mp_calloc(p, Hash);
  hini(pp->macros, size);
  pp->macros->p = p; // in ctor ?
  vector_init(&pp->filename);
  vector_init(&pp->global_undef);
  vector_add(&pp->filename, (vtype)new_ppstate(p, name));
  return pp;
}

static void pp_post(PP* pp, void* data) {
  for(m_uint i = 1; i < vector_size(&pp->filename); ++i)
    clear_buffer(&pp->filename, data);
  mp_free(pp->macros->p, PPState, (struct PPState_*)vector_front(&pp->filename));
  pp->entry = NULL;
  vector_clear(&pp->filename);
  vector_clear(&pp->global_undef);
  macro_del(pp->macros);
}

ANN void free_pp(MemPool p, PP* pp, void* data) {
  pp_post(pp, data);
  vector_release(&pp->filename);
  vector_release(&pp->global_undef);
  hend(pp->macros);
  mp_free(p, Hash, pp->macros);
  mp_free2(p, sizeof(struct pp_info), pp->def); // watch me
  mp_free(p, PP, pp);
}
