/** @file: ast_pass.h
\brief macros to simplify pass writing
*/
#ifndef __AST_PASS
#define __AST_PASS

static inline m_bool dummy_func(const void*a NUSED,
  const void*b NUSED) { return 1; }

#define DECL_PRIM_FUNC(prefix, type, arg)                                                       \
typedef type (*_##prefix##_prim_func)(arg, union prim_data*);                                   \
const _##prefix##_prim_func prefix##_prim_func[] = {                                            \
  (_##prefix##_prim_func)prefix##_prim_id,     (_##prefix##_prim_func)prefix##_prim_num,        \
  (_##prefix##_prim_func)prefix##_prim_float,  (_##prefix##_prim_func)prefix##_prim_str,        \
  (_##prefix##_prim_func)prefix##_prim_array,  (_##prefix##_prim_func)prefix##_prim_range,      \
  (_##prefix##_prim_func)prefix##_prim_hack,   (_##prefix##_prim_func)prefix##_prim_char,       \
  (_##prefix##_prim_func)prefix##_prim_nil,    (_##prefix##_prim_func)prefix##_prim_interp      \
};

#define DECL_EXP_FUNC(prefix, type, arg)                                                        \
typedef type (*_##prefix##_exp_func)(const arg, union exp_data*);                               \
const _##prefix##_exp_func prefix##_exp_func[] = {                                              \
  (_##prefix##_exp_func)prefix##_exp_decl,   (_##prefix##_exp_func)prefix##_exp_binary,         \
  (_##prefix##_exp_func)prefix##_exp_unary,  (_##prefix##_exp_func)prefix##_prim,               \
  (_##prefix##_exp_func)prefix##_exp_cast,   (_##prefix##_exp_func)prefix##_exp_post,           \
  (_##prefix##_exp_func)prefix##_exp_call,   (_##prefix##_exp_func)prefix##_exp_array,          \
  (_##prefix##_exp_func)prefix##_exp_slice,  (_##prefix##_exp_func)prefix##_exp_if,             \
  (_##prefix##_exp_func)prefix##_exp_dot,    (_##prefix##_exp_func)prefix##_exp_lambda,         \
  (_##prefix##_exp_func)prefix##_exp_td,                                                        \
};

#define DECL_STMT_FUNC(prefix, type, arg)                                                       \
typedef type (*_##prefix##_stmt_func)(const arg, union stmt_data*);                             \
const _##prefix##_stmt_func prefix##_stmt_func[] = {                                            \
  (_##prefix##_stmt_func)prefix##_stmt_exp,      (_##prefix##_stmt_func)prefix##_stmt_while,    \
  (_##prefix##_stmt_func)prefix##_stmt_until,    (_##prefix##_stmt_func)prefix##_stmt_for,      \
  (_##prefix##_stmt_func)prefix##_stmt_each,     (_##prefix##_stmt_func)prefix##_stmt_loop,     \
  (_##prefix##_stmt_func)prefix##_stmt_if,       (_##prefix##_stmt_func)prefix##_stmt_code,     \
  (_##prefix##_stmt_func)prefix##_stmt_varloop,  (_##prefix##_stmt_func)prefix##_stmt_break,    \
  (_##prefix##_stmt_func)prefix##_stmt_continue, (_##prefix##_stmt_func)prefix##_stmt_return,   \
  (_##prefix##_stmt_func)prefix##_stmt_match,    (_##prefix##_stmt_func)prefix##_stmt_pp,       \
  (_##prefix##_stmt_func)prefix##_stmt_defer                                                    \
};

#define DECL_SECTION_FUNC(prefix, type, arg)                                                    \
typedef type (*_##prefix##_section_func)(const arg, union section_data*);                       \
const _##prefix##_section_func prefix##_section_func[] = {                                      \
  (_##prefix##_section_func)prefix##_stmt_list, (_##prefix##_section_func)prefix##_func_def,    \
  (_##prefix##_section_func)prefix##_class_def, (_##prefix##_section_func)prefix##_enum_def,    \
  (_##prefix##_section_func)prefix##_union_def, (_##prefix##_section_func)prefix##_fptr_def,    \
  (_##prefix##_section_func)prefix##_type_def                                                   \
};

#endif
