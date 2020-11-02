/** @file: defs.h
\brief base definitions
**/
#ifndef __FLAGS
#define __FLAGS

#ifndef __cplusplus
#define SET_FLAG(a, b) (a)->flag |= (ae_flag_##b)
#else
#define SET_FLAG(a, b) { const int f = a->flag | (ae_flag_##b); (a->flag) = (ae_flag)f; }
#endif
#define GET_FLAG(a, b) (((a)->flag & ae_flag_##b) == (ae_flag_##b))
#define SAFE_FLAG(a, b) (a && ((a)->flag & (ae_flag_##b)) == (ae_flag_##b))
#define UNSET_FLAG(a, b) ((a)->flag &= ~(ae_flag_##b))

typedef enum {
  ae_flag_none = 1 << 0,
  ae_flag_static  = 1 << 1,
  ae_flag_private  = 1 << 2,
  ae_flag_global  = 1 << 3,
  ae_flag_const  = 1 << 4,
  ae_flag_ref  = 1 << 5,
  ae_flag_abstract  = 1 << 6,
  ae_flag_final  = 1 << 7,
  ae_flag_protect = 1 << 8,
  ae_flag_nonnull = 1 << 9,
} __attribute__((packed)) ae_flag;

#endif
