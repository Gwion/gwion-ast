#include "gwion_util.h"
#include "gwion_ast.h"

AST_NEW(Type_Decl *, type_decl, const Symbol xid, const loc_t loc) {
  Type_Decl *a = mp_calloc(p, Type_Decl);
  a->tag       = MK_TAG(xid, loc);
  return a;
}

AST_NEW(Array_Sub, array_sub, Exp* exp) {
  Array_Sub a = mp_calloc(p, Array_Sub);
  a->exp      = exp;
  a->depth    = 1;
  return a;
}

AST_NEW(Range *, range, Exp* start, Exp* end) {
  Range *a = mp_calloc(p, Array_Sub);
  a->start = start;
  a->end   = end;
  return a;
}

Array_Sub prepend_array_sub(const Array_Sub a, Exp* exp) {
  if (exp) {
    exp->next = a->exp;
    a->exp    = exp;
  }
  ++a->depth;
  return a;
}

ANN static AST_NEW(Exp*, exp, const ae_exp_t type, const loc_t loc) {
  Exp* a       = mp_calloc2(p, sizeof(Exp));
  a->exp_type = type;
  a->loc      = loc;
  return a;
}

AST_NEW(Exp*, exp_lambda, const Symbol xid, ArgList *args, StmtList *code,
        const loc_t loc) {
  Exp*        a    = new_exp(p, ae_exp_lambda, loc);
  Func_Base *base = new_func_base(p, NULL, xid, args, ae_flag_none, loc);
  base->fbflag |= fbflag_lambda;
  a->d.exp_lambda.def = new_func_def(p, base, code);
  return a;
}

AST_NEW(Exp*, exp_lambda2, const Symbol xid, ArgList *args, Exp* exp,
        const loc_t loc) {
  Exp*        a    = new_exp(p, ae_exp_lambda, loc);
  Func_Base *base = new_func_base(p, NULL, xid, args, ae_flag_none, loc);
  base->fbflag |= fbflag_lambda;
  StmtList *code = new_stmtlist(p, 1);
  Stmt stmt = MK_STMT_RETURN(loc, exp);
  stmtlist_set(code, 0, stmt);
  a->d.exp_lambda.def = new_func_def(p, base, code);
  return a;
}

AST_NEW(Exp*, exp_array, Exp* base, const Array_Sub array,
        const loc_t loc) {
  Exp* a                = new_exp(p, ae_exp_array, loc);
  a->d.exp_array.base  = base;
  a->d.exp_array.array = array;
  return a;
}

AST_NEW(Exp*, exp_slice, Exp* base, Range *range, const loc_t loc) {
  Exp* a                = new_exp(p, ae_exp_slice, loc);
  a->d.exp_slice.base  = base;
  a->d.exp_slice.range = range;
  return a;
}

AST_NEW(Exp*, exp_decl, Type_Decl *td, const Var_Decl *vd,
        const loc_t loc) {
  Exp* a              = new_exp(p, ae_exp_decl, loc);
  a->d.exp_decl.var  = MK_VAR(td, *vd);
  return a;
}

AST_NEW(Exp*, exp_binary, Exp* lhs, const Symbol op, Exp* rhs,
        const loc_t loc) {
  Exp* a = new_exp(p, ae_exp_binary, loc);
  exp_setmeta(a, 1);
  a->d.exp_binary.lhs = lhs;
  a->d.exp_binary.op  = op;
  a->d.exp_binary.rhs = rhs;
  return a;
}

AST_NEW(Exp*, exp_cast, Type_Decl *td, Exp* exp, const loc_t loc) {
  Exp* a = new_exp(p, ae_exp_cast, loc);
  exp_setmeta(a, 1);
  a->d.exp_cast.td  = td;
  a->d.exp_cast.exp = exp;
  return a;
}

AST_NEW(Exp*, exp_post, Exp* exp, const Symbol op,
        const loc_t loc) {
  Exp* a             = new_exp(p, ae_exp_post, loc);
  a->d.exp_post.exp = exp;
  a->d.exp_post.op  = op;
  return a;
}

AST_NEW(Exp*, exp_td, Type_Decl *td, const loc_t loc) {
  Exp* a       = new_exp(p, ae_exp_td, loc);
  a->d.exp_td = td;
  return a;
}

AST_NEW(Exp*, exp_named, Exp *exp, const Tag tag, const loc_t loc) {
  Exp* a       = new_exp(p, ae_exp_named, loc);
  a->d.exp_named.exp = exp;
  a->d.exp_named.tag = tag;
  return a;
}


