 #include "gwion_util.h"
#include "gwion_ast.h"

AST_NEW(Var_Decl, var_decl, struct Symbol_* xid, const Array_Sub array, const loc_t pos) {
  Var_Decl a = mp_calloc(p, Var_Decl);
  a->xid = xid;
  a->array = array;
  a->pos = pos;
  return a;
}

AST_NEW(Var_Decl_List, var_decl_list, const Var_Decl decl, const Var_Decl_List list) {
  Var_Decl_List a = mp_calloc(p, Var_Decl_List);
  a->self = decl;
  a->next = list;
  return a;
}

AST_NEW(Type_Decl*, type_decl, const ID_List xid) {
  Type_Decl* a = mp_calloc(p, Type_Decl);
  a->xid = xid;
  return a;
}

AST_NEW(Type_Decl*, type_decl2, const Exp exp) {
  Type_Decl* a = mp_calloc(p, Type_Decl);
  a->exp = exp;
  return a;
}

AST_NEW(Array_Sub, array_sub, const Exp exp) {
  Array_Sub a = mp_calloc(p, Array_Sub);
  a->exp = exp;
  a->depth = 1;
  return a;
}

AST_NEW(Range*, range, const Exp start, const Exp end) {
  Range* a = mp_calloc(p, Array_Sub);
  a->start = start;
  a->end = end;
  return a;
}

Array_Sub prepend_array_sub(const Array_Sub a, const Exp exp) {
  if(exp) {
    exp->next = a->exp;
    a->exp = exp;
  }
  ++a->depth;
  return a;
}

ANN static AST_NEW(Exp, exp, const ae_exp_t type, const loc_t pos) {
  Exp a = mp_calloc(p, Exp);
  a->exp_type = type;
  a->pos = pos;
  return a;
}

AST_NEW(Exp, exp_lambda, const Symbol xid, const Arg_List args, const Stmt code) {
  Exp a = new_exp(p, ae_exp_lambda, loc_cpy(p, code->pos));
  a->meta = ae_meta_var;
  Func_Base *base = new_func_base(p, NULL, xid, args);
  a->d.exp_lambda.def = new_func_def(p, base, code, ae_flag_none, loc_cpy(p, code->pos));
  return a;
}

AST_NEW(Exp, exp_array, const Exp base, const Array_Sub array) {
  Exp a = new_exp(p, ae_exp_array, loc_cpy(p, base->pos));
  a->meta = ae_meta_var;
  a->d.exp_array.base = base;
  a->d.exp_array.array = array;
  return a;
}

AST_NEW(Exp, exp_slice, const Exp base, Range *range) {
  Exp a = new_exp(p, ae_exp_slice, loc_cpy(p, base->pos));
  a->meta = ae_meta_var;
  a->d.exp_slice.base = base;
  a->d.exp_slice.range = range;
  return a;
}

AST_NEW(Exp, exp_typeof, Exp exp) {
  Exp a = new_exp(p, ae_exp_typeof, loc_cpy(p, exp->pos));
  a->d.exp_typeof.exp = exp;
  return a;
}

AST_NEW(Exp, exp_interp, Exp exp) {
  Exp a = new_exp(p, ae_exp_interp, loc_cpy(p, exp->pos));
  a->d.exp_interp.exp = exp;
  return a;
}

AST_NEW(ID_List, id_list, struct Symbol_* xid, const loc_t pos) {
  ID_List a = mp_calloc(p, ID_List);
  a->xid = xid;
  a->pos = pos;
  return a;
}

ID_List prepend_id_list(MemPool p, struct Symbol_* xid, const ID_List list, const loc_t pos) {
  ID_List a = new_id_list(p, xid, pos);
  a->next = list;
  return a;
}

AST_NEW(Exp, exp_decl, Type_Decl* td, const Var_Decl_List list) {
  Exp a = new_exp(p, ae_exp_decl, loc_cpy(p, td_pos(td)));
  a->d.exp_decl.td = td;
  a->d.exp_decl.list = list;
  return a;
}

