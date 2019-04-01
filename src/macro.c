#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "defs.h"
#include "hash.h"
#include "macro.h"
#include "mpool.h"

Args new_args(const char* name) {
  const Args a = mp_alloc(Args);
  a->name = strdup(name);
  return a;
}

void clean_args(const Args a) {
  if(a->next)
    clean_args(a->next);
  if(a->text)
    xfree(a->text);
  a->text = NULL;
}

static void free_args(const Args a) {
  if(a->next)
    free_args(a->next);
  if(a->text)
    xfree(a->text);
  xfree(a->name);
  mp_free(Args, a);
}

void free_entry(const Macro s) {
  if(s->next)
    free_entry(s->next);
  xfree(s->name);
  if(s->text)
    xfree(s->text);
  if(s->base)
    free_args(s->base);
  mp_free(Macro, s);
}
static inline Macro mkentry(const char* name, const Macro next) {
  const Macro s = mp_alloc(Macro);
  s->name = strdup(name);
  s->next = next;
  return s;
}

hstraction(Macro, Macro, has,, return sym;, ,return 0)
hstraction(Macro, Macro, add,, return NULL;,, return h->table[idx] = mkentry(arg, sym);)
hstraction(Macro, int, rem, Macro prev = NULL;,
      if(prev)
        prev->next = s->next;
      else
        h->table[idx] = NULL;
      s->next = NULL;
      free_entry(s);
      return 0;
,    prev = s;,return GW_OK;)

ANN void macro_del(const Hash h) {
  hdel(h, (void (*)(void *))free_entry);
}