static AST_NEW(Exp*, prim, const loc_t loc) {
  Exp* a = new_exp(p, ae_exp_primary, loc);
  exp_setmeta(a, 1);
  return a;
}

AST_NEW(Exp*, prim_int, const m_uint i, const loc_t loc) {
  Exp* a                 = new_prim(p, loc);
  a->d.prim.prim_type   = ae_prim_num;
  a->d.prim.d.gwint.num = i;
  return a;
}

AST_NEW(Exp*, prim_float, const m_float num, const loc_t loc) {
  Exp* a               = new_prim(p, loc);
  a->d.prim.prim_type = ae_prim_float;
  a->d.prim.d.fnum    = num;
  return a;
}

AST_NEW(Exp*, prim_string, const m_str s, const uint16_t delim, const loc_t loc) {
  Exp* a                   = new_prim(p, loc);
  a->d.prim.prim_type      = ae_prim_str;
  a->d.prim.d.string.data  = s;
  a->d.prim.d.string.delim = delim;
  return a;
}

AST_NEW(Exp*, prim_nil, const loc_t loc) {
  Exp* a               = new_prim(p, loc);
  a->d.prim.prim_type = ae_prim_nil;
  return a;
}

AST_NEW(Exp*, prim_id, struct Symbol_ *xid, const loc_t loc) {
  Exp* a = new_prim(p, loc);
  exp_setmeta(a, 0);
  a->d.prim.prim_type = ae_prim_id;
  a->d.prim.d.var     = xid;
  return a;
}

AST_NEW(Exp*, prim_perform, struct Symbol_ *xid, const loc_t loc) {
  Exp* a = new_prim(p, loc);
  exp_setmeta(a, 0);
  a->d.prim.prim_type = ae_prim_perform;
  a->d.prim.d.var     = xid;
  return a;
}

AST_NEW(Exp*, prim_hack, Exp* exp, const loc_t loc) {
  Exp* a               = new_prim(p, loc);
  a->d.prim.prim_type = ae_prim_hack;
  a->d.prim.d.exp     = exp;
  return a;
}

AST_NEW(Exp*, prim_interp, Exp* exp, const loc_t loc) {
  Exp* a               = new_prim(p, loc);
  a->d.prim.prim_type = ae_prim_interp;
  a->d.prim.d.exp     = exp;
  return a;
}

AST_NEW(Exp*, prim_char, const m_str chr, const loc_t loc) {
  Exp* a               = new_prim(p, loc);
  a->d.prim.prim_type = ae_prim_char;
  a->d.prim.d.chr     = chr;
  return a;
}

AST_NEW(Exp*, prim_array, const Array_Sub exp, const loc_t loc) {
  Exp* a               = new_prim(p, loc);
  a->d.prim.prim_type = ae_prim_array;
  a->d.prim.d.array   = exp;
  return a;
}

AST_NEW(Exp*, prim_range, Range *range, const loc_t loc) {
  Exp* a               = new_prim(p, loc);
  a->d.prim.prim_type = ae_prim_range;
  a->d.prim.d.range   = range;
  return a;
}

AST_NEW(Exp*, prim_dict, Exp* exp, const loc_t loc) {
  Exp* a               = new_prim(p, loc);
  a->d.prim.prim_type = ae_prim_dict;
  a->d.prim.d.exp     = exp;
  return a;
}

static inline AST_NEW(Exp*, exp_unary_base, const Symbol oper,
                      const loc_t loc) {
  Exp* a             = new_exp(p, ae_exp_unary, loc);
  a->d.exp_unary.op = oper;
  return a;
}

AST_NEW(Exp*, exp_unary, const Symbol oper, Exp* exp,
        const loc_t loc) {
  Exp* a = new_exp_unary_base(p, oper, loc);
  exp_setmeta(a, exp_getmeta(exp));
  a->d.exp_unary.exp        = exp;
  a->d.exp_unary.unary_type = unary_exp;
  return a;
}

AST_NEW(Exp*, exp_unary2, const Symbol oper, Type_Decl *td,
        Exp* exp, const loc_t loc) {
  Exp* a = new_exp_unary_base(p, oper, loc);
  exp_setmeta(a, 1);
  a->d.exp_unary.ctor.td    = td;
  a->d.exp_unary.ctor.exp   = exp;
  a->d.exp_unary.unary_type = unary_td;
  return a;
}

