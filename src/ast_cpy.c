#include "gwion_util.h"
#include "gwion_ast.h"

ANN static Stmt      cpy_stmt(MemPool p, const Stmt src);
ANN Exp              cpy_exp(MemPool p, const Exp src);
ANN Type_List        cpy_type_list(MemPool p, const Type_List src);
ANN Arg_List         cpy_arg_list(MemPool p, const Arg_List src);
ANN Class_Def        cpy_class_def(MemPool p, const Class_Def src);
ANN static Stmt_List cpy_stmt_list(MemPool p, const Stmt_List src);

ANN static void cpy_exp_dot(MemPool p, Exp_Dot *a, const Exp_Dot *src) {
  a->base = cpy_exp(p, src->base);
  a->xid  = src->xid;
}

ANN static void cpy_exp_lambda(MemPool p, Exp_Lambda *a,
                               const Exp_Lambda *src) {
  a->def = cpy_func_def(p, src->def);
}

ANN Array_Sub cpy_array_sub(MemPool p, const Array_Sub src) {
  Array_Sub a = mp_calloc(p, Array_Sub);
  if (src->exp) a->exp = cpy_exp(p, src->exp);
  a->depth = src->depth;
  return a;
}

ANN Range *cpy_range(MemPool p, const Range *src) {
  Range *a = mp_calloc(p, Array_Sub);
  if (src->start) a->start = cpy_exp(p, src->start);
  if (src->end) a->end = cpy_exp(p, src->end);
  return a;
}

ANN static void cpy_exp_array(MemPool p, Exp_Array *a, const Exp_Array *src) {
  a->base  = cpy_exp(p, src->base);
  a->array = cpy_array_sub(p, src->array);
}

ANN static void cpy_exp_slice(MemPool p, Exp_Slice *a, const Exp_Slice *src) {
  a->base  = cpy_exp(p, src->base);
  a->range = cpy_range(p, src->range);
}

ANN /*static */ Var_Decl cpy_var_decl(MemPool p, const Var_Decl src) {
  Var_Decl a = mp_calloc(p, Var_Decl);
  a->xid     = src->xid;                                   // 1
  if (src->array) a->array = cpy_array_sub(p, src->array); // 1
  a->pos = src->pos;                                       // 1
  return a;
}

ANN static Var_Decl_List cpy_var_decl_list(MemPool p, const Var_Decl_List src) {
  Var_Decl_List a = mp_calloc(p, Var_Decl_List);
  a->self         = cpy_var_decl(p, src->self);             // 1
  if (src->next) a->next = cpy_var_decl_list(p, src->next); // 1
  return a;
}

ANN Type_Decl *cpy_type_decl(MemPool p, const Type_Decl *src) {
  Type_Decl *a = mp_calloc(p, Type_Decl);
  a->xid       = src->xid;
  if (src->array) a->array = cpy_array_sub(p, src->array); // 1
  if (src->types) a->types = cpy_type_list(p, src->types); // 1
  a->pos  = src->pos;
  a->flag = src->flag; // 1
  if (src->next) a->next = cpy_type_decl(p, src->next);
  if (src->fptr) a->fptr = cpy_fptr_def(p, src->fptr);
  a->option = src->option;
  a->ref    = src->ref;
  return a;
}

ANN ID_List cpy_id_list(MemPool p, const ID_List src) {
  ID_List a = mp_calloc(p, ID_List);
  a->xid    = src->xid;                               // 1
  if (src->next) a->next = cpy_id_list(p, src->next); // 1
  return a;
}

ANN Specialized_List cpy_specialized_list(MemPool                p,
                                          const Specialized_List src) {
  Specialized_List a = mp_calloc(p, Specialized_List);
  a->xid             = src->xid;                               // 1
  if (src->traits) a->traits = cpy_id_list(p, src->traits);    // 1
  if (src->next) a->next = cpy_specialized_list(p, src->next); // 1
  a->pos = src->pos;
  return a;
}

ANN Type_List cpy_type_list(MemPool p, const Type_List src) {
  Type_List a = mp_calloc(p, Type_List);
  a->td       = cpy_type_decl(p, src->td);              // 1
  if (src->next) a->next = cpy_type_list(p, src->next); // 1
  return a;
}

ANN Arg_List cpy_arg_list(MemPool p, const Arg_List src) {
  Arg_List a = mp_calloc(p, Arg_List);
  if (src->td) a->td = cpy_type_decl(p, src->td);                  // 1
  if (src->var_decl) a->var_decl = cpy_var_decl(p, src->var_decl); // 1
  if (src->exp) a->exp = cpy_exp(p, src->exp);                     // 1
  if (src->next) a->next = cpy_arg_list(p, src->next);             // 1
  return a;
}

