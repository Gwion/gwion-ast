#include "defs.h"
#include "gwion_util.h"
#include "gwion_ast.h"
#include "xxx.h"

#define CHECK_RET(a, ret) \
do {                      \
  if(!(a))                \
    ret = false;          \
} while(0) 

ANN static bool xxx_type_decl(XXX *a, Type_Decl* b);
ANN static bool xxx_func_def(XXX *a, Func_Def b);

ANN static bool xxx_symbol(XXX *a NUSED, Symbol b NUSED) {
  return true;
}

ANN static bool xxx_tag(XXX *a, Tag *b) {
  return b->sym ? xxx_symbol(a, b->sym) : true;
}

ANN static bool xxx_array_sub(XXX *a, Array_Sub b) {
  return b->exp ? xxx_exp(a, b->exp) : true;
}

ANN static bool xxx_id_list(XXX *a, ID_List b) {
  bool ret = true;
  for(uint32_t i = 0; i < b->len; i++) {
    Symbol c = *mp_vector_at(b, Symbol, i);
    CHECK_RET(xxx_symbol(a, c), ret);
  }
  return ret;
}

ANN static bool xxx_specialized(XXX *a, Specialized *b) {
  bool ret = true;
  CHECK_RET(xxx_tag(a, &b->tag), ret);
  if(b->traits) CHECK_RET(xxx_id_list(a, b->traits), ret);
  return ret;
}

ANN static bool xxx_specialized_list(XXX *a, Specialized_List b) {
  bool ret = true;
  for(uint32_t i = 0; i < b->len; i++) {
    Specialized * c = mp_vector_at(b, Specialized  , i);
    CHECK_RET(xxx_specialized(a, c), ret);
  }
  return ret;
}

ANN static bool xxx_tmplarg(XXX *a, TmplArg *b) {
  bool ret = true;
  if (b->type == tmplarg_td) CHECK_RET(xxx_type_decl(a, b->d.td), ret);
  else CHECK_RET(xxx_exp(a, b->d.exp), ret);
  return ret;
}

ANN static bool xxx_tmplarg_list(XXX *a, TmplArg_List b) {
  bool ret = true;
  for(uint32_t i = 0; i < b->len; i++) {
    TmplArg * c = mp_vector_at(b, TmplArg, i);
    CHECK_RET(xxx_tmplarg(a, c), ret);
  }
  return ret;
}

ANN static bool xxx_tmpl(XXX *a, Tmpl *b) {
  bool ret = true;
  if(b->list) CHECK_RET(xxx_specialized_list(a, b->list), ret);
  if(b->call) CHECK_RET(xxx_tmplarg_list(a, b->call), ret);
  return ret;
}

ANN static bool xxx_range(XXX *a, Range *b) {
  bool ret = true;
  if(b->start) CHECK_RET(xxx_exp(a, b->start), ret);
  if(b->end) CHECK_RET(xxx_exp(a , b->end), ret);
  return ret;
}

ANN static bool xxx_type_decl(XXX *a, Type_Decl *b) {
  bool ret = true;
  CHECK_RET(xxx_tag(a, &b->tag), ret);
  if(b->array) CHECK_RET(xxx_array_sub(a, b->array), ret);
  if(b->types) CHECK_RET(xxx_tmplarg_list(a, b->types), ret);
  return ret;
}

ANN static bool xxx_prim_id(XXX *a, Symbol *b) {
  return xxx_symbol(a, *b);
}

ANN static bool xxx_prim_num(XXX *a NUSED, m_uint *b NUSED) {
  return true;
}

ANN static bool xxx_prim_float(XXX *a NUSED, m_float *b NUSED) {
  return true;
}

ANN static bool xxx_prim_str(XXX *a NUSED, m_str *b NUSED) {
  return true;
}

ANN static bool xxx_prim_array(XXX *a, Array_Sub *b) {
  return xxx_array_sub(a, *b);
}

ANN static bool xxx_prim_range(XXX *a, Range* *b) {
  return xxx_range(a, *b);
}

ANN static bool xxx_prim_dict(XXX *a, Exp* *b) {
  return xxx_exp(a, *b);
}

ANN static bool xxx_prim_hack(XXX *a, Exp* *b) {
  return xxx_exp(a, *b);
}

ANN static bool xxx_prim_interp(XXX *a, Exp* *b) {
  return xxx_exp(a, *b);
}