AST_NEW(Exp*, exp_unary3, const Symbol oper, StmtList *code,
        const loc_t loc) {
  Exp* a = new_exp_unary_base(p, oper, loc);
  exp_setmeta(a, 1);
  a->d.exp_unary.code       = code;
  a->d.exp_unary.unary_type = unary_code;
  return a;
}

AST_NEW(Exp*, exp_if, Exp* cond, Exp* if_exp,
          Exp* else_exp, const loc_t loc) {
  Exp*            a = new_exp(p, ae_exp_if, loc);
  enum exp_state state =
      (!(!exp_getmeta(if_exp ?: cond)) && !exp_getmeta(else_exp)) ? 0 : 1;
  exp_setmeta(a, state);
  a->d.exp_if.cond     = cond;
  a->d.exp_if.if_exp   = if_exp;
  a->d.exp_if.else_exp = else_exp;
  return a;
}

AST_NEW(Tmpl *, tmpl, SpecializedList *list) {
  Tmpl *a = mp_calloc(p, Tmpl);
  a->list = list;
  return a;
}

Func_Def new_func_def(MemPool p, Func_Base *base, StmtList *code) {
  Func_Def a = mp_calloc(p, Func_Def);
  a->base    = base;
  a->d.code  = code;
  return a;
}

AST_NEW(Func_Base *, func_base, Type_Decl *td, const Symbol xid,
        ArgList *args, const ae_flag flag, const loc_t loc) {
  Func_Base *a = (Func_Base *)mp_calloc(p, Func_Base);
  a->td        = td;
  a->tag       = MK_TAG(xid, loc);
  a->args      = args;
  a->flag      = flag;
  return a;
}

AST_NEW(Fptr_Def, fptr_def, Func_Base *base) {
  Fptr_Def a = mp_calloc(p, Fptr_Def);
  a->base    = base;
  return a;
}

AST_NEW(Type_Def, type_def, Type_Decl *ext, const Symbol xid, const loc_t loc) {
  Type_Def a = mp_calloc(p, Type_Def);
  a->ext     = ext;
  a->tag     = MK_TAG(xid, loc);
  return a;
}

AST_NEW(Tmpl *, tmpl_call, TmplArgList *tl) {
  Tmpl *a = mp_calloc(p, Tmpl);
  a->call = tl;
  return a;
}

AST_NEW(Exp*, exp_call, Exp* base, Exp* args,
        const loc_t loc) {
  Exp* a = new_exp(p, ae_exp_call, loc);
  exp_setmeta(a, 1);
  a->d.exp_call.func = base;
  a->d.exp_call.args = args;
  return a;
}

AST_NEW(Exp*, exp_dot, Exp* base, const Tag tag,
        const loc_t loc) {
  Exp* a             = new_exp(p, ae_exp_dot, loc);
  a->d.exp_dot.base = base;
  a->d.exp_dot.var.tag  = tag;
  return a;
}
/*
AST_NEW(Arg_List, arg_list, Type_Decl *td, const Var_Decl var_decl,
        const Arg_List arg_list) {
  Arg_List a  = mp_calloc(p, Arg_List);
  a->td       = td;
  a->var_decl = var_decl;
  a->next     = arg_list;
  return a;
}
*/
AST_NEW(Stmt*, stmt_exp, const ae_stmt_t type, Exp* exp,
        const loc_t loc) {
  Stmt* a            = new_stmt(p, type, loc);
  a->d.stmt_exp.val = exp;
  return a;
}

AST_NEW(Stmt*, stmt_code, StmtList *list, const loc_t loc) {
  Stmt* a                   = new_stmt(p, ae_stmt_code, loc);
  a->d.stmt_code.stmt_list = list;
  return a;
}

AST_NEW(Stmt*, stmt, const ae_stmt_t type, const loc_t loc) {
  Stmt* a       = mp_calloc2(p, sizeof(Stmt));
  a->stmt_type = type;
  a->loc       = loc;
  return a;
}

AST_NEW(Stmt*, stmt_flow, const ae_stmt_t type, Exp* cond, Stmt* body,
        const bool is_do, const loc_t loc) {
  Stmt* a               = new_stmt(p, type, loc);
  a->d.stmt_flow.is_do = !!is_do;
  a->d.stmt_flow.cond  = cond;
  a->d.stmt_flow.body  = body;
  return a;
}

AST_NEW(Stmt*, stmt_for, Stmt* c1, Stmt* c2,
          Exp* c3, Stmt* body, const loc_t loc) {
  Stmt* a            = new_stmt(p, ae_stmt_for, loc);
  a->d.stmt_for.c1   = c1;
  a->d.stmt_for.c2   = c2;
  a->d.stmt_for.c3   = c3;
  a->d.stmt_for.body = body;
  return a;
}