ANN static void cpy_exp_decl(MemPool p, Exp_Decl *a, const Exp_Decl *src) {
  a->td   = cpy_type_decl(p, src->td);
  a->list = cpy_var_decl_list(p, src->list);
}

ANN static void cpy_prim(MemPool p, Exp_Primary *a, const Exp_Primary *src) {
  switch (src->prim_type) {
  case ae_prim_id:
  case ae_prim_perform:
    a->d.var = src->d.var;
    break;
  case ae_prim_num:
    a->d.num = src->d.num;
    break;
  case ae_prim_float:
    a->d.fnum = src->d.fnum;
    break;
  case ae_prim_char:
    a->d.chr = src->d.chr;
    break;
  case ae_prim_str:
    a->d.str = src->d.str;
    break;
  case ae_prim_array:
    a->d.array = cpy_array_sub(p, src->d.array);
    break;
  case ae_prim_range:
    a->d.range = cpy_range(p, src->d.range);
    break;
  default:
    if (src->d.exp) a->d.exp = cpy_exp(p, src->d.exp);
    break;
  }
  a->prim_type = src->prim_type;
}

ANN Tmpl *cpy_tmpl(MemPool p, const Tmpl *src) {
  Tmpl *a = mp_calloc(p, Tmpl);
  a->base = src->base;
  a->list = (a->base == -1 && src->list) ? cpy_specialized_list(p, src->list)
                                         : src->list;
  if (src->call) a->call = cpy_type_list(p, src->call);
  return a;
}

ANN static void cpy_exp_call(MemPool p, Exp_Call *a, const Exp_Call *src) {
  a->func = cpy_exp(p, src->func);
  if (src->args) a->args = cpy_exp(p, src->args);
  if (src->tmpl) a->tmpl = cpy_tmpl(p, src->tmpl);
}

ANN static void cpy_exp_cast(MemPool p, Exp_Cast *a, const Exp_Cast *src) {
  a->td  = cpy_type_decl(p, src->td);
  a->exp = cpy_exp(p, src->exp);
}

ANN static void cpy_exp_binary(MemPool p, Exp_Binary *a,
                               const Exp_Binary *src) {
  a->lhs = cpy_exp(p, src->lhs);
  a->rhs = cpy_exp(p, src->rhs);
  a->op  = src->op;
}

ANN static void cpy_exp_postfix(MemPool p, Exp_Postfix *a,
                                const Exp_Postfix *src) {
  a->op  = src->op;
  a->exp = cpy_exp(p, src->exp);
}

ANN static void cpy_exp_if(MemPool p, Exp_If *a, const Exp_If *src) {
  a->cond = cpy_exp(p, src->cond);
  if (src->if_exp) a->if_exp = cpy_exp(p, src->if_exp);
  if (src->else_exp) a->else_exp = cpy_exp(p, src->else_exp);
}

// TODO check me
ANN static void cpy_exp_unary(MemPool p, Exp_Unary *a, const Exp_Unary *src) {
  a->op = src->op;
  switch ((a->unary_type = src->unary_type)) {
  case unary_exp:
    a->exp = cpy_exp(p, src->exp);
    break;
  case unary_td:
    a->ctor.td = cpy_type_decl(p, src->ctor.td);
    if(src->ctor.exp)
      a->ctor.exp = cpy_exp(p, src->ctor.exp);
    break;
  case unary_code:
    a->code = cpy_stmt(p, src->code);
    break;
  }
}