ANN static bool xxx_prim_char(XXX *a NUSED, m_str *b NUSED) {
  return true;
}

ANN static bool xxx_prim_nil(XXX *a NUSED, bool *b NUSED) {
  return true;
}

ANN static bool xxx_prim_perform(XXX *a, Symbol *b) {
  return xxx_symbol(a, *b);
}

ANN static bool xxx_prim_locale(XXX *a, Symbol *b) {
  return xxx_symbol(a, *b);
}

DECL_PRIM_FUNC(xxx, bool, XXX *)
ANN static bool xxx_prim(XXX *a, Exp_Primary *b) {
  return xxx_prim_func[b->prim_type](a, &b->d);
}

ANN static bool xxx_var_decl(XXX *a, Var_Decl *b) {
  return xxx_tag(a, &b->tag);
}

ANN static bool xxx_variable(XXX *a, Variable *b) {
  bool ret = true;
  if(b->td) CHECK_RET(xxx_type_decl(a, b->td), ret);
  CHECK_RET(xxx_var_decl(a, &b->vd), ret);
  return ret;
}

ANN static bool xxx_exp_decl(XXX *a, Exp_Decl *b) {
  bool ret = true;
  if(b->args) CHECK_RET(xxx_exp(a, b->args), ret);
  CHECK_RET(xxx_variable(a, &b->var), ret);
  return ret;
}

ANN static bool xxx_exp_binary(XXX *a, Exp_Binary *b) {
  bool ret = true;
  CHECK_RET(xxx_exp(a, b->lhs), ret);
  CHECK_RET(xxx_exp(a, b->rhs), ret);
  CHECK_RET(xxx_symbol(a, b->op), ret);
  return ret;
}

ANN static bool xxx_capture(XXX *a, Capture *b) {
  return xxx_tag(a, &b->var.tag);
}

ANN static bool xxx_captures(XXX *a, Capture_List b) {
  bool ret = true;
  for(uint32_t i = 0; i < b->len; i++) {
    Capture *c = mp_vector_at(b, Capture, i);
    CHECK_RET(xxx_capture(a, c), ret);
  }
  return ret;
}

ANN static bool xxx_exp_unary(XXX *a, Exp_Unary *b) {
  bool ret = true;
  CHECK_RET(xxx_symbol(a, b->op), ret);
  const enum unary_type type = b->unary_type;
  if(type == unary_exp) CHECK_RET(xxx_exp(a, b->exp), ret);
  else if(type == unary_td) CHECK_RET(xxx_type_decl(a, b->ctor.td), ret);
  else {
    CHECK_RET(xxx_stmt_list(a, b->code), ret);
    if(b->captures)CHECK_RET(xxx_captures(a, b->captures), ret);
  }
  return ret;
}

ANN static bool xxx_exp_cast(XXX *a, Exp_Cast *b) {
  bool ret = true;
  CHECK_RET(xxx_type_decl(a, b->td), ret);
  CHECK_RET(xxx_exp(a, b->exp), ret);
  return ret;
}

ANN static bool xxx_exp_post(XXX *a, Exp_Postfix *b) {
  bool ret = true;
  CHECK_RET(xxx_symbol(a, b->op), ret);
  CHECK_RET(xxx_exp(a, b->exp), ret);
  return ret;
}

ANN static bool xxx_exp_call(XXX *a, Exp_Call *b) {
  bool ret = true;
  CHECK_RET(xxx_exp(a, b->func), ret);
  if(b->args) CHECK_RET(xxx_exp(a, b->args), ret);
  if(b->tmpl) CHECK_RET(xxx_tmpl(a, b->tmpl), ret);
  return ret;
}

ANN static bool xxx_exp_array(XXX *a, Exp_Array *b) {
  bool ret = true;
  CHECK_RET(xxx_exp(a, b->base), ret);
  CHECK_RET(xxx_array_sub(a, b->array), ret);
  return ret;
}

ANN static bool xxx_exp_slice(XXX *a, Exp_Slice *b) {
  bool ret = true;
  CHECK_RET(xxx_exp(a, b->base), ret);
  CHECK_RET(xxx_range(a, b->range), ret);
  return ret;
}

ANN static bool xxx_exp_if(XXX *a, Exp_If *b) {
  bool ret = true;
  CHECK_RET(xxx_exp(a, b->cond), ret);
  if(b->if_exp) CHECK_RET(xxx_exp(a, b->if_exp), ret);
  CHECK_RET(xxx_exp(a, b->else_exp), ret);
  return ret;
}

