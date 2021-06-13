#include "gwion_util.h"
#include "gwion_ast.h"

MacroArg new_macroarg(MemPool p, const m_str name) {
  const MacroArg a = mp_calloc(p, MacroArg);
  a->name          = mstrdup(p, name);
  a->text.mp       = p;
  return a;
}

void clean_macroarg(const MacroArg a) {
  if (a->next) clean_macroarg(a->next);
  text_release(&a->text);
}

static void free_args(MemPool p, const MacroArg a) {
  if (a->next) free_args(p, a->next);
  text_release(&a->text);
  free_mstr(p, a->name);
  mp_free(p, MacroArg, a);
}

void free_entry(MemPool p, void *data) {
  const Macro s = (Macro)data;
  if (s->next) free_entry(p, s->next);
  free_mstr(p, s->name);
  text_release(s->text);
  mp_free(p, GwText, s->text);
  if (s->base) free_args(p, s->base);
  mp_free(p, Macro, s);
}

static inline Macro mkentry(MemPool p, const m_str name, const Macro next) {
  const Macro s = mp_calloc(p, Macro);
  s->name       = mstrdup(p, name);
  s->next       = next;
  s->text       = mp_calloc(p, GwText);
  s->text->mp   = p;
  return s;
}

hstraction(Macro, Macro, has, , return sym;, , return 0)
    hstraction(Macro, Macro, add, , return NULL;
               , , return h->table[idx] = mkentry(h->p, arg, sym);)
        hstraction(Macro, int, rem, Macro prev = NULL;
                   , if (prev) prev->next = s->next; else h->table[idx] = NULL;
                   s->next = NULL; free_entry(h->p, s); return 0;, prev = s;
                   , return GW_OK;)

            ANN void macro_del(const Hash h) {
  hdel(h, free_entry);
}
