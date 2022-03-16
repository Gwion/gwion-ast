#include "gwion_util.h"
#include "gwion_ast.h"

AST_FREE(Stmt_List, stmt_list);
static AST_FREE(Stmt, stmt2);

static ANN AST_FREE(Var_Decl, var_decl2) {
  if (a->array) free_array_sub(p, a->array);
}

ANN AST_FREE(Var_Decl, var_decl) {
  free_var_decl2(p, a);
  mp_free(p, Var_Decl, a);
}

AST_FREE(Array_Sub, array_sub) {
  if (a->exp) free_exp(p, a->exp);
  mp_free(p, Array_Sub, a);
}

AST_FREE(Range *, range) {
  if (a->start) free_exp(p, a->start);
  if (a->end) free_exp(p, a->end);
  mp_free(p, Range, a);
}

ANN AST_FREE(Var_Decl_List, var_decl_list) {
  for(uint32_t i = 0; i < a->len;i ++) {
    Var_Decl vd = mp_vector_at(a, struct Var_Decl_, i);
    free_var_decl2(p, vd);
  }
  free_mp_vector(p, sizeof(struct Var_Decl_), a);
}

ANN AST_FREE(Exp_Lambda *, exp_lambda) { free_func_def(p, a->def); }

ANN AST_FREE(Exp_Array *, exp_array) {
  free_array_sub(p, a->array);
  free_exp(p, a->base);
}

ANN AST_FREE(Exp_Slice *, exp_slice) {
  free_range(p, a->range);
  free_exp(p, a->base);
}

AST_FREE(ID_List, id_list) {
  free_mp_vector(p, sizeof(ID_List), a);
}

AST_FREE(Specialized_List, specialized_list) {
  for(uint32_t i = 0; i < a->len; i++) {
    Specialized *spec = mp_vector_at(a, Specialized, i);
    if (spec->traits) free_id_list(p, spec->traits);
  }
  free_mp_vector(p, sizeof(Specialized), a);
}

AST_FREE(Type_Decl *, type_decl) {
  if (a->types) free_type_list(p, a->types);
  if (a->array) free_array_sub(p, a->array);
  if (a->fptr) free_fptr_def(p, a->fptr);
  if (a->next) free_type_decl(p, a->next);
  mp_free(p, Type_Decl, a);
}

ANN AST_FREE(Exp_Decl *, exp_decl) {
  free_type_decl(p, a->td);
  free_var_decl_list(p, a->list);
}

ANN static AST_FREE(Exp_Binary *, exp_binary) {
  free_exp(p, a->lhs);
  free_exp(p, a->rhs);
}

ANN static AST_FREE(Exp_Cast *, exp_cast) {
  free_type_decl(p, a->td);
  free_exp(p, a->exp);
}

ANN static inline AST_FREE(Exp_Postfix *, exp_post) { free_exp(p, a->exp); }

ANN static AST_FREE(Exp_Unary *, exp_unary) {
  switch (a->unary_type) {
  case unary_exp:
//    if (a->exp) 
free_exp(p, a->exp);
    break;
  case unary_td:
    free_type_decl(p, a->ctor.td);
    if (a->ctor.exp) free_exp(p, a->ctor.exp);
    break;
  case unary_code:
 //   if (a->code) 
 free_stmt(p, a->code);
    break;
  }
}

ANN static AST_FREE(Exp_If *, exp_if) {
  free_exp(p, a->cond);
  if (a->if_exp) free_exp(p, a->if_exp);
  free_exp(p, a->else_exp);
}

AST_FREE(Tmpl *, tmpl) {
  if (a->base == -1) free_specialized_list(p, a->list);
  if (a->call) free_type_list(p, a->call);
  mp_free(p, Tmpl, a);
}

ANN AST_FREE(Func_Base *, func_base) {
  if (a->args) free_arg_list(p, a->args);
  if (a->td) free_type_decl(p, a->td);
  if (a->tmpl) free_tmpl(p, a->tmpl);
  if (a->effects.ptr) vector_release(&a->effects);
}

AST_FREE(Func_Def, func_def) {
  free_func_base(p, a->base);
  if (!a->builtin && a->d.code) free_stmt(p, a->d.code);
  mp_free(p, Func_Def, a);
}

