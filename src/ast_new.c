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

AST_NEW(Type_Decl*, type_decl, const Symbol xid, const loc_t pos) {
  Type_Decl* a = mp_calloc(p, Type_Decl);
  a->xid = xid;
  a->pos = pos;
  return a;
}

AST_NEW(Type_Decl*, type_decl2, const Exp exp, const loc_t pos) {
  Type_Decl* a = mp_calloc(p, Type_Decl);
  a->exp = exp;
  a->pos = pos;
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
  a->info = mp_calloc(p, ExpInfo);
  a->exp_type = type;
  a->pos = pos;
  return a;
}

AST_NEW(Exp, exp_lambda, const Symbol xid, const Arg_List args, const Stmt code) {
  Exp a = new_exp(p, ae_exp_lambda, loc_cpy(p, code->pos));
  Func_Base *base = new_func_base(p, NULL, xid, args, ae_flag_none);
  base->fbflag |= fbflag_lambda;
  a->d.exp_lambda.def = new_func_def(p, base, code, loc_cpy(p, code->pos));
  return a;
}

AST_NEW(Exp, exp_array, const Exp base, const Array_Sub array) {
  Exp a = new_exp(p, ae_exp_array, loc_cpy(p, base->pos));
  a->d.exp_array.base = base;
  a->d.exp_array.array = array;
  return a;
}

AST_NEW(Exp, exp_slice, const Exp base, Range *range) {
  Exp a = new_exp(p, ae_exp_slice, loc_cpy(p, base->pos));
  a->d.exp_slice.base = base;
  a->d.exp_slice.range = range;
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
  exp_setmeta(a, 1);
  a->d.exp_binary.lhs = lhs;
  a->d.exp_binary.op = op;
  a->d.exp_binary.rhs = rhs;
  return a;
}

AST_NEW(Exp, exp_cast, Type_Decl* td, const Exp exp) {
  Exp a = new_exp(p, ae_exp_cast, loc_cpy(p, exp->pos));
  exp_setmeta(a, 1);
  a->d.exp_cast.td = td;
  a->d.exp_cast.exp = exp;
  return a;
}

AST_NEW(Exp, exp_post, const Exp exp, const Symbol op) {
  Exp a = new_exp(p, ae_exp_post, loc_cpy(p, exp->pos));
  a->d.exp_post.exp = exp;
  a->d.exp_post.op = op;
  return a;
}

