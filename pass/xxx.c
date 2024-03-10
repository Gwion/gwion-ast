#include "gwion_util.h"
#include "gwion_ast.h"
#include "xxx.h"

ANN static void xxx_symbol(XXX *a, Symbol b) {
  (void)a;
  (void)b;
}

ANN static void xxx_loc(XXX *a, loc_t b) {
  (void)a;
  (void)b;
}

ANN static void xxx_tag(XXX *a, Tag *b) {
  if(b->sym) xxx_symbol(a, b->sym);
  xxx_loc(a, b->loc);
}

ANN static void xxx_array_sub(XXX *a, Array_Sub b) {
  if(b->exp) xxx_exp(a, b->exp);
}

ANN static void xxx_id_list(XXX *a, ID_List b) {
  for(uint32_t i = 0; i < b->len; i++) {
    Symbol c = *mp_vector_at(b, Symbol, i);
    xxx_symbol(a, c);
  }
}

ANN static void xxx_specialized(XXX *a, Specialized *b) {
  xxx_tag(a, &b->tag);
  if(b->traits) xxx_id_list(a, b->traits);
}

ANN static void xxx_specialized_list(XXX *a, Specialized_List b) {
  for(uint32_t i = 0; i < b->len; i++) {
    Specialized * c = mp_vector_at(b, Specialized  , i);
    xxx_specialized(a, c);
  }
}

ANN static void xxx_tmplarg(XXX *a, TmplArg *b) {
  if (b->type == tmplarg_td) xxx_type_decl(a, b->d.td);
  else xxx_exp(a, b->d.exp);
}

ANN static void xxx_tmplarg_list(XXX *a, TmplArg_List b) {
  for(uint32_t i = 0; i < b->len; i++) {
    TmplArg * c = mp_vector_at(b, TmplArg, i);
    xxx_tmplarg(a, c);
  }
}

ANN static void xxx_tmpl(XXX *a, Tmpl *b) {
  if(b->list) xxx_specialized_list(a, b->list);
  if(b->call) xxx_tmplarg_list(a, b->call);
}

ANN static void xxx_range(XXX *a, Range *b) {
  if(b->start) xxx_exp(a, b->start);
  if(b->end) xxx_exp(a , b->end);
}

ANN static void xxx_type_decl(XXX *a, Type_Decl *b) {
  xxx_tag(a, &b->tag);
  if(b->array) xxx_array_sub(a, b->array);
  if(b->types) xxx_tmplarg_list(a, b->types);
}

ANN static void xxx_prim_id(XXX *a, Symbol *b) {
  xxx_symbol(a, *b);
}

ANN static void xxx_prim_num(XXX *a, m_uint *b) {
  (void)a;
  (void)b;
}

ANN static void xxx_prim_float(XXX *a, m_float *b) {
  (void)a;
  (void)b;
}

ANN static void xxx_prim_str(XXX *a, m_str *b) {
  (void)a;
  (void)b;
}

ANN static void xxx_prim_array(XXX *a, Array_Sub *b) {
  xxx_array_sub(a, *b);
}

ANN static void xxx_prim_range(XXX *a, Range* *b) {
  xxx_range(a, *b);
}

ANN static void xxx_prim_dict(XXX *a, Exp* *b) {
  xxx_exp(a, *b);
}

ANN static void xxx_prim_hack(XXX *a, Exp* *b) {
  xxx_exp(a, *b);
}

ANN static void xxx_prim_interp(XXX *a, Exp* *b) {
  xxx_exp(a, *b);
}

ANN static void xxx_prim_char(XXX *a, m_str *b) {
  (void)a;
  (void)b;
}

ANN static void xxx_prim_nil(XXX *a, void *b) {
  (void)a;
  (void)b;
}

ANN static void xxx_prim_perform(XXX *a, Symbol *b) {
  xxx_symbol(a, *b);
}

ANN static void xxx_prim_locale(XXX *a, Symbol *b) {
  xxx_symbol(a, *b);
}

DECL_PRIM_FUNC(xxx, void, XXX *)
ANN static void xxx_prim(XXX *a, Exp_Primary *b) {
  xxx_prim_func[b->prim_type](a, &b->d);
}

ANN static void xxx_var_decl(XXX *a, Var_Decl *b) {
  xxx_tag(a, &b->tag);
}

ANN static void xxx_variable(XXX *a, Variable *b) {
  if(b->td) xxx_type_decl(a, b->td);
  xxx_var_decl(a, &b->vd);
}

ANN static void xxx_exp_decl(XXX *a, Exp_Decl *b) {
  xxx_variable(a, &b->var);
}

ANN static void xxx_exp_binary(XXX *a, Exp_Binary *b) {
  xxx_exp(a, b->lhs);
  xxx_exp(a, b->rhs);
  xxx_symbol(a, b->op);
}

ANN static void xxx_capture(XXX *a, Capture *b) {
  xxx_tag(a, &b->var.tag);
}

ANN static void xxx_captures(XXX *a, Capture_List b) {
  for(uint32_t i = 0; i < b->len; i++) {
    Capture *c = mp_vector_at(b, Capture, i);
    xxx_capture(a, c);
  }
}

