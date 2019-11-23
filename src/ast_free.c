 #include "gwion_util.h"
#include "gwion_ast.h"

ANN AST_FREE(Var_Decl, var_decl) {
  if(a->array)
    free_array_sub(p, a->array);
  free_loc(p, a->pos);
  mp_free(p, Var_Decl, a);
}

AST_FREE(Array_Sub, array_sub) {
  if(a->exp)
    free_exp(p, a->exp);
  mp_free(p, Array_Sub, a);
}

ANN AST_FREE(Var_Decl_List, var_decl_list) {
  if(a->next)
    free_var_decl_list(p, a->next);
  free_var_decl(p, a->self);
  mp_free(p, Var_Decl_List, a);
}

ANN AST_FREE(Exp_Lambda*, exp_lambda) {
  free_func_def(p, a->def);
}

ANN AST_FREE(Exp_Array*, exp_array) {
  free_array_sub(p, a->array);
  free_exp(p, a->base);
}

AST_FREE(ID_List, id_list) {
  if(a->next)
    free_id_list(p, a->next);
  if(a->pos)
    free_loc(p, a->pos);
  mp_free(p, ID_List, a);
}

AST_FREE(Type_Decl*, type_decl) {
  if(a->types)
    free_type_list(p, a->types);
  if(a->array)
    free_array_sub(p, a->array);
  if(a->xid)
    free_id_list(p, a->xid);
  if(a->exp)
    free_exp(p, a->exp);
  mp_free(p, Type_Decl, a);
}

ANN AST_FREE(Exp_Decl*, exp_decl) {
  free_type_decl(p, a->td);
  free_var_decl_list(p, a->list);
}

ANN static AST_FREE(Exp_Binary*, exp_binary) {
  free_exp(p, a->lhs);
  free_exp(p, a->rhs);
}

ANN static AST_FREE(Exp_Cast*, exp_cast) {
  free_type_decl(p, a->td);
  free_exp(p, a->exp);
}

ANN static inline AST_FREE(Exp_Postfix*, exp_post) {
  free_exp(p, a->exp);
}

ANN static AST_FREE(Exp_Unary*, exp_unary) {
  if(a->exp)
    free_exp(p, a->exp);
  if(a->td)
    free_type_decl(p, a->td);
  if(a->code)
    free_stmt(p, a->code);
}

ANN static AST_FREE(Exp_If*, exp_if) {
  free_exp(p, a->cond);
  if(a->if_exp)
    free_exp(p, a->if_exp);
  free_exp(p, a->else_exp);
}

AST_FREE(Tmpl*, tmpl) {
  if(a->base == -1)
    free_id_list(p, a->list);
  mp_free(p, Tmpl, a);
}

ANN AST_FREE(Func_Base*, func_base) {
  if(!a->func) {
    if(a->args)
      free_arg_list(p, a->args);
    if(a->td)
      free_type_decl(p, a->td);
  }
}

AST_FREE(Func_Def, func_def) {
  if(!a->base->tmpl && !GET_FLAG(a, global)) {
    free_func_base(p, a->base);
    if(!GET_FLAG(a, builtin) && a->d.code)
      free_stmt(p, a->d.code);
    free_loc(p, a->pos);
    mp_free(p, Func_Def, a);
  }
}

ANN AST_FREE(Type_Def, type_def){
  if(!a->type)
    free_type_decl(p, a->ext);
  mp_free(p, Type_Def, a);
}

ANN AST_FREE(Fptr_Def, fptr_def) {
  free_func_base(p, a->base);
  mp_free(p, Fptr_Def, a);
}

ANN static AST_FREE(Tmpl*, tmpl_call) {
  free_type_list(p, a->call);
  mp_free(p, Tmpl, a);
}

ANN static AST_FREE(Exp_Call*, exp_call) {
  if(a->tmpl)
    free_tmpl_call(p, a->tmpl);
  free_exp(p, a->func);
  if(a->args)
    free_exp(p, a->args);
}

ANN static AST_FREE(Exp_Dot*, exp_dot) {
  if(a->base)
    free_exp(p, a->base);
}

ANN static AST_FREE(Exp_Primary*, prim) {
  const ae_prim_t t = a->prim_type;
  if(t == ae_prim_hack)
    free_exp(p, a->d.exp);
  else if(t == ae_prim_array)
    free_array_sub(p, a->d.array);
  else if(t== ae_prim_complex ||
          t == ae_prim_polar  ||
          t == ae_prim_vec)
    free_exp(p, a->d.vec.exp);
  else if(t == ae_prim_tuple)
    free_exp(p, a->d.tuple.exp);
}

ANN static AST_FREE(Exp_Typeof*, exp_typeof) {
  free_exp(p, a->exp);
}

DECL_EXP_FUNC(free, void, MemPool)

AST_FREE(Exp, exp) {
  if(a->next)
    free_exp(p, a->next);
  free_exp_func[a->exp_type](p, &a->d);
  free_loc(p, a->pos);
  mp_free(p, Exp, a);
}

