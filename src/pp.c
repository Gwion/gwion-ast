#include <stdio.h>
#include "gwion_util.h"
#include "absyn.h"
#include "macro.h"
#include "pp.h"
#include "scanner.h"

ANEW PP* new_pp(const uint size, const m_str name) {
  PP* pp = (PP*)mp_alloc(PP);
  pp->def = (struct pp_info*)_mp_alloc(sizeof(struct pp_info));
  pp->macros = (Hash)mp_alloc(Hash);
  hini(pp->macros, size);
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

ANN void free_pp(PP* pp, void* data) {
  pp_post(pp, data);
  vector_release(&pp->filename);
  hend(pp->macros);
  mp_free(Hash, pp->macros);
  _mp_free(sizeof(struct pp_info), pp->def);
  mp_free(PP, pp);
}
