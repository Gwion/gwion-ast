#include "gwion_util.h"
#include "gwion_ast.h"

ANN AST_FREE(Var_Decl, var_decl) {
  if(a->array)
    free_array_sub(p, a->array);
  mp_free(p, Var_Decl, a);
}

AST_FREE(Array_Sub, array_sub) {
  if(a->exp)
    free_exp(p, a->exp);
  mp_free(p, Array_Sub, a);
}

AST_FREE(Range*, range) {
  if(a->start)
    free_exp(p, a->start);
  if(a->end)
    free_exp(p, a->end);
  mp_free(p, Range, a);
}

ANN AST_FREE(Var_Decl_List, var_decl_list) {
  free_var_decl(p, a->self);
  const Var_Decl_List next = a->next;
  mp_free(p, Var_Decl_List, a);
  if(next)
    free_var_decl_list(p, next);
}

ANN AST_FREE(Exp_Lambda*, exp_lambda) {
  free_func_def(p, a->def);
}

ANN AST_FREE(Exp_Array*, exp_array) {
  free_array_sub(p, a->array);
  free_exp(p, a->base);
}

ANN AST_FREE(Exp_Slice*, exp_slice) {
  free_range(p, a->range);
  free_exp(p, a->base);
}

AST_FREE(ID_List, id_list) {
  const ID_List next = a->next;
  mp_free(p, ID_List, a);
  if(next)
    free_id_list(p, next);
}

AST_FREE(Specialized_List, specialized_list) {
  const Specialized_List next = a->next;
  if(a->traits)
    free_id_list(p, a->traits);
  mp_free(p, ID_List, a);
  if(next)
    free_specialized_list(p, next);
}

AST_FREE(Type_Decl*, type_decl) {
  if(a->types)
    free_type_list(p, a->types);
  if(a->array)
    free_array_sub(p, a->array);
  if(a->fptr)
    free_fptr_def(p, a->fptr);
  Type_Decl *next = a->next;
  mp_free(p, Type_Decl, a);
  if(next)
    free_type_decl(p, next);
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
  switch(a->unary_type) {
    case unary_exp:
      if(a->exp)
        free_exp(p, a->exp);
      break;
    case unary_td:
      if(a->td)
        free_type_decl(p, a->td);
      break;
    case unary_code:
      if(a->code)
        free_stmt(p, a->code);
      break;
  }
}

ANN static AST_FREE(Exp_If*, exp_if) {
  free_exp(p, a->cond);
  if(a->if_exp)
    free_exp(p, a->if_exp);
  free_exp(p, a->else_exp);
}

AST_FREE(Tmpl*, tmpl) {
  if(a->base == -1)
    free_specialized_list(p, a->list);
  if(a->call)
    free_type_list(p, a->call);
  mp_free(p, Tmpl, a);
}

ANN AST_FREE(Func_Base*, func_base) {
  if(a->args)
    free_arg_list(p, a->args);
  if(a->td)
    free_type_decl(p, a->td);
  if(a->tmpl)
    free_tmpl(p, a->tmpl);
  if(a->effects.ptr)
    vector_release(&a->effects);
}

AST_FREE(Func_Def, func_def) {
  free_func_base(p, a->base);
  if(a->d.code)
    free_stmt(p, a->d.code);
  mp_free(p, Func_Def, a);
}

ANN AST_FREE(Type_Def, type_def){
  free_type_decl(p, a->ext);
  if(a->when) {
    free_exp(p, a->when);
    if(a->when_def)
      free_func_def(p, a->when_def);
  }
  mp_free(p, Type_Def, a);
}

ANN AST_FREE(Fptr_Def, fptr_def) {
  free_func_base(p, a->base);
  mp_free(p, Fptr_Def, a);
}

ANN static AST_FREE(Exp_Call*, exp_call) {
  if(a->tmpl)
    free_tmpl(p, a->tmpl);
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
  if(t == ae_prim_hack || t == ae_prim_interp)
    free_exp(p, a->d.exp);
  else if(t == ae_prim_array)
    free_array_sub(p, a->d.array);
  else if(t == ae_prim_range)
    free_range(p, a->d.range);
}

ANN static AST_FREE(Type_Decl**, exp_td) {
  free_type_decl(p, *a);
}
DECL_EXP_FUNC(free, void, MemPool)

AST_FREE(Exp, exp) {
  free_exp_func[a->exp_type](p, &a->d);
  const Exp next = a->next;
  mp_free(p, Exp, a);
  if(next)
    free_exp(p, next);
}

