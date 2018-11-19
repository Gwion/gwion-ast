#include "gwion_util.h"
#include "gwion_ast.h"

Var_Decl new_var_decl(struct Symbol_* xid, const Array_Sub array, const uint pos) {
  Var_Decl a = mp_alloc(Var_Decl);
  a->xid = xid;
  a->array = array;
  a->pos = pos;
  return a;
}

void free_array_sub(Array_Sub a) {
  if(a->exp)
    free_exp(a->exp);
  mp_free(Array_Sub, a);
}

ANN static void free_var_decl(Var_Decl a) {
  if(a->array)
    free_array_sub(a->array);
  mp_free(Var_Decl, a);
}

Var_Decl_List new_var_decl_list(const Var_Decl decl, const Var_Decl_List list) {
  Var_Decl_List a = mp_alloc(Var_Decl_List);
  a->self = decl;
  a->next = list;
  return a;
}

ANN static void free_var_decl_list(Var_Decl_List a) {
  if(a->next)
    free_var_decl_list(a->next);
  free_var_decl(a->self);
  mp_free(Var_Decl_List, a);
}


static Type_Decl* td_alloc(const ae_flag flag) {
  Type_Decl* a = mp_alloc(Type_Decl);
  a->flag = flag;
  return a;
}

Type_Decl* new_type_decl(const ID_List xid, const ae_flag flag) {
  Type_Decl* a = td_alloc(flag);
  a->xid = xid;
  return a;
}

Type_Decl* new_type_decl2(const ID_List xid, const ae_flag flag) {
  Type_Decl* a = td_alloc(flag);
  a->xid = new_id_list(insert_symbol(""), xid->pos);
  a->xid->ref = xid;
  return a;
}

