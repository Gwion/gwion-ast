#include <stdio.h>
#include "gwion_util.h"
#include "absyn.h"
#include "macro.h"
#include "pp.h"
#include "scanner.h"

ANEW PP* new_pp(const uint size) {
  PP* pp = (PP*)xcalloc(1, sizeof(struct PP_));
  pp->def = (struct pp_info*)xcalloc(1, sizeof(struct pp_info));
  pp->macros = (Hash)xcalloc(1, sizeof(struct Hash_));
  hini(pp->macros, size);
  vector_init(&pp->filename);
  return pp;
}

ANN void free_pp(PP* pp) {
  vector_release(&pp->filename);
  hend(pp->macros);
  xfree(pp->macros);
  xfree(pp->def);
  xfree(pp);
}

ANN void pp_pre(PP* pp, const m_str filename) {
  pp->def->idx = 0;
  pp->npar = 0;
  vector_add(&pp->filename, (vtype)NULL);
  vector_add(&pp->filename, (vtype)filename);
}

void pp_post(PP* pp, void* data) {
  m_uint size = vector_size(&pp->filename);
  while(size > 2)
    size = clear_buffer(&pp->filename, data, size > 6);
  pp->entry = NULL;
  vector_clear(&pp->filename);
  macro_del(pp->macros);
}