ANN Exp cpy_exp(MemPool p, const Exp src) {
  Exp a = mp_calloc(p, Exp);
  if (src->next) a->next = cpy_exp(p, src->next);
  switch (src->exp_type) {
  case ae_exp_post: // !! naming
    cpy_exp_postfix(p, &a->d.exp_post, &src->d.exp_post);
    break;
  case ae_exp_primary:
    cpy_prim(p, &a->d.prim, &src->d.prim);
    break;
  case ae_exp_decl:
    cpy_exp_decl(p, &a->d.exp_decl, &src->d.exp_decl);
    break;
  case ae_exp_unary:
    cpy_exp_unary(p, &a->d.exp_unary, &src->d.exp_unary);
    break;
  case ae_exp_binary:
    cpy_exp_binary(p, &a->d.exp_binary, &src->d.exp_binary);
    break;
  case ae_exp_cast:
    cpy_exp_cast(p, &a->d.exp_cast, &src->d.exp_cast);
    break;
  case ae_exp_call:
    cpy_exp_call(p, &a->d.exp_call, &src->d.exp_call);
    break;
  case ae_exp_if:
    cpy_exp_if(p, &a->d.exp_if, &src->d.exp_if);
    break;
  case ae_exp_dot:
    cpy_exp_dot(p, &a->d.exp_dot, &src->d.exp_dot);
    break;
  case ae_exp_array:
    cpy_exp_array(p, &a->d.exp_array, &src->d.exp_array);
    break;
  case ae_exp_slice:
    cpy_exp_slice(p, &a->d.exp_slice, &src->d.exp_slice);
    break;
  case ae_exp_lambda:
    cpy_exp_lambda(p, &a->d.exp_lambda, &src->d.exp_lambda);
    break;
  case ae_exp_td:
    a->d.exp_td = cpy_type_decl(p, src->d.exp_td);
    break;
  }
  a->exp_type = src->exp_type;
  a->emit_var = src->emit_var;
  //  a->meta = src->meta;// maybe meta shoyuld be set as in constructors
  a->pos = src->pos;
  return a;
}

ANN static void cpy_stmt_exp(MemPool p, const Stmt_Exp a, const Stmt_Exp src) {
  if (src->val) a->val = cpy_exp(p, src->val);
}

ANN static void cpy_stmt_flow(MemPool p, Stmt_Flow a, const Stmt_Flow src) {
  if (src->cond) a->cond = cpy_exp(p, src->cond);
  if (src->body) a->body = cpy_stmt(p, src->body);
  a->is_do = src->is_do;
}

ANN static void cpy_stmt_varloop(MemPool p, Stmt_VarLoop a,
                                 const Stmt_VarLoop src) {
  a->exp = cpy_exp(p, src->exp);
  if (src->body) a->body = cpy_stmt(p, src->body);
}

ANN static void cpy_stmt_defer(MemPool p, Stmt_Defer a, const Stmt_Defer src) {
  a->stmt = cpy_stmt(p, src->stmt);
}

ANN static void cpy_stmt_code(MemPool p, Stmt_Code a, const Stmt_Code src) {
  if (src->stmt_list) a->stmt_list = cpy_stmt_list(p, src->stmt_list);
}

ANN static void cpy_stmt_for(MemPool p, Stmt_For a, const Stmt_For src) {
  if (src->c1) a->c1 = cpy_stmt(p, src->c1);
  if (src->c2) a->c2 = cpy_stmt(p, src->c2);
  if (src->c3) a->c3 = cpy_exp(p, src->c3);
  if (src->body) a->body = cpy_stmt(p, src->body);
}

ANN static struct EachIdx_ *cpy_eachidx(MemPool p, const struct EachIdx_ *src) {
  struct EachIdx_ *a = mp_malloc(p, EachIdx);
  a->sym             = src->sym;
  a->pos             = src->pos;
  return a;
}

ANN static void cpy_stmt_each(MemPool p, Stmt_Each a, const Stmt_Each src) {
  a->sym  = src->sym;
  a->exp  = cpy_exp(p, src->exp);
  a->body = cpy_stmt(p, src->body);
  if (src->idx) cpy_eachidx(p, src->idx);
  a->vpos = src->vpos;
}

ANN static void cpy_stmt_loop(MemPool p, Stmt_Loop a, const Stmt_Loop src) {
  a->cond = cpy_exp(p, src->cond);
  a->body = cpy_stmt(p, src->body);
  if (src->idx) cpy_eachidx(p, src->idx);
}

ANN static void cpy_stmt_if(MemPool p, Stmt_If a, const Stmt_If src) {
  if (src->cond) a->cond = cpy_exp(p, src->cond);
  if (src->if_body) a->if_body = cpy_stmt(p, src->if_body);
  if (src->else_body) a->else_body = cpy_stmt(p, src->else_body);
}

ANN static Stmt cpy_stmt_case(MemPool p, const Stmt_Match src) {
  Stmt a               = mp_calloc(p, Stmt);
  a->d.stmt_match.cond = cpy_exp(p, src->cond);
  a->d.stmt_match.list = cpy_stmt_list(p, src->list);
  if (src->when) a->d.stmt_match.when = cpy_exp(p, src->when);
  return a;
}

ANN static void cpy_stmt_pp(MemPool p NUSED, Stmt_PP a, const Stmt_PP src) {
  if (src->data) a->data = strdup(src->data);
}

