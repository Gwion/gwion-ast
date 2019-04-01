#ifndef __MACRO
#define __MACRO
typedef struct Args_* Args;
typedef struct Macro_* Macro;

struct pp_info {
  int data[32];
  int idx;
};

struct Args_ {
  char* name;
  char* text;
  Args next;
};

Args new_args(const char*);
void clean_args(const Args);
struct Macro_ {
  char* name;
  char* text;
  Args  base;
  Args  args;
  Macro next;
  uint line;
  uint pos;
};

void  macro_del(const Hash);
Macro macro_add(const Hash, m_str);
int   macro_rem(const Hash, m_str);
Macro macro_has(const Hash, m_str);
#endif
