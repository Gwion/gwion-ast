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
  char*       filename;
  loc_t       loc;
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

ANN PPState *new_ppstate(MemPool, char *name);
ANEW PP *new_pp(MemPool p, const uint size, char *name);
ANN void free_pp(MemPool p, PP *pp, void *data);
#endif