static AST_NEW(Exp, prim, const loc_t pos) {
  Exp a = new_exp(p, ae_exp_primary, pos);
  exp_setmeta(a, 1);
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
  exp_setmeta(a, 0);
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

AST_NEW(Exp, prim_typeof, Exp exp) {
  Exp a = new_prim(p, loc_cpy(p, exp->pos));
  a->d.prim.prim_type = ae_prim_typeof;
  a->d.prim.d.exp = exp;
  return a;
}

AST_NEW(Exp, prim_interp, Exp exp) {
  Exp a = new_prim(p, loc_cpy(p, exp->pos));
  a->d.prim.prim_type = ae_prim_interp;
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

ANN Exp decl_from_id(MemPool p, Symbol type, Symbol name, const loc_t pos) {
  Type_Decl *td = new_type_decl(p, type, loc_cpy(p, pos));
  const Var_Decl var = new_var_decl(p, name, NULL, loc_cpy(p, pos));
  const Var_Decl_List vlist = new_var_decl_list(p, var, NULL);
  return new_exp_decl(p, td, vlist);
}

static inline AST_NEW(Exp, exp_unary_base, const Symbol oper, const loc_t pos)  {
  Exp a = new_exp(p, ae_exp_unary, pos);
  a->d.exp_unary.op = oper;
  return a;
}

AST_NEW(Exp, exp_unary, const Symbol oper, const Exp exp) {
  Exp a = new_exp_unary_base(p, oper, loc_cpy(p, exp->pos));
  exp_setmeta(a, exp_getmeta(exp));
  a->d.exp_unary.exp = exp;
  return a;
}

AST_NEW(Exp, exp_unary2, const Symbol oper, Type_Decl* td) {
  Exp a = new_exp_unary_base(p, oper, loc_cpy(p, td_pos(td)));
  exp_setmeta(a, 1);
  a->d.exp_unary.td = td;
  return a;
}

AST_NEW(Exp, exp_unary3, const Symbol oper, const Stmt code) {
  Exp a = new_exp_unary_base(p, oper, loc_cpy(p, code->pos));
  exp_setmeta(a, 1);
  a->d.exp_unary.code = code;
  return a;
}

AST_NEW(Exp, exp_if, const restrict Exp cond, const restrict Exp if_exp, const restrict Exp else_exp) {
  Exp a = new_exp(p, ae_exp_if, loc_cpy(p, cond->pos));
  enum exp_state state = (!(!exp_getmeta(if_exp ?: cond)) &&
              !exp_getmeta(else_exp)) ? 0 : 1;
  exp_setmeta(a, state);
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

Func_Def new_func_def(MemPool p, Func_Base *base,const Stmt code, const loc_t pos) {
  Func_Def a = mp_calloc(p, Func_Def);
  a->base = base;
  a->d.code = code;
  a->pos = pos;
  return a;
}

AST_NEW(Func_Base*, func_base, Type_Decl* td, const Symbol xid, const Arg_List args, const ae_flag flag) {
  Func_Base *a = (Func_Base*)mp_calloc(p, Func_Base);
  a->td = td;
  a->xid = xid;
  a->args = args;
  a->flag = flag;
  return a;
}

AST_NEW(Fptr_Def, fptr_def, Func_Base *base) {
  Fptr_Def a = mp_calloc(p, Fptr_Def);
  a->base = base;
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
  exp_setmeta(a, 1);
  a->d.exp_call.func = base;
  a->d.exp_call.args = args;
  return a;
}

AST_NEW(Exp, exp_dot, const Exp base, struct Symbol_* xid) {
  Exp a = new_exp(p, ae_exp_dot, loc_cpy(p, base->pos));
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

AST_NEW(Stmt, stmt_varloop, const Exp exp, const Stmt body) {
  Stmt a = new_stmt(p, ae_stmt_varloop, loc_cpy(p, exp->pos));
  a->d.stmt_varloop.exp = exp;
  a->d.stmt_varloop.body = body;
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

AST_NEW(Stmt, stmt_each, struct Symbol_* sym, const Exp exp, const Stmt body) {
  Stmt a = new_stmt(p, ae_stmt_each, loc_cpy(p, exp->pos));
  a->d.stmt_each.sym = sym;
  a->d.stmt_each.exp = exp;
  a->d.stmt_each.body = body;
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
//#include "cpy_ast.h"

Exp cpy_exp(MemPool, const Exp);
Arg_List cpy_arg_list(MemPool, const Arg_List);

ANN static Exp arglist2exp(MemPool p, Arg_List arg, const Exp default_arg) {
  Exp exp = new_prim_id(p, arg->var_decl->xid, loc_cpy(p, arg->var_decl->pos));
  if(arg->next)
    exp->next = arglist2exp(p, arg->next, default_arg);
  else
    exp->next = cpy_exp(p, default_arg);
  return exp;
}



AST_NEW(Ast, ast_expand, Section* section, const Ast next) {
  Ast ast = mp_calloc(p, Ast);
  ast->section = section;
  if(ast->section->section_type == ae_section_func) {
    const Func_Def base_fdef = ast->section->d.func_def;
    Arg_List base_arg = base_fdef->base->args, former = NULL;
    while(base_arg) {
      if(!base_arg->next && base_arg->exp) {
        if(former)
          former->next = NULL;
        Func_Base *base = new_func_base(p, cpy_type_decl(p, base_fdef->base->td),
          base_fdef->base->xid, former ? cpy_arg_list(p, base_fdef->base->args) : NULL, base_fdef->base->flag);
        const Exp efunc = new_prim_id(p, base_fdef->base->xid, loc_cpy(p, base_fdef->pos));
        Exp arg_exp = former ? arglist2exp(p, base_fdef->base->args, base_arg->exp) :
        cpy_exp(p, base_arg->exp);
        const Exp ecall = new_exp_call(p, efunc, arg_exp);
        const Stmt code = new_stmt_exp(p, ae_stmt_return, ecall);
        const Stmt_List slist = new_stmt_list(p, code, NULL);
        const Stmt body = new_stmt_code(p, slist);
        const Func_Def fdef = new_func_def(p, base, body, loc_cpy(p, base_fdef->pos));
        Section *new_section = new_section_func_def(p, fdef);
        if(former)
          former->next = base_arg;
        ast->next = new_ast(p, new_section, next);
        return ast;
      }
      former = base_arg;
      base_arg = base_arg->next;
    }
  }
  ast->next = next;
  return ast;
}

AST_NEW(Ast, ast, Section* section, const Ast next) {
  Ast ast = mp_calloc(p, Ast);
  ast->section = section;
  ast->next = next;
  return ast;
}