AST_FREE(Arg_List, arg_list) {
  if(a->next)
    free_arg_list(p, a->next);
  if(a->td)
    free_type_decl(p, a->td);
  free_var_decl(p, a->var_decl);
  mp_free(p, Arg_List, a);

}

ANN static AST_FREE(Stmt_Code, stmt_code) {
  if(a->stmt_list)
    free_stmt_list(p, a->stmt_list);
}

ANN static inline AST_FREE(struct Stmt_Exp_*, stmt_exp) {
  if(a->val)
    free_exp(p, a->val);
}

ANN static AST_FREE(struct Stmt_Flow_*, stmt_flow) {
  free_exp(p, a->cond);
  free_stmt(p, a->body);
}

ANN static AST_FREE(struct Stmt_Match_*, stmt_case) {
  free_exp(p, a->cond);
  free_stmt_list(p, a->list);
  if(a->when)
    free_exp(p, a->when);
}

ANN static AST_FREE(struct Stmt_Match_*, stmt_match) {
  free_exp(p, a->cond);
  Stmt_List list = a->list;
  do free_stmt_case(p, &list->stmt->d.stmt_match);
  while((list = list->next));
  if(a->where)
    free_stmt(p, a->where);
}

ANN static AST_FREE(Stmt_For, stmt_for) {
  free_stmt(p, a->c1);
  free_stmt(p, a->c2);
  if(a->c3)
    free_exp(p, a->c3);
  free_stmt(p, a->body);
}

ANN static AST_FREE(Stmt_Auto, stmt_auto) {
  free_exp(p, a->exp);
  free_stmt(p, a->body);
}

ANN static AST_FREE(Stmt_Loop, stmt_loop) {
  free_exp(p, a->cond);
  free_stmt(p, a->body);
}

ANN static AST_FREE(Stmt_If, stmt_if) {
  free_exp(p, a->cond);
  free_stmt(p, a->if_body);
  if(a->else_body)
    free_stmt(p, a->else_body);
}

ANN AST_FREE(Enum_Def, enum_def) {
  free_id_list(p, a->list);
  vector_release(&a->values);
  free_loc(p, a->pos); // ??
  mp_free(p, Enum_Def, a);
}

ANN static AST_FREE(Stmt_PP, stmt_pp) {
  if(a->data)
    xfree(a->data);
}

ANN AST_FREE(Decl_List, decl_list) {
  if(a->next)
    free_decl_list(p, a->next);
  if(a->self)
    free_exp(p, a->self);
  mp_free(p, Decl_List, a);
}

ANN AST_FREE(Union_Def, union_def) {
  if(!GET_FLAG(a, template) && !GET_FLAG(a, global))
    free_decl_list(p, a->l);
  free_loc(p, a->pos); // ??
  mp_free(p, Union_Def, a);
}

ANN static inline AST_FREE(Stmt_Jump, stmt_jump) {
  if(a->is_label && a->data.v.ptr)
    vector_release(&a->data.v);
}

#define free_stmt_break    (void*)dummy_func
#define free_stmt_continue (void*)dummy_func
#define free_stmt_return free_stmt_exp
#define free_stmt_while free_stmt_flow
#define free_stmt_until free_stmt_flow

DECL_STMT_FUNC(free, void, MemPool);
AST_FREE(Stmt, stmt) {
  free_stmt_func[a->stmt_type](p, &a->d);
  free_loc(p, a->pos);
  mp_free(p, Stmt, a);
}

AST_FREE(Stmt_List, stmt_list) {
  if(a->next)
    free_stmt_list(p, a->next);
  free_stmt(p, a->stmt);
  mp_free(p, Stmt_List, a);
}

AST_FREE(Class_Def, class_def) {
  if(GET_FLAG(a, global) || (a->base.type && GET_FLAG(a, template)))
    return;
  if(a->base.ext)
    free_type_decl(p, a->base.ext);
  if(a->base.tmpl)
    free_tmpl(p, a->base.tmpl);
  if(a->body)
    free_ast(p, a->body);
  free_loc(p, a->pos);
  mp_free(p, Class_Def, a);
}

ANN static AST_FREE(Section*, section) {
  const ae_section_t t = a->section_type;
  if(t == ae_section_class)
    free_class_def(p, a->d.class_def);
  else if(t == ae_section_stmt)
    free_stmt_list(p, a->d.stmt_list);
  else if(t == ae_section_func)
    free_func_def(p, a->d.func_def);
  else if(t == ae_section_enum)
    free_enum_def(p, a->d.enum_def);
  else if(t == ae_section_fptr)
    free_fptr_def(p, a->d.fptr_def);
  else if(t == ae_section_type)
    free_type_def(p, a->d.type_def);
  mp_free(p, Section, a);
}

AST_FREE(Type_List, type_list) {
  if(a->next)
    free_type_list(p, a->next);
  free_type_decl(p, a->td);
  mp_free(p, Type_List, a);
}

AST_FREE(Ast, ast) {
  if(a->next)
    free_ast(p, a->next);
  free_section(p, a->section);
  mp_free(p, Ast, a);
}
