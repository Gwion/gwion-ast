/** @file: pp.h
@brief parser state
*/

#ifndef __PP
#define __PP

enum pptype {
  pptype_file,
  pptype_arg,
  pptype_handle,
};

typedef struct PPState_ {
  void *state;
  union {
    FILE *   file;
    MacroArg arg;
    void *   data;
  };
  m_str       filename;
  loc_t       pos;
  enum pptype type;
} PPState;

typedef struct PP_ {
  struct Vector_ state;
  struct Hash_ * macros;
  struct Vector_ global_undef;
  struct Macro_ *entry;
  struct Vector_ data;
  int            npar;
} PP;

ANN PPState *new_ppstate(MemPool, const m_str);
ANEW PP *new_pp(MemPool p, const uint size, const m_str);
ANN void free_pp(MemPool p, PP *pp, void *data);
#endif