AST_FREE(Arg_List, arg_list) {
  if(a->td)
    free_type_decl(p, a->td);
  if(a->exp)
    free_exp(p, a->exp);
  free_var_decl(p, a->var_decl);
  const Arg_List next = a->next;
  mp_free(p, Arg_List, a);
  if(next)
    free_arg_list(p, next);
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

ANN static AST_FREE(struct Stmt_VarLoop_*, stmt_varloop) {
  free_exp(p, a->exp);
  free_stmt(p, a->body);
}

ANN static AST_FREE(struct Stmt_Match_*, stmt_case) {
  free_exp(p, a->cond);
  free_stmt_list(p, a->list);
  if(a->when)
    free_exp(p, a->when);
}

ANN static AST_FREE(struct Handler_List_*, handler_list) {
  free_stmt(p, a->stmt);
  if(a->next)
    free_handler_list(p, a->next);
}

ANN static AST_FREE(struct Stmt_Try_*, stmt_try) {
  free_stmt(p, a->stmt);
  free_handler_list(p, a->handler);
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

ANN static AST_FREE(Stmt_Each, stmt_each) {
  free_exp(p, a->exp);
  free_stmt(p, a->body);
  if(a->idx)
    mp_free(p, EachIdx, a->idx);
}

ANN static AST_FREE(Stmt_Loop, stmt_loop) {
  free_exp(p, a->cond);
  free_stmt(p, a->body);
  if(a->idx)
    mp_free(p, EachIdx, a->idx);
}

ANN static AST_FREE(Stmt_If, stmt_if) {
  free_exp(p, a->cond);
  free_stmt(p, a->if_body);
  if(a->else_body)
    free_stmt(p, a->else_body);
}

ANN AST_FREE(Enum_Def, enum_def) {
  free_id_list(p, a->list);
  mp_free(p, Enum_Def, a);
}

ANN static AST_FREE(Stmt_PP, stmt_pp) {
  if(a->data)
    xfree(a->data);
}

ANN static AST_FREE(Stmt_Defer, stmt_defer) {
  free_stmt(p, a->stmt);
}

ANN AST_FREE(Union_List, union_list) {
  free_type_decl(p, a->td);
  if(a->next)
    free_union_list(p, a->next);
  mp_free(p, Union_List, a);
}

ANN AST_FREE(Union_Def, union_def) {
  free_union_list(p, a->l);
  mp_free(p, Union_Def, a);
}

#define free_stmt_retry    (void*)dummy_func
#define free_stmt_break    (void*)dummy_func
#define free_stmt_continue (void*)dummy_func
#define free_stmt_return free_stmt_exp
#define free_stmt_while free_stmt_flow
#define free_stmt_until free_stmt_flow

DECL_STMT_FUNC(free, void, MemPool);
AST_FREE(Stmt, stmt) {
  free_stmt_func[a->stmt_type](p, &a->d);
  mp_free(p, Stmt, a);
}

AST_FREE(Stmt_List, stmt_list) {
  free_stmt(p, a->stmt);
  const Stmt_List next = a->next;
  mp_free(p, Stmt_List, a);
  if(next)
    free_stmt_list(p, next);
}

AST_FREE(Extend_Def, extend_def) {
  free_ast(p, a->body);
  free_type_decl(p, a->td);
  mp_free(p, Extend_Def, a);
}

AST_FREE(Class_Def, class_def) {
  if(a->base.ext)
    free_type_decl(p, a->base.ext);
  if(a->base.tmpl)
    free_tmpl(p, a->base.tmpl);
   if(a->traits)
     free_id_list(p, a->traits);
   if(a->body)
     free_ast(p, a->body);
   mp_free(p, Class_Def, a);
}

AST_FREE(Trait_Def, trait_def) {
  if(a->traits)
    free_id_list(p, a->traits);
  if(a->body)
    free_ast(p, a->body);
  mp_free(p, Trait_Def, a);
}

ANN static AST_FREE(Section*, section) {
  const ae_section_t t = a->section_type;
  if(t == ae_section_class)
    free_class_def(p, a->d.class_def);
  if(t == ae_section_trait)
    free_trait_def(p, a->d.trait_def);
  else if(t == ae_section_extend)
    free_extend_def(p, a->d.extend_def);
  else if(t == ae_section_stmt)
    free_stmt_list(p, a->d.stmt_list);
  else if(t == ae_section_func)
    free_func_def(p, a->d.func_def);
  else if(t == ae_section_enum)
    free_enum_def(p, a->d.enum_def);
  else if(t == ae_section_union)
    free_union_def(p, a->d.union_def);
  else if(t == ae_section_fptr)
    free_fptr_def(p, a->d.fptr_def);
  else if(t == ae_section_type)
    free_type_def(p, a->d.type_def);
  mp_free(p, Section, a);
}

AST_FREE(Type_List, type_list) {
  free_type_decl(p, a->td);
  const Type_List next = a->next;
  mp_free(p, Type_List, a);
  if(next)
    free_type_list(p, next);
}

AST_FREE(Ast, ast) {
  const Ast next = a->next;
  free_section(p, a->section);
  mp_free(p, Ast, a);
  if(next)
    free_ast(p, next);
}
