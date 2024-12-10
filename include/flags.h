/** @file: defs.h
\brief base definitions
**/
#ifndef __FLAGS
#define __FLAGS

#ifndef __cplusplus
#define SET_FLAG(a, b) (a)->flag |= (ae_flag_##b)
#else
#define SET_FLAG(a, b)                                                         \
  {                                                                            \
    const int f = a->flag | (ae_flag_##b);                                     \
    (a->flag)   = (ae_flag)f;                                                  \
  }
#endif
#define GET_FLAG(a, b)   (((a)->flag & ae_flag_##b) == (ae_flag_##b))
#define SAFE_FLAG(a, b)  (a && ((a)->flag & (ae_flag_##b)) == (ae_flag_##b))
#define UNSET_FLAG(a, b) ((a)->flag &= ~(ae_flag_##b))

typedef enum {
  ae_flag_none     = 1 << 0,
  ae_flag_static   = 1 << 1,
  ae_flag_private  = 1 << 2,
  ae_flag_global   = 1 << 3,
  ae_flag_const    = 1 << 4,
  ae_flag_late     = 1 << 5,
  ae_flag_abstract = 1 << 6,
  ae_flag_final    = 1 << 7,
  ae_flag_protect  = 1 << 8,
} __attribute__((packed)) ae_flag;

// function factory for other flag
#define _FLAG_FUNC(A, a)                                                       \
  ANN static inline int a##flag(const A a, const enum a##flag flag) {          \
    return (a->a##flag & flag) == flag;                                        \
  }                                                                            \
  static inline int safe_##a##flag(const A a, const enum a##flag flag) {       \
    return a ? ((a->a##flag & flag) == flag) : 0;                              \
  }
#ifndef __cplusplus
#define FLAG_FUNC(A, a)                                                        \
  ANN static inline void set_##a##flag(A a, const enum a##flag flag) {         \
    a->a##flag |= flag;                                                        \
  }                                                                            \
  static inline void unset_##a##flag(A a, const enum a##flag flag) {           \
    a->a##flag &= ~flag;                                                       \
  }                                                                            \
  _FLAG_FUNC(A, a)
#else
#define FLAG_FUNC(A, a)                                                        \
  ANN static inline void set_##a##flag(A a, const enum a##flag flag) {         \
    auto ff    = a->a##flag | flag;                                            \
    a->a##flag = static_cast<enum a##flag>(ff);                                \
  }                                                                            \
  static inline void unset_##a##flag(A a, const enum a##flag flag) {           \
    const auto ff = a->a##flag & ~flag;                                        \
    a->a##flag    = static_cast<enum a##flag>(ff);                             \
  }                                                                            \
  _FLAG_FUNC(A, a)
#endif

#endif