AST_NEW(Exp, exp_binary, const Exp lhs, const Symbol op, const Exp rhs) {
  Exp a = new_exp(p, ae_exp_binary, loc_cpy(p, lhs->pos));
  a->meta = ae_meta_value;
  a->d.exp_binary.lhs = lhs;
  a->d.exp_binary.op = op;
  a->d.exp_binary.rhs = rhs;
  return a;
}

AST_NEW(Exp, exp_cast, Type_Decl* td, const Exp exp) {
  Exp a = new_exp(p, ae_exp_cast, loc_cpy(p, exp->pos));
  a->meta = ae_meta_value;
  a->d.exp_cast.td = td;
  a->d.exp_cast.exp = exp;
  return a;
}

AST_NEW(Exp, exp_post, const Exp exp, const Symbol op) {
  Exp a = new_exp(p, ae_exp_post, loc_cpy(p, exp->pos));
  a->meta = ae_meta_var;
  a->d.exp_post.exp = exp;
  a->d.exp_post.op = op;
  return a;
}

static AST_NEW(Exp, prim, const loc_t pos) {
  Exp a = new_exp(p, ae_exp_primary, pos);
  a->meta = ae_meta_value;
  return a;
}

AST_NEW(Exp, prim_int, const unsigned long i, const loc_t pos) {
  Exp a = new_prim(p, pos);
  a->d.prim.prim_type = ae_prim_num;
  a->d.prim.d.num = i;
  return a;
}

AST_NEW(Exp, prim_float, const m_float num, const loc_t pos) {
  Exp a = new_prim(p, pos);
  a->d.prim.prim_type = ae_prim_float;
  a->d.prim.d.fnum = num;
  return a;
}

AST_NEW(Exp, prim_string, const m_str s, const loc_t pos) {
  Exp a = new_prim(p, pos);
  a->d.prim.prim_type = ae_prim_str;
  a->d.prim.d.str = s;
  return a;
}

AST_NEW(Exp, prim_nil, const loc_t pos) {
  Exp a = new_prim(p, pos);
  a->d.prim.prim_type = ae_prim_nil;
  return a;
}

AST_NEW(Exp, prim_id, struct Symbol_* xid, const loc_t pos) {
  Exp a = new_prim(p, pos);
  a->meta = ae_meta_var;
  a->d.prim.prim_type = ae_prim_id;
  a->d.prim.d.var = xid;
  return a;
}

AST_NEW(Exp, prim_hack, const Exp exp) {
  Exp a = new_prim(p, loc_cpy(p, exp->pos));
  a->d.prim.prim_type = ae_prim_hack;
  a->d.prim.d.exp = exp;
  return a;
}

AST_NEW(Exp, prim_char, const m_str chr, const loc_t pos) {
  Exp a = new_prim(p, pos);
  a->d.prim.prim_type = ae_prim_char;
  a->d.prim.d.chr = chr;
  return a;
}

AST_NEW(Exp, prim_array, const Array_Sub exp, const loc_t pos) {
  Exp a = new_prim(p, pos);
  a->d.prim.prim_type = ae_prim_array;
  a->d.prim.d.array = exp;
  return a;
}

AST_NEW(Exp, prim_range, Range *range, const loc_t pos) {
  Exp a = new_prim(p, pos);
  a->d.prim.prim_type = ae_prim_range;
  a->d.prim.d.range = range;
  return a;
}

AST_NEW(Exp, prim_vec, const ae_prim_t t, Exp e) {
  Exp a = new_prim(p, loc_cpy(p, e->pos));
  a->d.prim.prim_type = t;
  a->d.prim.d.vec.exp = e;
  do ++a->d.prim.d.vec.dim;
  while((e = e->next));
  return a;
}

