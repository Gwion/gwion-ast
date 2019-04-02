#include <stdio.h>
#include "gwion_util.h"
#include "absyn.h"
#include "macro.h"
#include "pp.h"
#include "scanner.h"

ANEW PP* new_pp(MemPool p, const uint size, const m_str name) {
  PP* pp = (PP*)mp_alloc(p, PP);
  pp->def = (struct pp_info*)mp_alloc2(p, sizeof(struct pp_info));// watchme
  pp->macros = (Hash)mp_alloc(p, Hash);
  hini(pp->macros, size);
  pp->macros->p = p; // in ctor ?
  vector_init(&pp->filename);
  vector_add(&pp->filename, (vtype)NULL);
  vector_add(&pp->filename, (vtype)name);
  return pp;
}

static void pp_post(PP* pp, void* data) {
  m_uint size = vector_size(&pp->filename);
  while(size > 2)
    size = clear_buffer(&pp->filename, data, size > 6);
  pp->entry = NULL;
  vector_clear(&pp->filename);
  macro_del(pp->macros);
}

ANN void free_pp(MemPool p, PP* pp, void* data) {
  pp_post(pp, data);
  vector_release(&pp->filename);
  hend(pp->macros);
  mp_free(p, Hash, pp->macros);
  mp_free2(p, sizeof(struct pp_info), pp->def); // watch me
  mp_free(p, PP, pp);
}
