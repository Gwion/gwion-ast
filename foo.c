#include "gwion_util.h"
#include "gwion_ast.h"
#include "foo.h"

ANN void foo_symbol(Foo *a, Symbol b) {
}

ANN void foo_array_sub(Foo *a, Array_Sub b) {
  if(b->exp)
    foo_exp(a, b->exp);
}

ANN void foo_id_list(Foo *a, ID_List b) {
  for(uint32_t i = 0; i < b->len; i++) {
    Symbol c = *mp_vector_at(b, Symbol, i);
    foo_symbol(a, c);
  }
}

ANN void foo_specialized(Foo *a, Specialized *b) {
  foo_symbol(a, b->xid);
  if(b->traits)
    foo_id_list(a, b->traits);
}

ANN void foo_specialized_list(Foo *a, Specialized_List b) {
  for(uint32_t i = 0; i < b->len; i++) {
    Specialized * c = mp_vector_at(b, Specialized  , i);
    foo_specialized(a, c);
  }
}

ANN void foo_type_list(Foo *a, Type_List b) {
  for(uint32_t i = 0; i < b->len; i++) {
    Type_Decl * c = mp_vector_at(b, Type_Decl  , i);
    foo_type_decl(a, c);
  }
}

ANN void foo_tmpl(Foo *a, Tmpl *b) {
  if(b->list)
    foo_id_list(a, b->list);
  if(b->call)
    foo_type_list(a, b->call);
}

ANN void foo_range(Foo *a, Range *b) {
  if(b->start)
    foo_exp(a, b->start);
  if(b->end)
    foo_exp(a, b->end);
}

ANN void foo_type_decl(Foo *a, Type_Decl *b) {
  foo_symbol(a, b->xid);
  if(b->array)
    foo_array_sub(a, b->array);
  if(b->types)
    foo_type_list(a, b->types);
}

ANN void foo_prim_id(Foo *a, Symbol *b) {
  foo_symbol(a, *b);
}

ANN void foo_prim_num(Foo *a, m_uint *b) {
}

ANN void foo_prim_float(Foo *a, m_float *b) {
}

ANN void foo_prim_str(Foo *a, m_str *b) {
}

ANN void foo_prim_array(Foo *a, Array_Sub *b) {
  foo_array_sub(a, *b);
}

ANN void foo_prim_range(Foo *a, Range* *b) {
  foo_range(a, *b);
}

ANN void foo_prim_dict(Foo *a, Exp *b) {
  foo_exp(a, *b);
}

ANN void foo_prim_hack(Foo *a, Exp *b) {
  foo_exp(a, *b);
}

ANN void foo_prim_typeof(Foo *a, Exp *b) {
  foo_exp(a, *b);
}

ANN void foo_prim_interp(Foo *a, Exp *b) {
  foo_exp(a, *b);
}

ANN void foo_prim_char(Foo *a, m_str *b) {
}

ANN void foo_prim_nil(Foo *a, void *b) {
}

ANN void foo_prim_perform(Foo *a, Symbol *b) {
  foo_symbol(a, *b);
}

ANN void foo_prim_locale(Foo *a, Symbol *b) {
  foo_symbol(a, *b);
}

DECL_PRIM_FUNC(foo, void, Foo *)
ANN void foo_prim(Foo *a, Exp_Primary *b) {
  foo_prim_func[b->prim_type](a, &b->d);
}

ANN void foo_var_decl(Foo *a, Var_Decl *b) {
  if(b->xid)
    foo_symbol(a, b->xid);
}

ANN void foo_exp_decl(Foo *a, Exp_Decl *b) {
  if(b->td)
    foo_type_decl(a, b->td);
  foo_var_decl(a, &b->vd);
}

ANN void foo_exp_binary(Foo *a, Exp_Binary *b) {
  foo_exp(a, b->lhs);
  foo_exp(a, b->rhs);
  foo_symbol(a, b->op);
}

ANN void foo_exp_unary(Foo *a, Exp_Unary *b) {
  foo_symbol(a, b->op);
  if(b->exp)
    foo_exp(a, b->exp);
  if(b->ctor.td)
    foo_type_decl(a, b->ctor.td);
  if(b->code)
    foo_stmt_list(a, b->code);
}

ANN void foo_exp_cast(Foo *a, Exp_Cast *b) {
  foo_type_decl(a, b->td);
  foo_exp(a, b->exp);
}