ANN static bool xxx_exp_dot(XXX *a, Exp_Dot *b) {
  bool ret = true;
  CHECK_RET(xxx_exp(a, b->base), ret);
  CHECK_RET(xxx_symbol(a,  b->xid), ret);
  return ret;
}

ANN static bool xxx_exp_lambda(XXX *a, Exp_Lambda *b) {
  return xxx_func_def(a, b->def);
}

ANN static bool xxx_exp_td(XXX *a, Type_Decl *b) {
  return xxx_type_decl(a, b);
}

DECL_EXP_FUNC(xxx, bool, XXX*)
ANN static bool xxx_exp(XXX *a, Exp* b) {
  bool ret = b->poison
    ? xxx_exp_func[b->exp_type](a, &b->d)
    : false;
  if(b->next) CHECK_RET(xxx_exp(a, b ->next), ret);
  return ret;
}

ANN static bool xxx_stmt_exp(XXX *a, Stmt_Exp b) {
  return b->val ? xxx_exp(a,  b->val) : true;
}

ANN static bool xxx_stmt_while(XXX *a, Stmt_Flow b) {
  bool ret = true;
  CHECK_RET(xxx_exp(a, b->cond), ret);
  CHECK_RET(xxx_stmt(a, b->body), ret);
  return ret;
}

ANN static bool xxx_stmt_until(XXX *a, Stmt_Flow b) {
  bool ret = true;
  CHECK_RET(xxx_exp(a, b->cond), ret);
  CHECK_RET(xxx_stmt(a, b->body), ret);
  return ret;
}

ANN static bool xxx_stmt_for(XXX *a, Stmt_For b) {
  bool ret = true;
  CHECK_RET(xxx_stmt(a, b->c1), ret);
  if(b->c2) CHECK_RET(xxx_stmt(a, b->c2), ret);
  if(b->c3) CHECK_RET(xxx_exp(a, b->c3), ret);
  CHECK_RET(xxx_stmt(a, b->body), ret);
  return ret;
}

ANN static bool xxx_stmt_each(XXX *a, Stmt_Each b) {
  bool ret = true;
  if(b->idx.tag.sym) CHECK_RET(xxx_var_decl(a, &b->idx), ret);
  CHECK_RET(xxx_var_decl(a, &b->var), ret);
  CHECK_RET(xxx_exp(a, b->exp), ret);
  CHECK_RET(xxx_stmt(a, b->body), ret);
  return ret;
}

ANN static bool xxx_stmt_loop(XXX *a, Stmt_Loop b) {
  bool ret = true;
  if(b->idx.tag.sym) CHECK_RET(xxx_var_decl(a, &b->idx), ret);
  CHECK_RET(xxx_exp(a,  b->cond), ret);
  CHECK_RET(xxx_stmt(a, b->body), ret);
  return ret;
}

ANN static bool xxx_stmt_if(XXX *a, Stmt_If b) {
  bool ret = true;
  CHECK_RET(xxx_exp(a,  b->cond), ret);
  CHECK_RET(xxx_stmt(a, b->if_body), ret);
  if(b->else_body) xxx_stmt(a, b->else_body);
  return ret;
}

ANN static bool xxx_stmt_code(XXX *a, Stmt_Code b) {
  return b->stmt_list ? xxx_stmt_list(a, b->stmt_list) : true;
}

ANN static bool xxx_stmt_index(XXX *a NUSED, Stmt_Index b NUSED) {
  return true;
}

ANN static bool xxx_stmt_break(XXX *a, Stmt_Index b) {
  return xxx_stmt_index(a, b);
}

ANN static bool xxx_stmt_continue(XXX *a, Stmt_Index b) {
  return xxx_stmt_index(a, b);
}

ANN static bool xxx_stmt_return(XXX *a, Stmt_Exp b) {
  return b->val ? xxx_exp(a, b-> val) : true;
}

ANN static bool xxx_stmt_case(XXX *a, Stmt_Match b) {
  bool ret = true;
  CHECK_RET(xxx_exp(a, b->cond), ret);
  CHECK_RET(xxx_stmt_list(a, b->list), ret);
  if(b->when) CHECK_RET(xxx_exp(a, b->when), ret);
  return ret;
}

