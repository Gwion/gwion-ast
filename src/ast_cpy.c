#include "gwion_util.h"
#include "gwion_ast.h"

ANN Stmt      cpy_stmt(MemPool p, const Stmt src);
ANN static void cpy_stmt2(MemPool p, const Stmt a, const Stmt src);
ANN Exp              cpy_exp(MemPool p, const Exp src);
ANN Type_List        cpy_type_list(MemPool p, const Type_List src);
ANN Arg_List         cpy_arg_list(MemPool p, const Arg_List src);
ANN Class_Def        cpy_class_def(MemPool p, const Class_Def src);
ANN static Stmt_List cpy_stmt_list(MemPool p, Stmt_List src);

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

ANN static void cpy_var_decl(MemPool p NUSED, Var_Decl *a, const Var_Decl *src) {
  a->xid     = src->xid;                                   // 1
  a->pos = src->pos;                                       // 1
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
  ID_List a = new_mp_vector(p, Symbol, src->len);
  for(uint32_t i = 0; i < src->len; i++) {
    Symbol sym = *mp_vector_at(src, Symbol, i);
    mp_vector_set(a, Symbol, i, sym);
  }
  return a;
}

ANN Specialized_List cpy_specialized_list(MemPool                p,
                                          const Specialized_List src) {
  Specialized_List tgt = new_mp_vector(p, Specialized, src->len);
  for(uint32_t i = 0; i < src->len; i++) {
    Specialized *_src = mp_vector_at(src, Specialized, i);
    Specialized *_tgt = mp_vector_at(tgt, Specialized, i);
    _tgt->xid = _src->xid;
    if (_src->traits) _tgt->traits = cpy_id_list(p, _src->traits);
    _tgt->pos = _src->pos;
  }
  return tgt;
}

ANN Type_List cpy_type_list(MemPool p, const Type_List src) {
  Type_List a = new_mp_vector(p, Type_Decl*, src->len);
  for(uint32_t i = 0; i < src->len; i++) {
    Type_Decl *_src = *mp_vector_at(src, Type_Decl*, i);
    mp_vector_set(a, Type_Decl*, i, cpy_type_decl(p, _src));
  }
  return a;
}

ANN Arg_List cpy_arg_list(MemPool p, const Arg_List src) {
  Arg_List arg = new_mp_vector(p, Arg, src->len);
  for(m_uint i = 0; i < src->len; i++) {
    Arg *_src = mp_vector_at(src, Arg, i);
    Arg *_arg = mp_vector_at(arg, Arg, i);
    if (_src->td) _arg->td = cpy_type_decl(p, _src->td);
    cpy_var_decl(p, &_arg->var_decl, &_src->var_decl);
    if (_src->exp) _arg->exp = cpy_exp(p, _src->exp);
  }
  return arg;
}

ANN static void cpy_exp_decl(MemPool p, Exp_Decl *a, const Exp_Decl *src) {
  a->td   = cpy_type_decl(p, src->td);
  cpy_var_decl(p, &a->vd, &src->vd);
  if(src->args) a->args = cpy_exp(p, src->args);
}