Array_Sub new_array_sub(const Exp exp) {
  Array_Sub a = mp_alloc(Array_Sub);
  a->exp = exp;
  a->depth = 1;
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

Type_Decl* add_type_decl_array(Type_Decl* a, const Array_Sub array) {
  a->array = array;
  return a;
}

Exp new_exp_array(const Exp base, const Array_Sub array) {
  Exp a = mp_alloc(Exp);
  a->exp_type = ae_exp_array;
  a->meta = ae_meta_var;
  a->d.exp_array.base = base;
  a->d.exp_array.array = array;
  a->pos = base->pos;
  a->d.exp_array.self = a;
  return a;
}

ANN static void free_exp_array(Exp_Array* a) {
  free_array_sub(a->array);
  free_exp(a->base);
}

ID_List new_id_list(struct Symbol_* xid, const uint pos) {
  ID_List a = mp_alloc(ID_List);
  a->xid = xid;
  a->pos = pos;
  return a;
}

ID_List prepend_id_list(struct Symbol_* xid, const ID_List list, const uint pos) {
  ID_List a = new_id_list(xid, pos);
  a->next = list;
  a->pos = pos;
  return a;
}

void free_id_list(ID_List a) {
  if(a->ref)
    free_id_list(a->ref);
  if(a->next)
    free_id_list(a->next);
  mp_free(ID_List, a);
}

void free_type_decl(Type_Decl* a) {
  if(a->types)
    free_type_list(a->types);
  if(a->array)
    free_array_sub(a->array);
  free_id_list(a->xid);
  mp_free(Type_Decl, a);
}

Exp new_exp_decl(Type_Decl* td, const Var_Decl_List list) {
  Exp a = mp_alloc(Exp);
  a->exp_type = ae_exp_decl;
  a->d.exp_decl.td = td;
  a->d.exp_decl.list = list;
  a->pos = td->xid->pos;
  a->d.exp_decl.self = a;
  return a;
}

ANN static void free_exp_decl(Exp_Decl* a) {
  free_type_decl(a->td);
  free_var_decl_list(a->list);
}

Exp new_exp_binary(const Exp lhs, const Operator op, const Exp rhs) {
  Exp a = mp_alloc(Exp);
  a->exp_type = ae_exp_binary;
  a->meta = ae_meta_value;
  a->d.exp_binary.lhs = lhs;
  a->d.exp_binary.op = op;
  a->d.exp_binary.rhs = rhs;
  a->pos = lhs->pos;
  a->d.exp_binary.self = a;
  return a;
}

ANN static void free_exp_binary(Exp_Binary* binary) {
  free_exp(binary->lhs);
  free_exp(binary->rhs);
}

Exp new_exp_cast(Type_Decl* td, const Exp exp) {
  Exp a = mp_alloc(Exp);
  a->exp_type = ae_exp_cast;
  a->meta = ae_meta_value;
  a->d.exp_cast.td = td;
  a->pos = exp->pos;
  a->d.exp_cast.exp = exp;
  a->d.exp_cast.self = a;
  return a;
}

ANN static void free_exp_cast(Exp_Cast* a) {
  free_type_decl(a->td);
  free_exp(a->exp);
}

Exp new_exp_post(const Exp exp, const Operator op) {
  Exp a = mp_alloc(Exp);
  a->exp_type = ae_exp_post;
  a->meta = ae_meta_var;
  a->d.exp_post.exp = exp;
  a->d.exp_post.op = op;
  a->pos = exp->pos;
  a->d.exp_post.self = a;
  return a;
}

ANN static inline void free_exp_post(Exp_Postfix* post) {
  free_exp(post->exp);
}

Exp new_exp_dur(const Exp base, const Exp unit) {
  Exp a = mp_alloc(Exp);
  a->exp_type = ae_exp_dur;
  a->meta = ae_meta_value;
  a->d.exp_dur.base = base;
  a->d.exp_dur.unit = unit;
  a->pos = base->pos;
  a->d.exp_dur.self = a;
  return a;
}

ANN static void free_exp_dur(Exp_Dur* a) {
  free_exp(a->base);
  free_exp(a->unit);
}

static Exp new_exp_prim(const uint pos) {
  Exp a = mp_alloc(Exp);
  a->exp_type = ae_exp_primary;
  a->meta = ae_meta_value;
  a->pos = pos;
  a->d.exp_primary.self = a;
  return a;
}

Exp new_exp_prim_int(const unsigned long i, const uint pos) {
  Exp a = new_exp_prim(pos);
  a->d.exp_primary.primary_type = ae_primary_num;
  a->d.exp_primary.d.num = i;
  return a;
}

Exp new_exp_prim_float(const m_float num, const uint pos) {
  Exp a = new_exp_prim(pos);
  a->d.exp_primary.primary_type = ae_primary_float;
  a->d.exp_primary.d.fnum = num;
  return a;
}

Exp new_exp_prim_string(const m_str s, const uint pos) {
  Exp a = new_exp_prim(pos);
  a->d.exp_primary.primary_type = ae_primary_str;
  a->d.exp_primary.d.str = s;
  return a;
}

Exp new_exp_prim_nil(const uint pos) {
  Exp a = new_exp_prim(pos);
  a->d.exp_primary.primary_type = ae_primary_nil;
  return a;
}

Exp new_exp_prim_id(struct Symbol_* xid, const uint pos) {
  Exp a = new_exp_prim(pos);
  a->meta = ae_meta_var;
  a->d.exp_primary.primary_type = ae_primary_id;
  a->d.exp_primary.d.var = xid;
  return a;
}

Exp new_exp_prim_hack(const Exp exp) {
  Exp a = new_exp_prim(exp->pos);
  a->d.exp_primary.primary_type = ae_primary_hack;
  a->d.exp_primary.d.exp = exp;
  return a;
}

Exp new_exp_prim_char(const m_str chr, const uint pos) {
  Exp a = new_exp_prim(pos);
  a->d.exp_primary.primary_type = ae_primary_char;
  a->d.exp_primary.d.chr = chr;
  return a;
}

Exp new_exp_prim_array(const Array_Sub exp, const uint pos) {
  Exp a = new_exp_prim(pos);
  a->d.exp_primary.primary_type = ae_primary_array;
  a->d.exp_primary.d.array = exp;
  return a;
}

Exp new_exp_prim_vec(const ae_prim_t t, Exp e) {
  Exp a = new_exp_prim(e->pos);
  a->d.exp_primary.primary_type = t;
  a->d.exp_primary.d.vec.exp = e;
  do ++a->d.exp_primary.d.vec.dim;
  while((e = e->next));
  a->d.exp_primary.self = a;
  return a;
}

static Exp new_exp_unary_base(const uint pos)  {
  Exp a = mp_alloc(Exp);
  a->meta = ae_meta_value;
  a->exp_type = ae_exp_unary;
  a->pos = pos;
  a->d.exp_unary.self = a;
  return a;
}

Exp new_exp_unary(const Operator oper, const Exp exp) {
  Exp a = new_exp_unary_base(exp->pos);
  a->meta = exp->meta;
  a->d.exp_unary.op = oper;
  a->d.exp_unary.exp = exp;
  return a;
}

Exp new_exp_unary2(const Operator oper, Type_Decl* td) {
  Exp a = new_exp_unary_base(td->xid->pos);
  a->d.exp_unary.op = oper;
  a->d.exp_unary.td = td;
  return a;
}

Exp new_exp_unary3(const Operator oper, const Stmt code) {
  const uint pos = code->pos;
  Exp a = new_exp_unary_base(pos);
  a->d.exp_unary.op = oper;
  ID_List id = new_id_list(insert_symbol("void"), pos);
  a->d.exp_unary.td = new_type_decl(id, 0);
  a->d.exp_unary.code = code;
  return a;
}

ANN static void free_exp_unary(Exp_Unary* a) {
  if(a->exp)
    free_exp(a->exp);
  if(a->td)
    free_type_decl(a->td);
  if(a->code)
    free_stmt(a->code);
}

Exp new_exp_if(const restrict Exp cond, const restrict Exp if_exp, const restrict Exp else_exp) {
  Exp a = mp_alloc(Exp);
  a->exp_type = ae_exp_if;
  a->meta = ((if_exp->meta == ae_meta_var &&
              else_exp->meta == ae_meta_var) ? ae_meta_var : ae_meta_value);
  a->d.exp_if.cond = cond;
  a->d.exp_if.if_exp = if_exp;
  a->d.exp_if.else_exp = else_exp;
  a->d.exp_if.self = a;
  a->pos = cond->pos;
  return a;
}

ANN static void free_exp_if(Exp_If* a) {
  free_exp(a->cond);
  free_exp(a->if_exp);
  free_exp(a->else_exp);
}

Tmpl_List* new_tmpl_list(const ID_List list, const m_int base) {
  Tmpl_List* a = mp_alloc(Tmpl_List);
  a->list = list;
  a->base = base;
  return a;
}

Tmpl_Class* new_tmpl_class(ID_List list, const m_bool base) {
  Tmpl_Class* a = mp_alloc(Tmpl_Class);
  a->list.list = list;
  a->list.base = base;
  a->base = NULL;
  return a;
}

void free_tmpl_list(Tmpl_List* a) {
  if(a->base == -1)
    free_id_list(a->list);
  mp_free(Tmpl_List, a);
}

void free_tmpl_class(Tmpl_Class* a) {
  if(a->list.base == -1)
    free_id_list(a->list.list);
  mp_free(Tmpl_Class, a);
}

m_bool tmpl_list_base(const Tmpl_List* a) {
  if(a && a->base == -1)
    return 1;
  return 0;
}

m_bool tmpl_class_base(const Tmpl_Class* a) {
  return a ? tmpl_list_base(&a->list) : 0;
}

Func_Def new_func_def(Type_Decl* td, struct Symbol_* xid,
  const Arg_List arg_list, const Stmt code, const ae_flag flag) {
  Func_Def a = mp_alloc(Func_Def);
  a->td   = td;
  a->name = xid;
  a->arg_list = arg_list;
  a->d.code = code;
  a->flag = flag;
  return a;
}

ANN m_bool compat_func(const restrict Func_Def lhs, const restrict Func_Def rhs) {
  Arg_List e1 = lhs->arg_list;
  Arg_List e2 = rhs->arg_list;

  while(e1 && e2) {
    if(e1->type != e2->type)
      return -1;
    e1 = e1->next;
    e2 = e2->next;
  }
  if(e1 || e2)
    return -1;
  return 1;
}

void free_func_def(Func_Def a) {
  if(!GET_FLAG(a, ae_flag_template)) {
    if(a->arg_list)
      free_arg_list(a->arg_list);
    free_type_decl(a->td);
  }
  if(a->tmpl)
    free_tmpl_list(a->tmpl);
  mp_free(Func_Def, a);
}

Stmt new_stmt_fptr(struct Symbol_* xid, Type_Decl* td, const Arg_List args, const ae_flag flag) {
  Stmt a              = mp_alloc(Stmt);
  a->stmt_type        = ae_stmt_fptr;
  a->d.stmt_fptr.td    = td;
  SET_FLAG(td, flag);
  a->d.stmt_fptr.xid   = xid;
  a->d.stmt_fptr.args  = args;
  a->pos = td->xid->pos;
  return a;

}

Stmt new_stmt_type(Type_Decl* td, struct Symbol_* xid) {
  Stmt a              = mp_alloc(Stmt);
  a->stmt_type        = ae_stmt_type;
  a->d.stmt_type.td   = td;
  a->d.stmt_type.xid  = xid;
  a->pos = td->xid->pos;
  return a;
}

ANN static void free_stmt_type(Stmt_Type a){
  if(!a->type)
    free_type_decl(a->td);
}

ANN static void free_stmt_fptr(Stmt_Fptr a) {
  if(!a->func) {
    if(a->args)
      free_arg_list(a->args);
    free_type_decl(a->td);
  }
}

Tmpl_Call* new_tmpl_call(const Type_List tl) {
  Tmpl_Call* a = mp_alloc(Tmpl_Call);
  a->types = tl;
  a->base = NULL;
  return a;
}

ANN static void free_tmpl_call(Tmpl_Call* a) {
  free_type_list(a->types);
  mp_free(Tmpl_Call, a);
}

Exp new_exp_call(const Exp base, const Exp args) {
  Exp a = mp_alloc(Exp);
  a->exp_type = ae_exp_call;
  a->meta = ae_meta_value;
  a->d.exp_call.func = base;
  a->d.exp_call.args = args;
  a->pos = base->pos;
  a->d.exp_call.self = a;
  return a;
}

ANN static void free_exp_call(Exp_Call* a) {
  if(a->tmpl)
    free_tmpl_call(a->tmpl);
  free_exp(a->func);
  if(a->args)
    free_exp(a->args);
}

Exp new_exp_dot(const Exp base, struct Symbol_* xid) {
  Exp a = mp_alloc(Exp);
  a->exp_type = ae_exp_dot;
  a->meta = ae_meta_var;
  a->d.exp_dot.base = base;
  a->d.exp_dot.xid = xid;
  a->pos = base->pos;
  a->d.exp_dot.self = a;
  return a;
}

ANN static void free_exp_dot(Exp_Dot* dot) {
  if(dot->base)
    free_exp(dot->base);
}

Exp prepend_exp(const restrict Exp exp, const restrict Exp next) {
  exp->next = next;
  return exp;
}

ANN static void free_exp_primary(Exp_Primary* a) {
  const ae_prim_t t = a->primary_type;
  if(t == ae_primary_hack)
    free_exp(a->d.exp);
  else if(t == ae_primary_array)
    free_array_sub(a->d.array);
  else if(t== ae_primary_complex ||
          t == ae_primary_polar  ||
          t == ae_primary_vec)
    free_exp(a->d.vec.exp);
}

typedef void (*_exp_func)(const union exp_data *);
static const _exp_func exp_func[] = {
  (_exp_func)free_exp_decl,    (_exp_func)free_exp_binary, (_exp_func)free_exp_unary,
  (_exp_func)free_exp_primary, (_exp_func)free_exp_cast,   (_exp_func)free_exp_post,
  (_exp_func)free_exp_call,    (_exp_func)free_exp_array,  (_exp_func)free_exp_if,
  (_exp_func)free_exp_dot,     (_exp_func)free_exp_dur
// (_exp_func)free_exp_constprop
};

void free_exp(Exp exp) {
  if(exp->next)
    free_exp(exp->next);
  exp_func[exp->exp_type](&exp->d);
  mp_free(Exp, exp);
}

Arg_List new_arg_list(Type_Decl* td, const Var_Decl var_decl, const Arg_List arg_list) {
  Arg_List a = mp_alloc(Arg_List);
  a->td       = td;
  a->var_decl = var_decl;
  a->next     = arg_list;
  return a;
}

void free_arg_list(Arg_List a) {
  if(a->next)
    free_arg_list(a->next);
  free_type_decl(a->td);
  free_var_decl(a->var_decl);
  mp_free(Arg_List, a);

}

Stmt new_stmt_exp(const ae_stmt_t type, const Exp exp) {
  Stmt a = mp_alloc(Stmt);
  a->stmt_type = type;
  a->d.stmt_exp.val = exp;
  a->d.stmt_exp.self = a;
  a->pos = exp->pos;
  return a;
}

Stmt new_stmt_code(const Stmt_List list) {
  Stmt a = mp_alloc(Stmt);
  a->stmt_type = ae_stmt_code;
  a->d.stmt_code.stmt_list = list;
  a->pos = list->stmt->pos;
  return a;
}

ANN static void free_stmt_code(Stmt_Code a) {
  if(a->stmt_list)
    free_stmt_list(a->stmt_list);
}

ANN inline static void free_stmt_exp(struct Stmt_Exp_* a) {
  if(a->val)
    free_exp(a->val);
}

Stmt new_stmt(const ae_stmt_t type, const uint pos) {
  Stmt a = mp_alloc(Stmt);
  a->stmt_type = type;
  a->pos = pos;
  return a;
}

Stmt new_stmt_flow(const ae_stmt_t type, const Exp cond, const Stmt body, const m_bool is_do) {
  Stmt a = mp_alloc(Stmt);
  a->stmt_type = type;
  a->d.stmt_flow.is_do = !!is_do;
  a->d.stmt_flow.cond = cond;
  a->d.stmt_flow.body = body;
  a->pos = cond->pos;
  a->d.stmt_flow.self = a;
  return a;
}

ANN static void free_stmt_flow(struct Stmt_Flow_* a) {
  free_exp(a->cond);
  free_stmt(a->body);
}

Stmt new_stmt_for(const restrict Stmt c1, const restrict Stmt c2, const restrict Exp c3, const Stmt body) {
  Stmt a = mp_alloc(Stmt);
  a->stmt_type = ae_stmt_for;
  a->d.stmt_for.c1 = c1;
  a->d.stmt_for.c2 = c2;
  a->d.stmt_for.c3 = c3;
  a->d.stmt_for.body = body;
  a->pos = c1->pos;
  a->d.stmt_for.self = a;
  return a;
}

ANN static void free_stmt_for(Stmt_For a) {
  free_stmt(a->c1);
  free_stmt(a->c2);
  if(a->c3)
    free_exp(a->c3);
  free_stmt(a->body);
}

Stmt new_stmt_auto(struct Symbol_* sym, const Exp exp, const Stmt body) {
  Stmt a = mp_alloc(Stmt);
  a->stmt_type = ae_stmt_auto;
  a->d.stmt_auto.sym = sym;
  a->d.stmt_auto.exp = exp;
  a->d.stmt_auto.body = body;
  a->d.stmt_auto.self = a;
  a->pos = exp->pos;
  return a;
}

ANN static void free_stmt_auto(Stmt_Auto a) {
  free_exp(a->exp);
  free_stmt(a->body);
}

Stmt new_stmt_jump(struct Symbol_* xid, const m_bool is_label, const uint pos) {
  Stmt a = mp_alloc(Stmt);
  a->stmt_type = ae_stmt_jump;
  a->d.stmt_jump.name = xid;
  a->d.stmt_jump.is_label = is_label;
  a->d.stmt_jump.self = a;
  a->pos = pos;
  return a;
}

Stmt new_stmt_loop(const Exp cond, const Stmt body) {
  Stmt a = mp_alloc(Stmt);
  a->stmt_type = ae_stmt_loop;
  a->d.stmt_loop.cond = cond;
  a->d.stmt_loop.body = body;
  a->pos = cond->pos;
  a->d.stmt_loop.self = a;
  return a;
}

ANN static void free_stmt_loop(Stmt_Loop a) {
  free_exp(a->cond);
  free_stmt(a->body);
}

Stmt new_stmt_if(const Exp cond, const restrict Stmt if_body) {
  Stmt a = mp_alloc(Stmt);
  a->stmt_type = ae_stmt_if;
  a->d.stmt_if.cond = cond;
  a->d.stmt_if.if_body = if_body;
  a->pos = cond->pos;
  return a;
}

ANN static void free_stmt_if(Stmt_If a) {
  free_exp(a->cond);
  free_stmt(a->if_body);
  if(a->else_body)
    free_stmt(a->else_body);
}

Stmt new_stmt_switch(const Exp val, Stmt stmt) {
  Stmt a = mp_alloc(Stmt);
  a->stmt_type = ae_stmt_switch;
  a->d.stmt_switch.val = val;
  a->d.stmt_switch.stmt = stmt;
  a->d.stmt_switch.self = a;
  a->pos = val->pos;
  return a;
}

ANN inline static void free_stmt_switch(Stmt_Switch a) {
  free_exp(a->val);
  free_stmt(a->stmt);
}

Stmt new_stmt_enum(const ID_List list, struct Symbol_* xid) {
  Stmt a = mp_alloc(Stmt);
  a->stmt_type = ae_stmt_enum;
  a->d.stmt_enum.xid = xid;
  a->d.stmt_enum.list = list;
  a->d.stmt_enum.flag = 0;
  a->d.stmt_enum.self = a;
  vector_init(&a->d.stmt_enum.values);
  a->pos = list->pos;
  return a;
}

ANN static void free_stmt_enum(Stmt_Enum a) {
  free_id_list(a->list);
  vector_release(&a->values);
}

Stmt new_stmt_union(const Decl_List l, const uint pos) {
  Stmt a = mp_alloc(Stmt);
  a->stmt_type = ae_stmt_union;
  a->d.stmt_union.l = l;
  a->d.stmt_union.self = a;
  a->pos = pos;
  return a;
}

#ifndef TINY_MODE
#ifdef TOOL_MODE
Stmt new_stmt_pp(const enum ae_pp_type type, const m_str data) {
  Stmt a = mp_alloc(Stmt);
  a->stmt_type = ae_stmt_pp;
  a->d.stmt_pp.type = type;
  a->d.stmt_pp.data = data;
  return a;
}

ANN inline static void free_stmt_pp(Stmt_PP a) {
  if(a->data)
    xfree(a->data);
}
#endif
#endif

Decl_List new_decl_list(const Exp d, const Decl_List l) {
  Decl_List a = mp_alloc(Decl_List);
  a->self = d;
  a->next = l;
  return a;
}

ANN static void free_decl_list(Decl_List a) {
  if(a->next)
    free_decl_list(a->next);
  if(a->self)
    free_exp(a->self);
  mp_free(Decl_List, a);
}

ANN inline static void free_stmt_union(Stmt_Union a) {
  free_decl_list(a->l);
}

ANN static void free_stmt_xxx(const union stmt_data *d __attribute__((unused))) { return; }
typedef void (*_stmt_func)(const union stmt_data *);
static const _stmt_func stmt_func[] = {
  (_stmt_func)free_stmt_exp,  (_stmt_func)free_stmt_flow, (_stmt_func)free_stmt_flow,
  (_stmt_func)free_stmt_for,  (_stmt_func)free_stmt_auto, (_stmt_func)free_stmt_loop,
  (_stmt_func)free_stmt_if,   (_stmt_func)free_stmt_code, (_stmt_func)free_stmt_switch,
  (_stmt_func)free_stmt_xxx,  (_stmt_func)free_stmt_xxx,  (_stmt_func)free_stmt_xxx,
  (_stmt_func)free_stmt_xxx,  (_stmt_func)free_stmt_xxx,  (_stmt_func)free_stmt_enum,
  (_stmt_func)free_stmt_fptr, (_stmt_func)free_stmt_type, (_stmt_func)free_stmt_union,
#ifndef TINY_MODE
#ifdef TOOL_MODE
  (_stmt_func)free_stmt_pp
#endif
#endif
};

void free_stmt(Stmt stmt) {
  stmt_func[stmt->stmt_type](&stmt->d);
  mp_free(Stmt, stmt);
}

Stmt_List new_stmt_list(Stmt stmt, Stmt_List next) {
  Stmt_List list = mp_alloc(Stmt_List);
  list->stmt = stmt;
  list->next = next;
  return list;
}

void free_stmt_list(Stmt_List list) {
  if(list->next)
    free_stmt_list(list->next);
  free_stmt(list->stmt);
  mp_free(Stmt_List, list);
}

Section* new_section_stmt_list(const Stmt_List list) {
  Section* a = mp_alloc(Section);
  a->section_type = ae_section_stmt;
  a->d.stmt_list = list;
  return a;
}

Section* new_section_func_def(const Func_Def func_def) {
  Section* a = mp_alloc(Section);
  a->section_type = ae_section_func;
  a->d.func_def = func_def;
  return a;
}

Section* new_section_class_def(const Class_Def class_def) {
  Section* a = mp_alloc(Section);
  a->section_type = ae_section_class;
  a->d.class_def = class_def;
  return a;
}

void free_class_def(Class_Def a) {
  if(a->type && GET_FLAG(a, ae_flag_template))
    return;
  if(a->ext)
    free_type_decl(a->ext);
  if(a->tmpl)
    free_tmpl_class(a->tmpl);
  if(a->body && (!a->type || !GET_FLAG(a, ae_flag_ref)))
    free_class_body(a->body);
  free_id_list(a->name);
  mp_free(Class_Def, a);
}

ANN static void free_section(Section* section) {
  const ae_section_t t = section->section_type;
  if(t == ae_section_class)
    free_class_def(section->d.class_def);
  else if(t == ae_section_stmt)
    free_stmt_list(section->d.stmt_list);
  else if(t == ae_section_func) {
    if(!GET_FLAG(section->d.func_def, ae_flag_builtin))
      free_stmt(section->d.func_def->d.code);
    free_func_def(section->d.func_def);
  }
  mp_free(Section, section);
}

void free_class_body(Class_Body a) {
  if(a->next)
    free_class_body(a->next);
  if(a->section)
    free_section(a->section);
  mp_free(Class_Body, a);
}

Class_Def new_class_def(const ae_flag class_decl, const ID_List name, Type_Decl* ext,
    const Class_Body body) {
  Class_Def a = mp_alloc(Class_Def);
  a->flag = class_decl;
  a->name = name;
  a->ext  = ext;
  a->body = body;
  return a;
}

Class_Body new_class_body(Section* section, const Class_Body body) {
  Class_Body a = mp_alloc(Class_Body);
  a->section = section;
  a->next = body;
  return a;
}

Type_List new_type_list(Type_Decl* td, const Type_List next) {
  Type_List a = mp_alloc(Type_List);
  a->td   = td;
  a->next = next;
  return a;
}

void free_type_list(Type_List a) {
  if(a->next)
    free_type_list(a->next);
  free_type_decl(a->td);
  mp_free(Type_List, a);
}

Ast new_ast(Section* section, const Ast next) {
  Ast ast = mp_alloc(Ast);
  ast->section = section;
  ast->next = next;
  return ast;
}

void free_ast(Ast a) {
  if(a->next)
    free_ast(a->next);
  free_section(a->section);
  mp_free(Ast, a);
}