ANN static Stmt_List cpy_stmt_cases(MemPool p, const Stmt_List src) {
  Stmt_List a = mp_calloc(p, Stmt_List);
  if (src->next) a->next = cpy_stmt_cases(p, src->next);
  a->stmt = cpy_stmt_case(p, &src->stmt->d.stmt_match);
  return a;
}

ANN static Handler_List cpy_handler_list(MemPool p, const Handler_List src) {
  Handler_List a = mp_calloc(p, Handler_List);
  a->stmt        = src->stmt;
  a->xid         = src->xid;
  if (src->next) a->next = cpy_handler_list(p, src->next);
  a->pos = src->pos;
  return a;
}

ANN static void cpy_stmt_try(MemPool p, Stmt_Try a, const Stmt_Try src) {
  a->stmt    = cpy_stmt(p, src->stmt);
  a->handler = cpy_handler_list(p, src->handler);
}

ANN static void cpy_stmt_match(MemPool p, Stmt_Match a, const Stmt_Match src) {
  a->cond = cpy_exp(p, src->cond);
  a->list = cpy_stmt_cases(p, src->list);
  if (src->where) a->where = cpy_stmt(p, src->where);
}

ANN static Enum_Def cpy_enum_def(MemPool p, const Enum_Def src) {
  Enum_Def a = mp_calloc(p, Enum_Def);
  a->list    = cpy_id_list(p, src->list);
  a->xid     = src->xid;
  a->pos     = src->pos;
  a->flag    = src->flag;
  return a;
}

ANN Func_Base *cpy_func_base(MemPool p, const Func_Base *src) {
  Func_Base *a = mp_calloc(p, Func_Base);
  if (src->td) a->td = cpy_type_decl(p, src->td);      // 1
  if (src->xid) a->xid = src->xid;                     // 1
  if (src->args) a->args = cpy_arg_list(p, src->args); // 1
  if (src->tmpl)
    a->tmpl = cpy_tmpl(p, src->tmpl); // 1
                                      //  if(src->effects.ptr)
  //    vector_copy2((Vector)&src->effects, &a->effects);
  a->flag   = src->flag;
  a->fbflag = src->fbflag;
  a->pos    = src->pos;
  return a;
}

ANN /*static */ Fptr_Def cpy_fptr_def(MemPool p, const Fptr_Def src) {
  Fptr_Def a = mp_calloc(p, Fptr_Def);
  a->base    = cpy_func_base(p, src->base);
  return a;
}

ANN static void cpy_type_def2(MemPool p, Type_Def a, const Type_Def src) {
  if (src->ext) a->ext = cpy_type_decl(p, src->ext);
  a->xid = src->xid;
  if (src->when) a->when = cpy_exp(p, src->when);
  if (src->tmpl) a->tmpl = cpy_tmpl(p, src->tmpl);
  a->pos = src->pos;
}

ANN static Type_Def cpy_type_def(MemPool p, const Type_Def src) {
  Type_Def a = mp_calloc(p, Type_Def);
  cpy_type_def2(p, a, src);
  return a;
}

ANN Union_List cpy_union_list(MemPool p, const Union_List src) {
  Union_List a = mp_calloc(p, Union_List);
  a->td        = cpy_type_decl(p, src->td);
  a->xid       = src->xid;
  a->pos       = src->pos;
  if (src->next) a->next = cpy_union_list(p, src->next);
  return a;
}

ANN Union_Def cpy_union_def(MemPool p, const Union_Def src) {
  Union_Def a = mp_calloc(p, Union_Def);
  a->l        = cpy_union_list(p, src->l);         // 1
  if (src->xid) a->xid = src->xid;                 // 1
  if (src->tmpl) a->tmpl = cpy_tmpl(p, src->tmpl); // 1
  a->pos  = src->pos;
  a->flag = src->flag; // 1
  return a;
}