ANN static void cpy_prim(MemPool p, Exp_Primary *a, const Exp_Primary *src) {
  switch (src->prim_type) {
  case ae_prim_id:
  case ae_prim_locale:
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
    a->d.string.data  = src->d.string.data;
    a->d.string.delim = src->d.string.delim;
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
  if (!src->call)
    a->list = cpy_specialized_list(p, src->list);
  else {
    a->list = src->list;
    a->call = cpy_type_list(p, src->call);
  }
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

ANN static MP_Vector *cpy_captures(MemPool p, const Capture_List src) {
  Capture_List a = new_mp_vector(p, Capture, src->len);
  for(uint32_t i = 0; i < src->len; i++) {
    Capture capture = *mp_vector_at(src, Capture, i);
    mp_vector_set(a, Capture, i, capture);
  }
  return a;
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
    a->code = cpy_stmt_list(p, src->code);
    break;
  }
  if(src->captures)
    a->captures = cpy_captures(p, src->captures);
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
  if (src->idx) a->idx = cpy_eachidx(p, src->idx);
  a->vpos = src->vpos;
}

ANN static void cpy_stmt_loop(MemPool p, Stmt_Loop a, const Stmt_Loop src) {
  a->cond = cpy_exp(p, src->cond);
  a->body = cpy_stmt(p, src->body);
  if (src->idx) a->idx = cpy_eachidx(p, src->idx);
}

ANN static void cpy_stmt_if(MemPool p, Stmt_If a, const Stmt_If src) {
  if (src->cond) a->cond = cpy_exp(p, src->cond);
  if (src->if_body) a->if_body = cpy_stmt(p, src->if_body);
  if (src->else_body) a->else_body = cpy_stmt(p, src->else_body);
}

ANN static void cpy_stmt_case(MemPool p, const Stmt_Match a, const Stmt_Match src) {
  a->cond = cpy_exp(p, src->cond);
  a->list = cpy_stmt_list(p, src->list);
  if (src->when) a->when = cpy_exp(p, src->when);
}

ANN static void cpy_stmt_pp(MemPool p NUSED, Stmt_PP a, const Stmt_PP src) {
  if (src->data) a->data = strdup(src->data);
  if (src->exp) a->exp = cpy_exp(p, src->exp);
  a->xid = src->xid;
}

ANN static Stmt_List cpy_stmt_cases(MemPool p, Stmt_List src) {
  const m_uint sz = src->len;
  Stmt_List a = new_mp_vector(p, struct Stmt_, sz);
  for(m_uint i = 0; i < sz; i++) {
    const Stmt a_stmt   = mp_vector_at(a, struct Stmt_, i);
    const Stmt src_stmt = mp_vector_at(src, struct Stmt_, i);
    cpy_stmt_case(p, &a_stmt->d.stmt_match, &src_stmt->d.stmt_match);
  }
  return a;
}

ANN static Handler_List cpy_handler_list(MemPool p, const Handler_List src) {
  Handler_List tgt = new_mp_vector(p, Handler, src->len);
  for(m_uint i = 0; i < src->len; i++) {
    Handler *src_handler = mp_vector_at(src, Handler, i);
    Handler *tgt_handler = mp_vector_at(tgt, Handler, i);
    tgt_handler->stmt        = cpy_stmt(p, src_handler->stmt);
    tgt_handler->xid         = src_handler->xid;
    tgt_handler->pos = src_handler->pos;
  }
  return tgt;
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
  a->xid = src->xid;                     // 1
  if (src->args) a->args = cpy_arg_list(p, src->args); // 1
  if (src->tmpl) a->tmpl = cpy_tmpl(p, src->tmpl); // 1
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

ANN static void cpy_union_member(MemPool p, Union_Member *a, Union_Member *src) {
  a->td        = cpy_type_decl(p, src->td);
  cpy_var_decl(p, &a->vd, &src->vd);
}

ANN Union_List cpy_union_list(MemPool p, const Union_List src) {
  Union_List a = new_mp_vector(p, Union_Member, src->len);
  for(uint32_t i = 0; i < src->len; i++) {
    Union_Member *_src = mp_vector_at(src, Union_Member, i);
    Union_Member *_tgt = mp_vector_at(a, Union_Member, i);
    cpy_union_member(p, _tgt, _src);
  }
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

ANN Stmt cpy_stmt(MemPool p, const Stmt src) {
  const Stmt a = mp_calloc(p, Stmt);
  cpy_stmt2(p, a, src);
  return a;
}

ANN Stmt cpy_stmt3(MemPool p, const Stmt src) {
  const Stmt a = mp_calloc(p, Stmt);
  memcpy(a, src, sizeof(struct Stmt_));
  return a;
}

ANN static void cpy_stmt_spread(MemPool p, Spread_Def a, const Spread_Def src) {
  a->xid = src->xid;
  a->list = cpy_id_list(p, src->list);
  a->data = mstrdup(p, src->data);
  a->pos  = src->pos;
}

ANN static void cpy_stmt2(MemPool p, const Stmt a, const Stmt src) {
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
  case ae_stmt_spread:
    cpy_stmt_spread(p, &a->d.stmt_spread, &src->d.stmt_spread);
    break;
  case ae_stmt_break:
  case ae_stmt_continue:
  case ae_stmt_retry:
    break;
  }
  a->stmt_type = src->stmt_type;
  a->pos       = src->pos;
}

ANN Func_Def cpy_func_def(MemPool p, const Func_Def src) {
  Func_Def a = mp_calloc(p, Func_Def);
  a->base    = cpy_func_base(p, src->base);
  if (src->d.code) {
    if(!src->builtin && src->d.code) a->d.code = cpy_stmt_list(p, src->d.code);
    else a->d.dl_func_ptr = src->d.dl_func_ptr;
  }
  if (src->captures) a->captures = cpy_captures(p, src->captures);
  //  a->trait = src->trait;
  a->builtin = src->builtin;
  return a;
}

ANN Stmt_List cpy_stmt_list(MemPool p, Stmt_List src) {
  const m_uint sz = src->len;
  Stmt_List a = new_mp_vector(p, struct Stmt_, sz);
  for(m_uint i = 0; i < sz; i++) {
    const Stmt astmt = mp_vector_at(a, struct Stmt_, i);
    const Stmt sstmt = mp_vector_at(src, struct Stmt_, i);
    cpy_stmt2(p, astmt, sstmt);
  }
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

ANN static Prim_Def cpy_prim_def(MemPool p, const Prim_Def src) {
  Prim_Def a = mp_calloc(p, Prim_Def);
  a->name = src->name;
  a->size = src->size;
  a->flag = src->flag;
  a->loc = src->loc;
  return a;
}

ANN static void cpy_section(MemPool p, Section *const a, const Section *src) {
//  Section *a = mp_calloc(p, Section);
  switch (src->section_type) {
  case ae_section_stmt:
    //if(src->d.stmt_list)
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
    case ae_section_primitive:
    a->d.prim_def = cpy_prim_def(p, src->d.prim_def);
    break;
  }
  a->section_type = src->section_type;
//  return a;
}

ANN Extend_Def cpy_extend_def(MemPool p, const Extend_Def src) {
  Extend_Def a = mp_calloc(p, Extend_Def);
  a->traits = cpy_id_list(p, src->traits);
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

ANN Ast cpy_ast(MemPool p, Ast src) {
  Ast a = new_mp_vector(p, Section, src->len);
  for(m_uint i = 0; i < src->len; i++) {
    Section * asec = mp_vector_at(a, Section, i);
    Section * ssec = mp_vector_at(src, Section, i);
    cpy_section(p, asec, ssec);
  }
  return a;
}