ANN void foo_exp_post(Foo *a, Exp_Postfix *b) {
  foo_symbol(a, b->op);
  foo_exp(a, b->exp);
}

ANN void foo_exp_call(Foo *a, Exp_Call *b) {
  foo_exp(a, b->func);
  if(b->args)
    foo_exp(a, b->args);
  if(b->tmpl)
    foo_tmpl(a, b->tmpl);
}

ANN void foo_exp_array(Foo *a, Exp_Array *b) {
  foo_exp(a, b->base);
  foo_array_sub(a, b->array);
}

ANN void foo_exp_slice(Foo *a, Exp_Slice *b) {
  foo_exp(a, b->base);
  foo_range(a, b->range);
}

ANN void foo_exp_if(Foo *a, Exp_If *b) {
  foo_exp(a, b->cond);
  if(b->if_exp)
    foo_exp(a, b->if_exp);
  foo_exp(a, b->else_exp);
}

ANN void foo_exp_dot(Foo *a, Exp_Dot *b) {
  foo_exp(a, b->base);
  foo_symbol(a, b->xid);
}

ANN void foo_exp_lambda(Foo *a, Exp_Lambda *b) {
  foo_func_def(a, b->def);
}

ANN void foo_exp_td(Foo *a, Type_Decl *b) {
  foo_type_decl(a, b);
}

DECL_EXP_FUNC(foo, void, Foo*)
ANN void foo_exp(Foo *a, Exp b) {
  foo_exp_func[b->exp_type](a, &b->d);
  if(b->next)
    foo_exp(a, b->next);
}

ANN void foo_stmt_exp(Foo *a, Stmt_Exp b) {
  if(b->val)
    foo_exp(a, b->val);
}

ANN void foo_stmt_while(Foo *a, Stmt_Flow b) {
  foo_exp(a, b->cond);
  foo_stmt(a, b->body);
}

ANN void foo_stmt_until(Foo *a, Stmt_Flow b) {
  foo_exp(a, b->cond);
  foo_stmt(a, b->body);
}

ANN void foo_stmt_for(Foo *a, Stmt_For b) {
  foo_stmt(a, b->c1);
  if(b->c2)
    foo_stmt(a, b->c2);
  if(b->c3)
    foo_exp(a, b->c3);
  foo_stmt(a, b->body);
}

ANN void foo_stmt_each(Foo *a, Stmt_Each b) {
  foo_symbol(a, b->sym);
  foo_exp(a, b->exp);
  foo_stmt(a, b->body);
}

ANN void foo_stmt_loop(Foo *a, Stmt_Loop b) {
  foo_exp(a, b->cond);
  foo_stmt(a, b->body);
}

ANN void foo_stmt_if(Foo *a, Stmt_If b) {
  foo_exp(a, b->cond);
  foo_stmt(a, b->if_body);
  if(b->else_body)
    foo_stmt(a, b->else_body);
}

ANN void foo_stmt_code(Foo *a, Stmt_Code b) {
  if(b->stmt_list)
    foo_stmt_list(a, b->stmt_list);
}

ANN void foo_stmt_break(Foo *a, Stmt_Exp b) {
}

ANN void foo_stmt_continue(Foo *a, Stmt_Exp b) {
}

ANN void foo_stmt_return(Foo *a, Stmt_Exp b) {
  if(b->val)
    foo_exp(a, b->val);
}

ANN void foo_case_list(Foo *a, Stmt_List b) {
  for(uint32_t i = 0; i < b->len; i++) {
    Stmt c = mp_vector_at(b, struct Stmt_, i);
    foo_stmt_case(a, &c->d.stmt_match);
  }
}

ANN void foo_stmt_match(Foo *a, Stmt_Match b) {
  foo_exp(a, b->cond);
  foo_case_list(a, b->list);
  if(b->where)
    foo_stmt(a, b->where);
}

ANN void foo_stmt_case(Foo *a, Stmt_Match b) {
  foo_exp(a, b->cond);
  foo_stmt_list(a, b->list);
  if(b->when)
    foo_exp(a, b->when);
}

ANN void foo_stmt_index(Foo *a, Stmt_Index b) {
}

ANN void foo_stmt_pp(Foo *a, Stmt_PP b) {
}

ANN void foo_stmt_retry(Foo *a, Stmt_Exp b) {
}

ANN void foo_stmt_try(Foo *a, Stmt_Try b) {
  foo_stmt(a, b->stmt);
}