AST_NEW(Exp, prim_tuple, const Exp e, const loc_t pos) {
  Exp a = new_prim(p, loc_cpy(p, pos));
  a->d.prim.prim_type = ae_prim_tuple;
  a->d.prim.d.tuple.exp = e;
  return a;
}

ANN Exp decl_from_id(MemPool p, Symbol type, Symbol name, const loc_t pos) {
  const ID_List ilist = new_id_list(p, type, loc_cpy(p, pos));
  Type_Decl *td = new_type_decl(p, ilist);
  const Var_Decl var = new_var_decl(p, name, NULL, loc_cpy(p, pos));
  const Var_Decl_List vlist = new_var_decl_list(p, var, NULL);
  return new_exp_decl(p, td, vlist);
}

AST_NEW(Exp, prim_unpack, const Symbol type, const ID_List l, const loc_t pos) {
  Exp a = new_prim(p, pos);
  a->d.prim.prim_type = ae_prim_unpack;
  const Exp base = strcmp(s_name(l->xid), "_") ?
    decl_from_id(p, type, l->xid, pos) : new_prim_nil(p, loc_cpy(p, pos));
  Exp e = base;
  ID_List list = l->next;
  while(list) {
    if(strcmp(s_name(list->xid), "_"))
      e = (e->next = decl_from_id(p, type, list->xid, pos));
    else
      e = (e->next = new_prim_nil(p, loc_cpy(p, pos)));
    list = list->next;
  }
  a->d.prim.d.tuple.exp = base;
  return a;
}

static inline AST_NEW(Exp, exp_unary_base, const Symbol oper, const loc_t pos)  {
  Exp a = new_exp(p, ae_exp_unary, pos);
  a->d.exp_unary.op = oper;
  return a;
}

AST_NEW(Exp, exp_unary, const Symbol oper, const Exp exp) {
  Exp a = new_exp_unary_base(p, oper, loc_cpy(p, exp->pos));
  a->meta = exp->meta;
  a->d.exp_unary.exp = exp;
  return a;
}

AST_NEW(Exp, exp_unary2, const Symbol oper, Type_Decl* td) {
  Exp a = new_exp_unary_base(p, oper, loc_cpy(p, td_pos(td)));
  a->meta = ae_meta_value;
  a->d.exp_unary.td = td;
  return a;
}

AST_NEW(Exp, exp_unary3, const Symbol oper, const Stmt code) {
  Exp a = new_exp_unary_base(p, oper, loc_cpy(p, code->pos));
  a->meta = ae_meta_value;
  a->d.exp_unary.code = code;
  return a;
}

AST_NEW(Exp, exp_if, const restrict Exp cond, const restrict Exp if_exp, const restrict Exp else_exp) {
  Exp a = new_exp(p, ae_exp_if, loc_cpy(p, cond->pos));
  a->meta = (!((if_exp ?: cond)->meta == ae_meta_var) &&
              else_exp->meta == ae_meta_var) ? ae_meta_var : ae_meta_value;
  a->d.exp_if.cond = cond;
  a->d.exp_if.if_exp = if_exp;
  a->d.exp_if.else_exp = else_exp;
  return a;
}

AST_NEW(Tmpl*, tmpl, const ID_List list, const m_int base) {
  Tmpl* a = mp_calloc(p, Tmpl);
  a->list = list;
  a->base = base;
  return a;
}

AST_NEW(Tmpl*, tmpl_base, const ID_List list) {
  return new_tmpl(p, list, -1);
}

Func_Def new_func_def(MemPool p, Func_Base *base,const Stmt code,
    const ae_flag flag, const loc_t pos) {
  Func_Def a = mp_calloc(p, Func_Def);
  a->base = base;
  a->d.code = code;
  a->flag = flag;
  a->pos = pos;
  return a;
}

