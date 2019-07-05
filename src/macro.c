#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "gwion_util.h"
#include "gwion_ast.h"

Args new_args(MemPool p, const char* name) {
  const Args a = mp_calloc(p, Args);
  a->name = strdup(name);
  a->text.mp = p;
  return a;
}

void clean_args(const Args a) {
  if(a->next)
    clean_args(a->next);
  text_release(&a->text);
}

static void free_args(MemPool p, const Args a) {
  if(a->next)
    free_args(p, a->next);
  text_release(&a->text);
  xfree(a->name);
  mp_free(p, Args, a);
}

void free_entry(MemPool p, void *data) {
  const Macro s = (Macro)data;
  if(s->next)
    free_entry(p, s->next);
  xfree(s->name);
  text_release(&s->text);
  if(s->base)
    free_args(p, s->base);
  mp_free(p, Macro, s);
}

static inline Macro mkentry(MemPool p, const char* name, const Macro next) {
  const Macro s = mp_calloc(p, Macro);
  s->name = strdup(name);
  s->next = next;
  s->text.mp = p;
  return s;
}

hstraction(Macro, Macro, has,, return sym;, ,return 0)
hstraction(Macro, Macro, add,, return NULL;,, return h->table[idx] = mkentry(h->p, arg, sym);)
hstraction(Macro, int, rem, Macro prev = NULL;,
      if(prev)
        prev->next = s->next;
      else
        h->table[idx] = NULL;
      s->next = NULL;
      free_entry(h->p, s);
      return 0;
,    prev = s;,return GW_OK;)

ANN void macro_del(const Hash h) {
  hdel(h, free_entry);
}