ANN static bool xxx_case_list(XXX *a, Stmt_List b) {
  bool ret = true;
  for(uint32_t i = 0; i < b->len; i++) {
    Stmt* c = mp_vector_at(b, Stmt, i);
    CHECK_RET(xxx_stmt_case(a, &c->d.stmt_match), ret);
  }
  return ret;
}

ANN static bool xxx_stmt_match(XXX *a, Stmt_Match b) {
  bool ret = true;
  xxx_exp(a, b->cond);
  xxx_case_list(a, b->list);
  if(b->where) xxx_stmt(a, b->where);
  return ret;
}

ANN static bool xxx_stmt_pp(XXX *a NUSED, Stmt_PP b NUSED) {
  return true;
}

ANN static bool xxx_stmt_retry(XXX *a NUSED, Stmt_Exp b NUSED) {
  return true;
}

ANN static bool xxx_handler(XXX *a, Handler *b) {
  bool ret = true;
  CHECK_RET(xxx_tag(a, &b->tag), ret);
  CHECK_RET(xxx_stmt(a, b->stmt), ret);
  return ret;
}

ANN static bool xxx_handler_list(XXX *a, Handler_List b) {
  bool ret = true;
  for(uint32_t i = 0; i < b->len; i++) {
    Handler *handler = mp_vector_at(b, Handler, i);
    CHECK_RET(xxx_handler(a, handler), ret);
  }
  return ret;
}

ANN static bool xxx_stmt_try(XXX *a, Stmt_Try b) {
  bool ret = true;
  CHECK_RET(xxx_stmt(a, b->stmt), ret);
  CHECK_RET(xxx_handler_list(a, b->handler), ret);
  return ret;
}

ANN static bool xxx_stmt_defer(XXX *a, Stmt_Defer b) {
  return xxx_stmt(a, b->stmt);
}

ANN static bool xxx_stmt_spread(XXX *a, Spread_Def b) {
  bool ret = true;
  CHECK_RET(xxx_tag(a, &b->tag), ret);
  CHECK_RET(xxx_id_list(a, b->list), ret);
  return ret;
}

ANN static bool xxx_stmt_using(XXX *a, Stmt_Using b) {
  bool ret = true;
  if(b->alias.sym) {
    CHECK_RET(xxx_tag(a, &b->alias), ret);
    CHECK_RET(xxx_exp(a, b->d.exp), ret);
  } else
    CHECK_RET(xxx_type_decl(a, b->d.td), ret);
  return ret;
}

ANN static bool xxx_stmt_import(XXX *a, Stmt_Import b) {
  bool ret = true;
  CHECK_RET(xxx_tag(a, &b->tag), ret);
  if(b->selection) {
    for(uint32_t i = 0; i < b->selection->len; i++) {
      ImportItem ii = *mp_vector_at(b->selection, ImportItem, i);
      CHECK_RET(xxx_tag(a, &ii.tag), ret);
      if(ii.exp)
        CHECK_RET(xxx_exp(a, ii.exp), ret);
    }
  }
  return ret;
}

DECL_STMT_FUNC(xxx, bool, XXX*)
ANN static bool xxx_stmt(XXX *a, Stmt* b) {
  return b->poison
    ? xxx_stmt_func[b->stmt_type](a, &b->d)
    : false;
}

ANN static bool xxx_arg(XXX *a, Arg *b) {
  return xxx_variable(a, &b->var);
}

ANN static bool xxx_arg_list(XXX *a, Arg_List b) {
  bool ret = true;
  for(uint32_t i = 0; i < b->len; i++) {
    Arg *c = mp_vector_at(b, Arg, i);
    CHECK_RET(xxx_arg(a, c), ret);
  }
  return ret;
}

ANN static bool xxx_variable_list(XXX *a, Variable_List b) {
  bool ret = true;
  for(uint32_t i = 0; i < b->len; i++) {
    Variable *c = mp_vector_at(b, Variable, i);
    CHECK_RET(xxx_variable(a, c), ret);
  }
  return ret;
}

ANN static bool xxx_stmt_list(XXX *a, Stmt_List b) {
  bool ret = true;
  for(uint32_t i = 0; i < b->len; i++) {
    Stmt* c = mp_vector_at(b, Stmt, i);
    CHECK_RET(xxx_stmt(a, c), ret);
  }
  return ret;
}

