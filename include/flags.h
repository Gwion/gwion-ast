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
#define UNSET_FLAG(a, b) ((a)->flag &= (uint)~(ae_flag_##b))

typedef enum {
  ae_flag_none = 1 << 0,
  ae_flag_builtin = 1 << 1,
  ae_flag_valid   = 1 << 2,
  ae_flag_member  = 1 << 3,
  ae_flag_static  = 1 << 4,
  ae_flag_template  = 1 << 5,
  ae_flag_variadic  = 1 << 6, // variadic funcs
  ae_flag_struct = 1 << 6,
  ae_flag_ctor  = 1 << 7,
  ae_flag_dtor  = 1 << 8,
  ae_flag_op  = 1 << 9,
  ae_flag_private  = 1 << 10,
  ae_flag_global  = 1 << 11,
  ae_flag_const  = 1 << 12,
  ae_flag_enum  = 1 << 13,
  ae_flag_union  = 1 << 14,
  ae_flag_ref  = 1 << 15,
  ae_flag_abstract  = 1 << 16, // abstract types
  ae_flag_typedef  = 1 << 17,
  ae_flag_unary  = 1 << 18,
  ae_flag_func  = 1 << 19, // for value holding func
  ae_flag_empty  = 1 << 20, // for typedef with empty array
    // and complete vararg func def
// parsing flags for class_def->type
  ae_flag_scan0 = 1 << 21,
  ae_flag_scan1 = 1 << 22,
  ae_flag_scan2 = 1 << 23,
  ae_flag_check = 1 << 24,
  ae_flag_emit  = 1 << 25,
  ae_flag_protect = 1 << 26,
  ae_flag_used = 1 << 27,
  ae_flag_pure = 1 << 28,
  ae_flag_force = 1 << 29,
  ae_flag_nonnull = 1 << 30,
  ae_flag_infer = 1 << 31
} ae_flag;

#endif
