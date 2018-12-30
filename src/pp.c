#include <stdio.h>
#include "gwion_util.h"
#include "absyn.h"
#include "macro.h"
#include "pp.h"
#include "scanner.h"

ANEW PP* new_pp(const uint size, const m_str name) {
  PP* pp = (PP*)xcalloc(1, sizeof(struct PP_));
  pp->def = (struct pp_info*)xcalloc(1, sizeof(struct pp_info));
  pp->macros = (Hash)xcalloc(1, sizeof(struct Hash_));
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
  xfree(pp->macros);
  xfree(pp->def);
  xfree(pp);
}