ANN void foo_stmt_defer(Foo *a, Stmt_Defer b) {
  foo_stmt(a, b->stmt);
}

ANN void foo_stmt_spread(Foo *a, Spread_Def b) {
  foo_symbol(a, b->xid);
  foo_id_list(a, b->list);
}
DECL_STMT_FUNC(foo, void, Foo*)
ANN void foo_stmt(Foo *a, Stmt b) {
  foo_stmt_func[b->stmt_type](a, &b->d);
}

ANN void foo_arg(Foo *a, Arg *b) {
  if(b->td)
    foo_type_decl(a, b->td);
  foo_var_decl(a, &b->var_decl);
}

ANN void foo_arg_list(Foo *a, Arg_List b) {
  for(uint32_t i = 0; i < b->len; i++) {
    Arg *c = mp_vector_at(b, Arg, i);
    foo_arg(a, c);
  }
}

ANN void foo_union_list(Foo *a, Union_List b) {
  for(uint32_t i = 0; i < b->len; i++) {
    Union_Member *c = mp_vector_at(b, Union_Member, i);
    foo_type_decl(a, c->td);
    foo_symbol(a, c->vd.xid);
  }
}

ANN void foo_stmt_list(Foo *a, Stmt_List b) {
  for(uint32_t i = 0; i < b->len; i++) {
    Stmt c = mp_vector_at(b, struct Stmt_, i);
    foo_stmt(a, c);
  }
}

ANN void foo_func_base(Foo *a, Func_Base *b) {
  if(b->td)
    foo_type_decl(a, b->td);
  foo_symbol(a, b->xid);
  if(b->args)
    foo_arg_list(a, b->args);
  if(b->tmpl)
    foo_tmpl(a, b->tmpl);
}

ANN void foo_func_def(Foo *a, Func_Def b) {
  foo_func_base(a, b->base);
  if(b->d.code)
    foo_stmt_list(a, b->d.code);
}

ANN void foo_class_def(Foo *a, Class_Def b) {
  foo_type_def(a, &b->base);
  if(b->body)
    foo_ast(a, b->body);
}

ANN void foo_trait_def(Foo *a, Trait_Def b) {
  if(b->body)
    foo_ast(a, b->body);
}

ANN void foo_enum_def(Foo *a, Enum_Def b) {
  foo_id_list(a, b->list);
  foo_symbol(a, b->xid);
}

ANN void foo_union_def(Foo *a, Union_Def b) {
  foo_union_list(a, b->l);
  if(b->xid)
    foo_symbol(a, b->xid);
  if(b->tmpl)
    foo_tmpl(a, b->tmpl);
}

ANN void foo_fptr_def(Foo *a, Fptr_Def b) {
  foo_func_base(a, b->base);
}

ANN void foo_type_def(Foo *a, Type_Def b) {
  if(b->ext)
    foo_type_decl(a, b->ext);
  foo_symbol(a, b->xid);
  if(b->tmpl)
    foo_tmpl(a, b->tmpl);
}

ANN void foo_extend_def(Foo *a, Extend_Def b) {
  foo_type_decl(a, b->td);
  foo_id_list(a, b->traits);
}

ANN void foo_prim_def(Foo *a, Prim_Def b) {
  foo_symbol(a, b->name);
}

DECL_SECTION_FUNC(foo, void, Foo*)
ANN void foo_section(Foo *a, Section *b) {
  foo_section_func[b->section_type](a, *(void**)&b->d);
}

ANN void foo_ast(Foo *a, Ast b) {
  for(uint32_t i = 0; i < b->len; i++) {
    Section *c = mp_vector_at(b, Section, i);
    foo_section(a, c);
  }
}

int main(int argc, char **argv) {
  MemPool mp = mempool_ini(sizeof(struct Exp_));
  SymTable* st = new_symbol_table(mp, 65347);
  struct PPArg_ ppa = {};
  Foo foo = {};
  pparg_ini(mp, &ppa);
  for(int i = 1; i < argc; ++i) {
    FILE* file = fopen(argv[i], "r");
    if(!file)
      continue;
    struct AstGetter_ arg = { argv[i], file, st , .ppa=&ppa };
    const Ast ast = parse(&arg);
    if(ast) {
      foo_ast(&foo, ast);
      free_ast(mp, ast);
    }
    fclose(file);
  }
  pparg_end(&ppa);
  free_symbols(st);
  mempool_end(mp);
}