ANN AST_FREE(Type_Def, type_def) {
  free_type_decl(p, a->ext);
  if (a->when) {
    free_exp(p, a->when);
    if (a->when_def) free_func_def(p, a->when_def);
  }
  mp_free(p, Type_Def, a);
}

ANN AST_FREE(Fptr_Def, fptr_def) {
  free_func_base(p, a->base);
  mp_free(p, Fptr_Def, a);
}

ANN static AST_FREE(Exp_Call *, exp_call) {
  if (a->tmpl) free_tmpl(p, a->tmpl);
  free_exp(p, a->func);
  if (a->args) free_exp(p, a->args);
}

ANN static AST_FREE(Exp_Dot *, exp_dot) {
  if (a->base) free_exp(p, a->base);
}

ANN static AST_FREE(Exp_Primary *, prim) {
  const ae_prim_t t = a->prim_type;
  if (t == ae_prim_hack || t == ae_prim_dict || t == ae_prim_interp)
    free_exp(p, a->d.exp);
  else if (t == ae_prim_array)
    free_array_sub(p, a->d.array);
  else if (t == ae_prim_range)
    free_range(p, a->d.range);
}

ANN static AST_FREE(Type_Decl **, exp_td) { free_type_decl(p, *a); }
DECL_EXP_FUNC(free, void, MemPool)

AST_FREE(Exp, exp) {
  free_exp_func[a->exp_type](p, &a->d);
  const Exp next = a->next;
  mp_free(p, Exp, a);
  if (next) free_exp(p, next);
}

AST_FREE(Arg_List, arg_list) {
  for(uint32_t i = 0; i < a->len; i++) {
    Arg *arg = (Arg*)(a->ptr + i * sizeof(Arg));
    if (arg->td) free_type_decl(p, arg->td);
    if (arg->exp) free_exp(p, arg->exp);
    free_var_decl2(p, &arg->var_decl);
  }
}

ANN static AST_FREE(Stmt_Code, stmt_code) {
  if (a->stmt_list) free_stmt_list(p, a->stmt_list);
}

ANN static inline AST_FREE(struct Stmt_Exp_ *, stmt_exp) {
  if (a->val) free_exp(p, a->val);
}

ANN static AST_FREE(struct Stmt_Flow_ *, stmt_flow) {
  free_exp(p, a->cond);
  free_stmt(p, a->body);
}

ANN static AST_FREE(struct Stmt_VarLoop_ *, stmt_varloop) {
  free_exp(p, a->exp);
  free_stmt(p, a->body);
}

ANN static AST_FREE(struct Stmt_Match_ *, stmt_case) {
  free_exp(p, a->cond);
  free_stmt_list(p, a->list);
  if (a->when) free_exp(p, a->when);
}

ANN static AST_FREE(Handler_List, handler_list) {
  for(uint32_t i = 0; i < a->len; i++) {
    Handler * handler = mp_vector_at(a, Handler, i);
    free_stmt(p, handler->stmt);
  }
}

ANN static AST_FREE(struct Stmt_Try_ *, stmt_try) {
  free_stmt(p, a->stmt);
  free_handler_list(p, a->handler);
}

ANN static AST_FREE(struct Stmt_Match_ *, stmt_match) {
  free_exp(p, a->cond);
  for(m_uint i = 0; i  < a->list->len; i++) {
    const m_uint offset = i * sizeof(struct Stmt_);
    const Stmt stmt = (Stmt)(a->list->ptr + offset);
    free_stmt_case(p, &stmt->d.stmt_match);
  }
  free_mp_vector(p, sizeof(struct Stmt_), a->list);
  if (a->where) free_stmt(p, a->where);
}

ANN static AST_FREE(Stmt_For, stmt_for) {
  free_stmt(p, a->c1);
  free_stmt(p, a->c2);
  if (a->c3) free_exp(p, a->c3);
  free_stmt(p, a->body);
}

ANN static AST_FREE(Stmt_Each, stmt_each) {
  free_exp(p, a->exp);
  free_stmt(p, a->body);
  if (a->idx) mp_free(p, EachIdx, a->idx);
}

ANN static AST_FREE(Stmt_Loop, stmt_loop) {
  free_exp(p, a->cond);
  free_stmt(p, a->body);
  if (a->idx) mp_free(p, EachIdx, a->idx);
}