ANN static Stmt cpy_stmt(MemPool p, const Stmt src) {
  Stmt a = mp_calloc(p, Stmt);
  switch (src->stmt_type) {
  case ae_stmt_exp:
  case ae_stmt_return:
    cpy_stmt_exp(p, &a->d.stmt_exp, &src->d.stmt_exp);
    break;
  case ae_stmt_code:
    cpy_stmt_code(p, &a->d.stmt_code, &src->d.stmt_code);
    break;
  case ae_stmt_while:
  case ae_stmt_until:
    cpy_stmt_flow(p, &a->d.stmt_flow, &src->d.stmt_flow);
    break;
  case ae_stmt_varloop:
    cpy_stmt_varloop(p, &a->d.stmt_varloop, &src->d.stmt_varloop);
    break;
  case ae_stmt_loop:
    cpy_stmt_loop(p, &a->d.stmt_loop, &src->d.stmt_loop);
    break;
  case ae_stmt_for:
    cpy_stmt_for(p, &a->d.stmt_for, &src->d.stmt_for);
    break;
  case ae_stmt_each:
    cpy_stmt_each(p, &a->d.stmt_each, &src->d.stmt_each);
    break;
  case ae_stmt_if:
    cpy_stmt_if(p, &a->d.stmt_if, &src->d.stmt_if);
    break;
  case ae_stmt_try:
    cpy_stmt_try(p, &a->d.stmt_try, &src->d.stmt_try);
    break;
  case ae_stmt_match:
    cpy_stmt_match(p, &a->d.stmt_match, &src->d.stmt_match);
    break;
  case ae_stmt_pp:
    cpy_stmt_pp(p, &a->d.stmt_pp, &src->d.stmt_pp);
    break;
  case ae_stmt_defer:
    cpy_stmt_defer(p, &a->d.stmt_defer, &src->d.stmt_defer);
    break;
  case ae_stmt_break:
  case ae_stmt_continue:
  case ae_stmt_retry:
    break;
  }
  a->stmt_type = src->stmt_type;
  a->pos       = src->pos;
  return a;
}

ANN Func_Def cpy_func_def(MemPool p, const Func_Def src) {
  Func_Def a = mp_calloc(p, Func_Def);
  a->base    = cpy_func_base(p, src->base);
  if (src->d.code)
    a->d.code = cpy_stmt(p, src->d.code);
  //  a->trait = src->trait;
  return a;
}

ANN static Stmt_List cpy_stmt_list(MemPool p, const Stmt_List src) {
  Stmt_List a = mp_calloc(p, Stmt_List);
  if (src->next) a->next = cpy_stmt_list(p, src->next);
  a->stmt = cpy_stmt(p, src->stmt);
  return a;
}

ANN static Trait_Def cpy_trait_def(MemPool p, const Trait_Def src) {
  Trait_Def a = mp_calloc(p, Trait_Def);
  if (src->body) a->body = cpy_ast(p, src->body);
  if (src->traits) a->traits = cpy_id_list(p, src->traits);
  a->flag = src->flag;
  a->pos  = src->pos;
  return a;
}

ANN static Section *cpy_section(MemPool p, const Section *src) {
  Section *a = mp_calloc(p, Section);
  switch (src->section_type) {
  case ae_section_stmt:
    a->d.stmt_list = cpy_stmt_list(p, src->d.stmt_list);
    break;
  case ae_section_class:
    a->d.class_def = cpy_class_def(p, src->d.class_def);
    break;
  case ae_section_trait:
    a->d.trait_def = cpy_trait_def(p, src->d.trait_def);
    break;
  case ae_section_extend:
    a->d.extend_def = cpy_extend_def(p, src->d.extend_def);
    break;
  case ae_section_func:
    a->d.func_def = cpy_func_def(p, src->d.func_def);
    break;
  case ae_section_enum:
    a->d.enum_def = cpy_enum_def(p, src->d.enum_def);
    break;
  case ae_section_union:
    a->d.union_def = cpy_union_def(p, src->d.union_def);
    break;
  case ae_section_fptr:
    a->d.fptr_def = cpy_fptr_def(p, src->d.fptr_def);
    break;
  case ae_section_type:
    a->d.type_def = cpy_type_def(p, src->d.type_def);
    break;
  }
  a->section_type = src->section_type;
  return a;
}

ANN Extend_Def cpy_extend_def(MemPool p, const Extend_Def src) {
  Extend_Def a = mp_calloc(p, Extend_Def);
  a->body      = cpy_ast(p, src->body);
  //  if(src->traits)
  //    a->traits = cpy_id_list(p, src->traits);
  a->td = cpy_type_decl(p, src->td);
  return a;
}

ANN Class_Def cpy_class_def(MemPool p, const Class_Def src) {
  Class_Def a = mp_calloc(p, Class_Def);
  cpy_type_def2(p, &a->base, &src->base);
  if (src->body) a->body = cpy_ast(p, src->body);
  if (src->traits) a->traits = cpy_id_list(p, src->traits);
  a->flag  = src->flag;
  a->cflag = src->cflag;
  a->pos   = src->pos;
  return a;
}

ANN Ast cpy_ast(MemPool p, const Ast src) {
  Ast a      = mp_calloc(p, Ast);
  a->section = cpy_section(p, src->section);
  if (src->next) a->next = cpy_ast(p, src->next);
  return a;
}