ANN static bool xxx_func_base(XXX *a, Func_Base *b) {
  bool ret = true;
  if(b->td) CHECK_RET(xxx_type_decl(a, b->td), ret);
  CHECK_RET(xxx_tag(a, &b->tag), ret);
  if(b->args) CHECK_RET(xxx_arg_list(a, b->args), ret);
  if(b->tmpl) CHECK_RET(xxx_tmpl(a, b->tmpl), ret);
  return ret;
}

ANN static bool xxx_func_def(XXX *a, Func_Def b) {
  bool ret = true;
  CHECK_RET(xxx_func_base(a, b->base), ret);
  if(b->d.code) CHECK_RET(xxx_stmt_list(a, b->d.code), ret);
  if(b->captures) CHECK_RET(xxx_captures(a, b->captures), ret);
  return ret;
}

ANN static bool xxx_type_def(XXX *a, Type_Def b) {
  bool ret = true;
  if(b->ext) CHECK_RET(xxx_type_decl(a, b->ext), ret);
  CHECK_RET(xxx_tag(a, &b->tag), ret);
  if(b->tmpl) CHECK_RET(xxx_tmpl(a, b->tmpl), ret);
  return ret;
}

ANN static bool xxx_class_def(XXX *a, Class_Def b) {
  bool ret = true;
  CHECK_RET(xxx_type_def( a, &b->base), ret);
  if(b->body) CHECK_RET(xxx_ast(a, b->body), ret);
  return ret;
}

ANN static bool xxx_trait_def(XXX *a, Trait_Def b) {
  return b->body ? xxx_ast(a, b->body) : true;
}

ANN static bool xxx_enumvalue(XXX *a, EnumValue *b) {
  return xxx_tag(a, &b->tag);
}

ANN static bool xxx_enum_list(XXX *a, EnumValue_List b) {
  bool ret = true;
  for(uint32_t i = 0; i < b->len; i++) {
    EnumValue *c = mp_vector_at(b, EnumValue, i);
    CHECK_RET(xxx_enumvalue(a, c), ret);
  }
  return ret;
}

ANN static bool xxx_enum_def(XXX *a, Enum_Def b) {
  bool ret = true;
  CHECK_RET(xxx_enum_list(a, b->list), ret);
  CHECK_RET(xxx_tag(a, &b->tag), ret);
  return ret;
}

ANN static bool xxx_union_def(XXX *a, Union_Def b) {
  bool ret = true;
  CHECK_RET(xxx_variable_list(a, b->l), ret);
  CHECK_RET(xxx_tag(a, &b->tag), ret);
  if(b->tmpl) CHECK_RET(xxx_tmpl(a, b->tmpl), ret);
  return ret;
}

ANN static bool xxx_fptr_def(XXX *a, Fptr_Def b) {
  return xxx_func_base(a, b->base);
}

ANN static bool xxx_extend_def(XXX *a, Extend_Def b) {
  bool ret = true;
  CHECK_RET(xxx_type_decl(a, b->td), ret);
  CHECK_RET(xxx_id_list(a, b->traits), ret);
  return ret;
}

ANN static bool xxx_prim_def(XXX *a, Prim_Def b) {
  return xxx_tag(a, &b->tag);
}

DECL_SECTION_FUNC(xxx, bool, XXX*)
ANN static bool xxx_section(XXX *a, Section *b) {
  return  !b->poison
    ? xxx_section_func[b->section_type](a, *(void**)&b->d)
    : false;
}

ANN static bool xxx_ast(XXX *a, Ast b) {
  bool ret = true;
  for(uint32_t i = 0; i < b->len; i++) {
    Section *c = mp_vector_at(b, Section, i);
    CHECK_RET(xxx_section(a, c), ret);
  }
  return ret;
}

int main(int argc, char **argv) {
  MemPool mp = mempool_ini(sizeof(Exp));
  SymTable* st = new_symbol_table(mp, 65347);
  PPArg ppa = {};
  XXX xxx = {};
  pparg_ini(mp, &ppa);
  for(int i = 1; i < argc; ++i) {
    FILE* file = fopen(argv[i], "r");
    if(!file)
      continue;
    struct AstGetter_ arg = { argv[i], file, st , .ppa=&ppa };
    const Ast ast = parse(&arg);
    if(ast) {
      xxx_ast(&xxx, ast);
      free_ast(mp, ast);
    }
    fclose(file);
  }
  pparg_end(&ppa);
  free_symbols(st);
  mempool_end(mp);
}