ANN static AST_FREE(Stmt_If, stmt_if) {
  free_exp(p, a->cond);
  free_stmt(p, a->if_body);
  if (a->else_body) free_stmt(p, a->else_body);
}

ANN AST_FREE(Enum_Def, enum_def) {
  free_id_list(p, a->list);
  mp_free(p, Enum_Def, a);
}

ANN static AST_FREE(Stmt_PP, stmt_pp) {
  if (a->data) xfree(a->data);
}

ANN static AST_FREE(Stmt_Defer, stmt_defer) { free_stmt(p, a->stmt); }

ANN AST_FREE(Union_List, union_list) {
  for(uint32_t i = 0; i < a->len; i++) {
    Union_Member *tgt = mp_vector_at(a, Union_Member, i);
    free_type_decl(p, tgt->td);
  }
  free_mp_vector(p, sizeof(Union_Member), a);
}

ANN AST_FREE(Union_Def, union_def) {
  free_union_list(p, a->l);
  mp_free(p, Union_Def, a);
}

#define free_stmt_retry    (void *)dummy_func
#define free_stmt_break    (void *)dummy_func
#define free_stmt_continue (void *)dummy_func
#define free_stmt_return   free_stmt_exp
#define free_stmt_while    free_stmt_flow
#define free_stmt_until    free_stmt_flow

DECL_STMT_FUNC(free, void, MemPool);
static AST_FREE(Stmt, stmt2) {
  free_stmt_func[a->stmt_type](p, &a->d);
}

AST_FREE(Stmt, stmt) {
  free_stmt_func[a->stmt_type](p, &a->d);
  mp_free(p, Stmt, a);
}

AST_FREE(Stmt_List, stmt_list) {
  for(m_uint i = 0; i  < a->len; i++) {
    const m_uint offset = i * sizeof(struct Stmt_);
    const Stmt stmt = (Stmt)(a->ptr + offset);
    free_stmt2(p, stmt);
  }
  free_mp_vector(p, sizeof(struct Stmt_), a);
}

AST_FREE(Extend_Def, extend_def) {
  free_ast(p, a->body);
  free_type_decl(p, a->td);
  mp_free(p, Extend_Def, a);
}

AST_FREE(Class_Def, class_def) {
  if (a->base.ext) free_type_decl(p, a->base.ext);
  if (a->base.tmpl) free_tmpl(p, a->base.tmpl);
  if (a->traits) free_id_list(p, a->traits);
  if (a->body) free_ast(p, a->body);
  mp_free(p, Class_Def, a);
}

AST_FREE(Trait_Def, trait_def) {
  if (a->traits) free_id_list(p, a->traits);
  if (a->body) free_ast(p, a->body);
  mp_free(p, Trait_Def, a);
}

ANN static AST_FREE(Section *, section) {
  const ae_section_t t = a->section_type;
  if (t == ae_section_class)
    free_class_def(p, a->d.class_def);
  else if (t == ae_section_trait)
    free_trait_def(p, a->d.trait_def);
  else if (t == ae_section_extend)
    free_extend_def(p, a->d.extend_def);
  else if (t == ae_section_stmt)
    free_stmt_list(p, a->d.stmt_list);
  else if (t == ae_section_func)
    free_func_def(p, a->d.func_def);
  else if (t == ae_section_enum)
    free_enum_def(p, a->d.enum_def);
  else if (t == ae_section_union)
    free_union_def(p, a->d.union_def);
  else if (t == ae_section_fptr)
    free_fptr_def(p, a->d.fptr_def);
  else if (t == ae_section_type)
    free_type_def(p, a->d.type_def);
}

AST_FREE(Type_List, type_list) {
  for(uint32_t i = 0; i < a->len; i++) {
    Type_Decl *td = *mp_vector_at(a, Type_Decl*, i);
    free_type_decl(p, td);
  }
  free_mp_vector(p, sizeof(Type_Decl*), a);
}

AST_FREE(Ast, ast) {
  for(m_uint i = 0; i < a->len; i++) {
    const m_uint offset = i * sizeof(Section);
    free_section(p, (Section*)(a->ptr + offset));
  }
  free_mp_vector(p, sizeof(Section), a);
}