ANN static void xxx_exp_unary(XXX *a, Exp_Unary *b) {
  xxx_symbol(a, b->op);
  const enum unary_type type = b->unary_type;
  if(type == unary_exp) xxx_exp(a, b->exp);
  else if(type == unary_td) xxx_type_decl(a, b->ctor.td);
  else {
    xxx_stmt_list(a, b->code);
    if(b->captures)xxx_captures(a, b->captures);
  }
}

ANN static void xxx_exp_cast(XXX *a, Exp_Cast *b) {
  xxx_type_decl(a, b->td);
  xxx_exp(a, b->exp);
}

ANN static void xxx_exp_post(XXX *a, Exp_Postfix *b) {
  xxx_symbol(a, b->op);
  xxx_exp(a, b->exp);
}

ANN static void xxx_exp_call(XXX *a, Exp_Call *b) {
  xxx_exp(a, b->func);
  if(b->args) xxx_exp(a, b->args);
  if(b->tmpl) xxx_tmpl(a, b->tmpl);
}

ANN static void xxx_exp_array(XXX *a, Exp_Array *b) {
  xxx_exp(a, b->base);
  xxx_array_sub(a, b->array);
}

ANN static void xxx_exp_slice(XXX *a, Exp_Slice *b) {
  xxx_exp(a, b->base);
  xxx_range(a, b->range);
}

ANN static void xxx_exp_if(XXX *a, Exp_If *b) {
  xxx_exp(a, b->cond);
  if(b->if_exp) xxx_exp(a, b->if_exp);
  xxx_exp(a, b->else_exp);
}

ANN static void xxx_exp_dot(XXX *a, Exp_Dot *b) {
  xxx_exp(a, b->base);
  xxx_symbol(a,  b->xid);
}

ANN static void xxx_exp_lambda(XXX *a, Exp_Lambda *b) {
  xxx_func_def(a, b->def);
}

ANN static void xxx_exp_td(XXX *a, Type_Decl *b) {
  xxx_type_decl(a, b);
}

DECL_EXP_FUNC(xxx, void, XXX*)
ANN static void xxx_exp(XXX *a, Exp* b) {
  xxx_exp_func[b->exp_type](a, &b->d);
  if(b->next) return xxx_exp(a, b ->next);
}

ANN static void xxx_stmt_exp(XXX *a, Stmt_Exp b) {
  if(b->val) xxx_exp(a,  b->val);
}

ANN static void xxx_stmt_while(XXX *a, Stmt_Flow b) {
  xxx_exp(a, b->cond);
  xxx_stmt(a, b->body);
}

ANN static void xxx_stmt_until(XXX *a, Stmt_Flow b) {
  xxx_exp(a, b->cond);
  xxx_stmt(a, b->body);
}

ANN static void xxx_stmt_for(XXX *a, Stmt_For b) {
  xxx_stmt(a, b->c1);
  if(b->c2) xxx_stmt(a, b->c2);
  if(b->c3) xxx_exp(a, b->c3);
  xxx_stmt(a, b->body);
}

ANN static void xxx_stmt_each(XXX *a, Stmt_Each b) {
  xxx_var_decl(a, &b->var);
  xxx_exp(a, b->exp);
  xxx_stmt(a, b->body);
}

ANN static void xxx_stmt_loop(XXX *a, Stmt_Loop b) {
  xxx_exp(a,  b->cond);
  xxx_stmt(a, b->body);
}

ANN static void xxx_stmt_if(XXX *a, Stmt_If b) {
  xxx_exp(a,  b->cond);
  xxx_stmt(a, b->if_body);
  if(b->else_body) xxx_stmt(a, b->else_body);
}

ANN static void xxx_stmt_code(XXX *a, Stmt_Code b) {
  if(b->stmt_list) xxx_stmt_list(a, b->stmt_list);
}

ANN static void xxx_stmt_break(XXX *a, Stmt_Index b) {
  xxx_stmt_index(a, b);
}

ANN static void xxx_stmt_continue(XXX *a, Stmt_Index b) {
  xxx_stmt_index(a, b);
}

ANN static void xxx_stmt_return(XXX *a, Stmt_Exp b) {
  if(b->val) xxx_exp(a, b-> val);
}

ANN static void xxx_case_list(XXX *a, Stmt_List b) {
  for(uint32_t i = 0; i < b->len; i++) {
    Stmt* c = mp_vector_at(b, Stmt, i);
    xxx_stmt_case(a, &c->d.stmt_match);
  }
}

ANN static void xxx_stmt_match(XXX *a, Stmt_Match b) {
  xxx_exp(a, b->cond);
  xxx_case_list(a, b->list);
  if(b->where) xxx_stmt(a, b->where);
}

ANN static void xxx_stmt_case(XXX *a, Stmt_Match b) {
  xxx_exp(a, b->cond);
  xxx_stmt_list(a, b->list);
  if(b->when) xxx_exp(a, b->when);
}

ANN static void xxx_stmt_index(XXX *a, Stmt_Index b) {
  (void)a;
  (void)b;
}

