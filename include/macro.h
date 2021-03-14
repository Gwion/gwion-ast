/** @file: macro.h
\brief macros
*/
#ifndef __MACRO
#define __MACRO

#define MACRO_DEFINED _("macro already defined")
typedef struct MacroArg_* MacroArg;
typedef struct Macro_* Macro;

struct MacroArg_ {
  char* name;
  GwText text;
  MacroArg next;
  Macro orig;
  struct pos_t pos;
};

MacroArg new_macroarg(MemPool p, const m_str);
void clean_macroarg(const MacroArg);

struct Macro_ {
  char* name;
  GwText* text;
  MacroArg  base;
  MacroArg  args;
  Macro next;
  m_str file;
  struct pos_t pos;
};

void  macro_del(const Hash);
Macro macro_add(const Hash, m_str);
int   macro_rem(const Hash, m_str);
Macro macro_has(const Hash, m_str);
#endif