ANN m_bool compat_func(const restrict Func_Def lhs, const restrict Func_Def rhs) {
  Arg_List e1 = lhs->base->args;
  Arg_List e2 = rhs->base->args;

  while(e1 && e2) {
    if(e1->type != e2->type)
      return GW_ERROR;
    e1 = e1->next;
    e2 = e2->next;
  }
  if(e1 || e2)
    return GW_ERROR;
  return GW_OK;
}

AST_NEW(Func_Base*, func_base, Type_Decl* td, const Symbol xid, const Arg_List args) {
  Func_Base *a = (Func_Base*)mp_calloc(p, Func_Base);
  a->td = td;
  a->xid = xid;
  a->args = args;
  return a;
}

AST_NEW(Fptr_Def, fptr_def, Func_Base *base, const ae_flag flag) {
  Fptr_Def a = mp_calloc(p, Fptr_Def);
  a->base = base;
  base->td->flag |= flag;
  return a;
}

AST_NEW(Type_Def, type_def, Type_Decl* ext, struct Symbol_ *xid) {
  Type_Def a = mp_calloc(p, Type_Def);
  a->ext = ext;
  a->xid = xid;
  return a;
}

AST_NEW(Tmpl*, tmpl_call, const Type_List tl) {
  Tmpl* a = mp_calloc(p, Tmpl);
  a->call = tl;
  return a;
}

AST_NEW(Exp, exp_call, const Exp base, const Exp args) {
  Exp a = new_exp(p, ae_exp_call, loc_cpy(p, base->pos));
  a->meta = ae_meta_value;
  a->d.exp_call.func = base;
  a->d.exp_call.args = args;
  return a;
}

AST_NEW(Exp, exp_dot, const Exp base, struct Symbol_* xid) {
  Exp a = new_exp(p, ae_exp_dot, loc_cpy(p, base->pos));
  a->meta = ae_meta_var;
  a->d.exp_dot.base = base;
  a->d.exp_dot.xid = xid;
  return a;
}

Exp prepend_exp(const restrict Exp exp, const restrict Exp next) {
  exp->next = next;
  return exp;
}

AST_NEW(Arg_List, arg_list, Type_Decl* td, const Var_Decl var_decl, const Arg_List arg_list) {
  Arg_List a = mp_calloc(p, Arg_List);
  a->td       = td;
  a->var_decl = var_decl;
  a->next     = arg_list;
  return a;
}

AST_NEW(Stmt, stmt_exp, const ae_stmt_t type, const Exp exp) {
  Stmt a = new_stmt(p, type, loc_cpy(p, exp->pos));
  a->d.stmt_exp.val = exp;
  return a;
}

AST_NEW(Stmt, stmt_code, const Stmt_List list) {
  Stmt a = new_stmt(p, ae_stmt_code, loc_cpy(p, list->stmt->pos));
  a->d.stmt_code.stmt_list = list;
  return a;
}

AST_NEW(Stmt, stmt, const ae_stmt_t type, const loc_t pos) {
  Stmt a = mp_calloc(p, Stmt);
  a->stmt_type = type;
  a->pos = pos;
  return a;
}

AST_NEW(Stmt, stmt_flow, const ae_stmt_t type, const Exp cond, const Stmt body, const m_bool is_do) {
  Stmt a = new_stmt(p, type, loc_cpy(p, cond->pos));
  a->d.stmt_flow.is_do = !!is_do;
  a->d.stmt_flow.cond = cond;
  a->d.stmt_flow.body = body;
  return a;
}

AST_NEW(Stmt, stmt_for, const restrict Stmt c1, const restrict Stmt c2, const restrict Exp c3, const Stmt body) {
  Stmt a = new_stmt(p, ae_stmt_for, loc_cpy(p, c1->pos));
  a->d.stmt_for.c1 = c1;
  a->d.stmt_for.c2 = c2;
  a->d.stmt_for.c3 = c3;
  a->d.stmt_for.body = body;
  return a;
}