ANN static void xxx_stmt_pp(XXX *a, Stmt_PP b) {
  (void)a;
  (void)b;
}

ANN static void xxx_stmt_retry(XXX *a, Stmt_Exp b) {
  (void)a;
  (void)b;
}

ANN static void xxx_handler(XXX *a, Handler *b) {
  xxx_tag(a, &b->tag);
  xxx_stmt(a, b->stmt);
}

ANN static void xxx_handler_list(XXX *a, Handler_List b) {
  for(uint32_t i = 0; i < b->len; i++) {
    Handler *handler = mp_vector_at(b, Handler, i);
    xxx_handler(a, handler);
  }
}

ANN static void xxx_stmt_try(XXX *a, Stmt_Try b) {
  xxx_stmt(a, b->stmt);
  xxx_handler_list(a, b->handler);
}

ANN static void xxx_stmt_defer(XXX *a, Stmt_Defer b) {
  xxx_stmt(a, b->stmt);
}

ANN static void xxx_stmt_spread(XXX *a, Spread_Def b) {
  xxx_tag(a, &b->tag);
  xxx_id_list(a, b->list);
}
DECL_STMT_FUNC(xxx, void, XXX*)
ANN static void xxx_stmt(XXX *a, Stmt* b) {
  xxx_stmt_func[b->stmt_type](a, &b->d);
}

ANN static void xxx_arg(XXX *a, Arg *b) {
  xxx_variable(a, &b->var);
}

ANN static void xxx_arg_list(XXX *a, Arg_List b) {
  for(uint32_t i = 0; i < b->len; i++) {
    Arg *c = mp_vector_at(b, Arg, i);
    xxx_arg(a, c);
  }
}

ANN static void xxx_variable_list(XXX *a, Variable_List b) {
  for(uint32_t i = 0; i < b->len; i++) {
    Variable *c = mp_vector_at(b, Variable, i);
    xxx_variable(a, c);
  }
}

ANN static void xxx_stmt_list(XXX *a, Stmt_List b) {
  for(uint32_t i = 0; i < b->len; i++) {
    Stmt* c = mp_vector_at(b, Stmt, i);
    xxx_stmt(a, c);
  }
}

ANN static void xxx_func_base(XXX *a, Func_Base *b) {
  if(b->td) xxx_type_decl(a, b->td);
  xxx_tag(a, &b->tag);
  if(b->args) xxx_arg_list(a, b->args);
  if(b->tmpl) xxx_tmpl(a, b->tmpl);
}

ANN static void xxx_func_def(XXX *a, Func_Def b) {
  xxx_func_base(a, b->base);
  if(b->d.code) xxx_stmt_list(a, b->d.code);
  if(b->captures) xxx_captures(a, b->captures);
}

ANN static void xxx_class_def(XXX *a, Class_Def b) {
  xxx_type_def( a, &b->base);
  if(b->body) xxx_ast(a, b->body);
}

ANN static void xxx_trait_def(XXX *a, Trait_Def b) {
  if(b->body) xxx_ast(a, b->body);
}

ANN static void xxx_enumvalue(XXX *a, EnumValue *b) {
  xxx_tag(a, &b->tag);
  // gwint, set
}

ANN static void xxx_enum_list(XXX *a, EnumValue_List b) {
  for(uint32_t i = 0; i < b->len; i++) {
    EnumValue *c = mp_vector_at(b, EnumValue, i);
    xxx_enumvalue(a, c);
  }
}

ANN static void xxx_enum_def(XXX *a, Enum_Def b) {
  xxx_enum_list(a, b->list);
  xxx_tag(a, &b->tag);
}

ANN static void xxx_union_def(XXX *a, Union_Def b) {
  xxx_variable_list(a, b->l);
  xxx_tag(a, &b->tag);
  if(b->tmpl) xxx_tmpl(a, b->tmpl);
}

ANN static void xxx_fptr_def(XXX *a, Fptr_Def b) {
  xxx_func_base(a, b->base);
}

ANN static void xxx_type_def(XXX *a, Type_Def b) {
  if(b->ext) xxx_type_decl(a, b->ext);
  xxx_tag(a, &b->tag);
  if(b->tmpl) xxx_tmpl(a, b->tmpl);
}

ANN static void xxx_extend_def(XXX *a, Extend_Def b) {
  xxx_type_decl(a, b->td);
  xxx_id_list(a, b->traits);
}

ANN static void xxx_prim_def(XXX *a, Prim_Def b) {
  xxx_tag(a, &b->tag);
}

DECL_SECTION_FUNC(xxx, void, XXX*)
ANN static void xxx_section(XXX *a, Section *b) {
  xxx_section_func[b->section_type](a, *(void**)&b->d);
}

ANN static void xxx_ast(XXX *a, Ast b) {
  for(uint32_t i = 0; i < b->len; i++) {
    Section *c = mp_vector_at(b, Section, i);
    xxx_section(a, c);
  }
}

int main(int argc, char **argv) {
  MemPool mp = mempool_ini(sizeof(Exp));
  SymTable* st = new_symbol_table(mp, 65347);
  struct PPArg_ ppa = {};
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