AST_NEW(Stmt*, stmt_each, struct Symbol_ *sym, Exp* exp, Stmt* body,
        const loc_t loc) {
  Stmt* a              = new_stmt(p, ae_stmt_each, loc);
  a->d.stmt_each.var  = (Var_Decl) { .tag = MK_TAG(sym, loc) };
  a->d.stmt_each.exp  = exp;
  a->d.stmt_each.body = body;
  return a;
}

AST_NEW(Stmt*, stmt_loop, Exp* cond, Stmt* body,
        const loc_t loc) {
  Stmt* a              = new_stmt(p, ae_stmt_loop, loc);
  a->d.stmt_loop.cond = cond;
  a->d.stmt_loop.body = body;
  return a;
}

AST_NEW(Stmt*, stmt_try, Stmt* stmt, HandlerList *handler) {
  Stmt* a                = new_stmt(p, ae_stmt_try, stmt->loc);
  a->d.stmt_try.stmt    = cpy_stmt3(p, stmt);
  a->d.stmt_try.handler = handler;
  return a;
}

AST_NEW(Stmt*, stmt_if, Exp* cond, Stmt* if_body,
        const loc_t loc) {
  Stmt* a               = new_stmt(p, ae_stmt_if, loc);
  a->d.stmt_if.cond    = cond;
  a->d.stmt_if.if_body = cpy_stmt3(p, if_body);
  return a;
}

AST_NEW(Enum_Def, enum_def, EnumValueList *list, struct Symbol_ *xid,
        const loc_t loc) {
  Enum_Def a = mp_calloc(p, Enum_Def);
  a->tag     = MK_TAG(xid, loc);
  a->list    = list;
  return a;
}

AST_NEW(Union_Def, union_def, VariableList *l, const loc_t loc) {
  Union_Def a = mp_calloc(p, Union_Def);
  a->l        = l;
  a->tag.loc  = loc; // change ctor
  return a;
}

AST_NEW(Stmt*, stmt_pp, const enum ae_pp_type type, const m_str data,
        const loc_t loc) {
  Stmt* a               = new_stmt(p, ae_stmt_pp, loc);
  a->d.stmt_pp.pp_type = type;
  a->d.stmt_pp.data    = data;
  return a;
}

AST_NEW(Stmt*, stmt_defer, Stmt* stmt, const loc_t loc) {
  Stmt* a               = new_stmt(p, ae_stmt_defer, loc);
  a->d.stmt_defer.stmt = stmt;
  return a;
}

#define mk_section(Type, name, sec_type)                                       \
  AST_NEW(Section *, section_##name, Type name) {                              \
    Section *a      = mp_calloc(p, Section);                                   \
    a->section_type = ae_section_##sec_type;                                   \
    a->d.name       = name;                                                    \
    return a;                                                                  \
  }
mk_section(StmtList*, stmt_list, stmt);
mk_section(Func_Def, func_def, func);
mk_section(Class_Def, class_def, class);
mk_section(Trait_Def, trait_def, trait);
mk_section(Extend_Def, extend_def, extend);
mk_section(Enum_Def, enum_def, enum);
mk_section(Union_Def, union_def, union);
mk_section(Fptr_Def, fptr_def, fptr);
mk_section(Type_Def, type_def, type);

AST_NEW(Extend_Def, extend_def, Type_Decl *const td, TagList *const trait) {
  Extend_Def a = mp_calloc(p, Class_Def);
  a->td        = td;
  a->traits    = trait;
  return a;
}

AST_NEW(Class_Def, class_def, const ae_flag class_decl, const Tag tag,
        Type_Decl *ext, const Ast body) {
  Class_Def a = mp_calloc(p, Class_Def);
  a->flag     = class_decl;
  a->base.tag = tag;
  a->base.ext = ext;
  a->body     = body;
  return a;
}

AST_NEW(Trait_Def, trait_def, const ae_flag class_decl, const Symbol xid,
        const Ast body, const loc_t loc) {
  Trait_Def a = mp_calloc(p, Trait_Def);
  a->tag      = MK_TAG(xid, loc);
  a->flag     = class_decl;
  a->body     = body;
  return a;
}

AST_NEW(Prim_Def, prim_def, const Symbol name, const m_uint size, const loc_t loc, const ae_flag flag) {
  Prim_Def a = mp_calloc(p, Prim_Def);
  a->tag      = MK_TAG(name, loc);
  a->size    = size;
  a->flag    = flag;
  return a;
}