AST_NEW(Stmt, stmt_auto, struct Symbol_* sym, const Exp exp, const Stmt body) {
  Stmt a = new_stmt(p, ae_stmt_auto, loc_cpy(p, exp->pos));
  a->d.stmt_auto.sym = sym;
  a->d.stmt_auto.exp = exp;
  a->d.stmt_auto.body = body;
  return a;
}

AST_NEW(Stmt, stmt_jump, struct Symbol_* xid, const m_bool is_label, const loc_t pos) {
  Stmt a = new_stmt(p, ae_stmt_jump, pos);
  a->d.stmt_jump.name = xid;
  a->d.stmt_jump.is_label = is_label;
  return a;
}

AST_NEW(Stmt, stmt_loop, const Exp cond, const Stmt body) {
  Stmt a = new_stmt(p, ae_stmt_loop, loc_cpy(p, cond->pos));
  a->d.stmt_loop.cond = cond;
  a->d.stmt_loop.body = body;
  return a;
}

AST_NEW(Stmt, stmt_if, const Exp cond, const restrict Stmt if_body) {
  Stmt a = new_stmt(p, ae_stmt_if, loc_cpy(p, cond->pos));
  a->d.stmt_if.cond = cond;
  a->d.stmt_if.if_body = if_body;
  return a;
}

AST_NEW(Enum_Def, enum_def, const ID_List list, struct Symbol_* xid, const loc_t pos) {
  Enum_Def a = mp_calloc(p, Enum_Def);
  a->xid = xid;
  a->list = list;
  a->pos = pos;
  vector_init(&a->values);
  return a;
}

AST_NEW(Union_Def, union_def, const Decl_List l, const loc_t pos) {
  Union_Def a = mp_calloc(p, Union_Def);
  a->l = l;
  a->pos = pos;
  return a;
}

AST_NEW(Stmt, stmt_pp, const enum ae_pp_type type, const m_str data, const loc_t pos) {
  Stmt a = new_stmt(p, ae_stmt_pp, 0);
  a->d.stmt_pp.pp_type = type;
  a->d.stmt_pp.data = data;
  a->pos = pos;
  return a;
}

AST_NEW(Decl_List, decl_list, const Exp d, const Decl_List l) {
  Decl_List a = mp_calloc(p, Decl_List);
  a->self = d;
  a->next = l;
  return a;
}

AST_NEW(Stmt_List, stmt_list, Stmt stmt, Stmt_List next) {
  Stmt_List list = mp_calloc(p, Stmt_List);
  list->stmt = stmt;
  list->next = next;
  return list;
}

#define mk_section(Type, name, sec_type)                  \
AST_NEW(Section*, section_##name, const Type name) { \
  Section* a = mp_calloc(p, Section);                     \
  a->section_type = ae_section_##sec_type;                \
  a->d.name = name;                                       \
  return a;                                               \
}
mk_section(Stmt_List, stmt_list, stmt)
mk_section(Func_Def,  func_def,  func)
mk_section(Class_Def, class_def, class)
mk_section(Enum_Def,  enum_def,  enum)
mk_section(Union_Def, union_def, union)
mk_section(Fptr_Def,  fptr_def,  fptr)
mk_section(Type_Def,  type_def,  type)

AST_NEW(Class_Def, class_def, const ae_flag class_decl, const Symbol xid, Type_Decl* ext,
    const Ast body, const loc_t pos) {
  Class_Def a = mp_calloc(p, Class_Def);
  a->flag = class_decl;
  a->base.xid = xid;
  a->base.ext  = ext;
  a->body = body;
  a->pos = pos;
  return a;
}

AST_NEW(Type_List, type_list, Type_Decl* td, const Type_List next) {
  Type_List a = mp_calloc(p, Type_List);
  a->td   = td;
  a->next = next;
  return a;
}

AST_NEW(Ast, ast, Section* section, const Ast next) {
  Ast ast = mp_calloc(p, Ast);
  ast->section = section;
  ast->next = next;
  return ast;
}
