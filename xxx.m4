#include "defs.h"
#include "gwion_util.h"
#include "gwion_ast.h"

typedef struct {

} XXX;
ifdef(`BOOL',
`
#define CHECK_RET(a, ret) \
do {                      \
  if(!(a))                \
    ret = false;          \
} while(0)
')
FUNC_DEF(exp,,Exp *);
FUNC_DEF(stmt,,Stmt *);
FUNC_DEF(stmt_list,,StmtList *);
FUNC_DEF(type_decl,,Type_Decl *);
FUNC_DEF(func_def,,Func_Def);

FUNC_DEF(ast,,Ast);

FUNC_INI(symbol,` NUSED',Symbol,` NUSED')
FUNC_END

FUNC_INI(tag,,Tag *)
  if(b->sym)
    _CHECK_RET(symbol, b->sym)
FUNC_END

FUNC_INI(array_sub,,Array_Sub)
  if(b->exp)
    _CHECK_RET(exp, b->exp)
FUNC_END

FUNC_INI(taglist,,TagList *)
  LOOP(Tag *,tag)
FUNC_END

FUNC_INI(specialized,,Specialized *)
  _CHECK_RET(tag, &b->tag)
  if(b->td)
    _CHECK_RET(type_decl, b->td)
  if(b->traits)
    _CHECK_RET(taglist, b->traits)
FUNC_END

FUNC_INI(specialized_list,,SpecializedList *)
  LOOP(Specialized*,specialized)
FUNC_END

FUNC_INI(tmplarg,,TmplArg *)
  if (b->type == tmplarg_td)
    _CHECK_RET(type_decl, b->d.td)
  else
    _CHECK_RET(exp, b->d.exp)
FUNC_END

FUNC_INI(tmplarg_list,,TmplArgList *)
  LOOP(TmplArg*,tmplarg)
FUNC_END

FUNC_INI(tmpl,,Tmpl *)
  if(b->list)
    _CHECK_RET(specialized_list, b->list)
  if(b->call)
    _CHECK_RET(tmplarg_list, b->call)
FUNC_END

FUNC_INI(range,,Range *)
  if(b->start)
    _CHECK_RET(exp, b->start)
  if(b->end)
    _CHECK_RET(exp , b->end)
FUNC_END

FUNC_INI(type_decl,,Type_Decl *)
  _CHECK_RET(tag, &b->tag)
  if(b->array)
    _CHECK_RET(array_sub, b->array)
  if(b->types)
    _CHECK_RET(tmplarg_list, b->types)
FUNC_END

FUNC_INI(prim_id,,Symbol *)
  _CHECK_RET(symbol, *b)
FUNC_END

FUNC_INI(prim_num,` NUSED',m_uint *,` NUSED')
FUNC_END

FUNC_INI(prim_float,` NUSED',m_float *,` NUSED')
FUNC_END

FUNC_INI(prim_str,` NUSED',m_str *,` NUSED')
FUNC_END

FUNC_INI(prim_array,,Array_Sub *)
  _CHECK_RET(array_sub, *b)
FUNC_END

FUNC_INI(prim_range,,Range **)
  _CHECK_RET(range, *b)
FUNC_END

FUNC_INI(prim_dict,,Exp **)
  _CHECK_RET(exp, *b)
FUNC_END

FUNC_INI(prim_hack,,Exp **)
  _CHECK_RET(exp, *b)
FUNC_END

FUNC_INI(prim_interp,,Exp **)
  _CHECK_RET(exp, *b)
FUNC_END

FUNC_INI(prim_char,` NUSED',m_str *,` NUSED')
FUNC_END

FUNC_INI(prim_nil,` NUSED',bool *,` NUSED')
FUNC_END

FUNC_INI(prim_perform,,Symbol*)
  _CHECK_RET(symbol, *b)
FUNC_END

FUNC_INI(prim_locale,,Symbol*)
  _CHECK_RET(symbol, *b)
FUNC_END

DECL_FUNCS(PRIM)
FUNC_INI(prim,,Exp_Primary*)
  _CHECK_RET(prim_func[b->prim_type], &b->d)
FUNC_END

FUNC_INI(var_decl,,Var_Decl*)
  _CHECK_RET(tag, &b->tag)
FUNC_END

FUNC_INI(variable,,Variable*)
  if(b->td)
    _CHECK_RET(type_decl, b->td)
  _CHECK_RET(var_decl, &b->vd)
FUNC_END

FUNC_INI(exp_decl,,Exp_Decl*)
  if(b->args)
    _CHECK_RET(exp, b->args)
  _CHECK_RET(variable, &b->var)
FUNC_END

FUNC_INI(exp_binary,,Exp_Binary*)
  _CHECK_RET(exp, b->lhs)
  _CHECK_RET(exp, b->rhs)
  _CHECK_RET(symbol, b->op)
FUNC_END

FUNC_INI(capture,,Capture*)
  _CHECK_RET(tag, &b->var.tag)
FUNC_END

FUNC_INI(captures,,CaptureList*)
  LOOP(Capture*,capture)
FUNC_END

FUNC_INI(exp_unary,,Exp_Unary*)
  _CHECK_RET(symbol, b->op)
  const enum unary_type type = b->unary_type;
  if(type == unary_exp)
    _CHECK_RET(exp, b->exp)
  else if(type == unary_td)
    _CHECK_RET(type_decl, b->ctor.td)
  else {
    _CHECK_RET(stmt_list, b->code)
    if(b->captures)
      _CHECK_RET(captures, b->captures)
  }
FUNC_END

FUNC_INI(exp_cast,,Exp_Cast*)
  _CHECK_RET(type_decl, b->td)
  _CHECK_RET(exp, b->exp)
FUNC_END

FUNC_INI(exp_post,,Exp_Postfix*)
  _CHECK_RET(symbol, b->op)
  _CHECK_RET(exp, b->exp)
FUNC_END

FUNC_INI(exp_call,,Exp_Call*)
  _CHECK_RET(exp, b->func)
  if(b->args)
    _CHECK_RET(exp, b->args)
  if(b->tmpl)
    _CHECK_RET(tmpl, b->tmpl)
FUNC_END

FUNC_INI(exp_array,,Exp_Array*)
  _CHECK_RET(exp, b->base)
  _CHECK_RET(array_sub, b->array)
FUNC_END

FUNC_INI(exp_slice,,Exp_Slice*)
  _CHECK_RET(exp, b->base)
  _CHECK_RET(range, b->range)
FUNC_END

FUNC_INI(exp_if,,Exp_If*)
  _CHECK_RET(exp, b->cond)
  if(b->if_exp)
    _CHECK_RET(exp, b->if_exp)
  _CHECK_RET(exp, b->else_exp)
FUNC_END

FUNC_INI(exp_dot,,Exp_Dot*)
  _CHECK_RET(exp, b->base)
  _CHECK_RET(var_decl, &b->var)
FUNC_END

FUNC_INI(exp_lambda,,Exp_Lambda*)
  _CHECK_RET(func_def, b->def)
FUNC_END

FUNC_INI(exp_td,,Type_Decl*)
  _CHECK_RET(type_decl, b)
FUNC_END

FUNC_INI(exp_named,,Exp_Named*)
  _CHECK_RET(exp, b->exp)
FUNC_END

DECL_FUNCS(EXP)
FUNC_INI(exp,,Exp*)
  POISON(xxx(exp_func[b->exp_type], &b->d))
  if(b->next)
    _CHECK_RET(exp, b ->next)
FUNC_END

FUNC_INI(stmt_exp,,Stmt_Exp)
  if(b->val)
  _CHECK_RET(exp,  b->val)
FUNC_END

FUNC_INI(stmt_while,,Stmt_Flow)
  _CHECK_RET(exp, b->cond)
  _CHECK_RET(stmt, b->body)
FUNC_END

FUNC_INI(stmt_until,,Stmt_Flow)
  _CHECK_RET(exp, b->cond)
  _CHECK_RET(stmt, b->body)
FUNC_END

FUNC_INI(stmt_for,,Stmt_For)
  _CHECK_RET(stmt, b->c1)
  if(b->c2)
    _CHECK_RET(stmt, b->c2)
  if(b->c3)
    _CHECK_RET(exp, b->c3)
  _CHECK_RET(stmt, b->body)
FUNC_END

FUNC_INI(stmt_each,,Stmt_Each)
  if(b->idx.tag.sym)
    _CHECK_RET(var_decl, &b->idx)
  _CHECK_RET(var_decl, &b->var)
  _CHECK_RET(exp, b->exp)
  _CHECK_RET(stmt, b->body)
FUNC_END

FUNC_INI(stmt_loop,,Stmt_Loop)
  if(b->idx.tag.sym)
    _CHECK_RET(var_decl, &b->idx)
  _CHECK_RET(exp,  b->cond)
  _CHECK_RET(stmt, b->body)
FUNC_END

FUNC_INI(stmt_if,,Stmt_If)
  _CHECK_RET(exp,  b->cond)
  _CHECK_RET(stmt, b->if_body)
  if(b->else_body)
    _CHECK_RET(stmt, b->else_body)
FUNC_END

FUNC_INI(stmt_code,,Stmt_Code)
  if(b->stmt_list)
  _CHECK_RET(stmt_list, b->stmt_list)
FUNC_END

FUNC_INI(stmt_index,` NUSED',Stmt_Index,` NUSED')
FUNC_END

FUNC_INI(stmt_break,,Stmt_Index)
  _CHECK_RET(stmt_index, b)
FUNC_END

FUNC_INI(stmt_continue,,Stmt_Index)
  _CHECK_RET(stmt_index, b)
FUNC_END

FUNC_INI(stmt_return,,Stmt_Exp)
  if(b->val)
  _CHECK_RET(exp, b-> val)
FUNC_END

FUNC_INI(stmt_case,,Stmt_Match)
  _CHECK_RET(exp, b->cond)
  _CHECK_RET(stmt_list, b->list)
  if(b->when)
    _CHECK_RET(exp, b->when)
FUNC_END

FUNC_INI(case_list,,StmtList*)
  LOOP(Stmt*,stmt)
FUNC_END

FUNC_INI(stmt_match,,Stmt_Match)
  _CHECK_RET(exp, b->cond)
  _CHECK_RET(case_list, b->list)
  if(b->where)
    _CHECK_RET(stmt, b->where)
FUNC_END

FUNC_INI(stmt_pp,` NUSED',Stmt_PP,` NUSED')
FUNC_END

FUNC_INI(stmt_retry,` NUSED',Stmt_Exp,` NUSED')
FUNC_END

FUNC_INI(handler,,Handler*)
  _CHECK_RET(tag, &b->tag)
  _CHECK_RET(stmt, b->stmt)
FUNC_END

FUNC_INI(handler_list,,HandlerList*)
  LOOP(Handler*,handler)
FUNC_END

FUNC_INI(stmt_try,,Stmt_Try)
  _CHECK_RET(stmt, b->stmt)
  _CHECK_RET(handler_list, b->handler)
FUNC_END

FUNC_INI(stmt_defer,,Stmt_Defer)
  _CHECK_RET(stmt, b->stmt)
FUNC_END

FUNC_INI(stmt_spread,,Spread_Def)
  _CHECK_RET(tag, &b->tag)
  _CHECK_RET(taglist, b->list)
FUNC_END

FUNC_INI(stmt_using,,Stmt_Using)
  if(b->tag.sym) {
    _CHECK_RET(tag, &b->tag)
    _CHECK_RET(exp, b->d.exp)
  } else
    _CHECK_RET(type_decl, b->d.td)
FUNC_END

FUNC_INI(usingstmt,,UsingStmt*)
  _CHECK_RET(tag, &b->tag)
  if(b->tag.sym)
    _CHECK_RET(exp, b->d.exp)
  else
    _CHECK_RET(type_decl, b->d.td)
FUNC_END

FUNC_INI(usingstmtlist,,UsingStmtList*)
  LOOP(UsingStmt*,usingstmt)
FUNC_END

FUNC_INI(stmt_import,,Stmt_Import)
  _CHECK_RET(tag, &b->tag)
  if(b->selection)
    _CHECK_RET(usingstmtlist, b->selection)
FUNC_END

DECL_FUNCS(STMT)
FUNC_INI(stmt,,Stmt*)
  POISON(xxx(stmt_func[b->stmt_type], &b->d))
FUNC_END

FUNC_INI(arg,,Arg*)
  _CHECK_RET(variable, &b->var)
FUNC_END

FUNC_INI(arg_list,,ArgList*)
  LOOP(Arg *,arg)
FUNC_END

FUNC_INI(variablelist,,VariableList*)
  LOOP(Variable *,variable)
FUNC_END

FUNC_INI(stmt_list,,StmtList*)
  LOOP(Stmt *,stmt)
FUNC_END

FUNC_INI(func_base,,Func_Base*)
  if(b->td)
    _CHECK_RET(type_decl, b->td)
  _CHECK_RET(tag, &b->tag)
  if(b->args)
    _CHECK_RET(arg_list, b->args)
  if(b->tmpl)
    _CHECK_RET(tmpl, b->tmpl)
FUNC_END

FUNC_INI(func_def,,Func_Def)
  _CHECK_RET(func_base, b->base)
  if(b->d.code)
    _CHECK_RET(stmt_list, b->d.code)
  if(b->captures)
    _CHECK_RET(captures, b->captures)
FUNC_END

FUNC_INI(type_def,,Type_Def)
  if(b->ext)
    _CHECK_RET(type_decl, b->ext)
  _CHECK_RET(tag, &b->tag)
  if(b->tmpl)
    _CHECK_RET(tmpl, b->tmpl)
FUNC_END

FUNC_INI(class_def,,Class_Def)
  _CHECK_RET(type_def,&b->base)
  if(b->body)
    _CHECK_RET(ast, b->body)
FUNC_END

FUNC_INI(trait_def,,Trait_Def)
  if(b->body)
  _CHECK_RET(ast, b->body)
FUNC_END

FUNC_INI(enumvalue,,EnumValue*)
  _CHECK_RET(tag, &b->tag)
FUNC_END

FUNC_INI(enum_list,,EnumValueList*)
  LOOP(EnumValue*,enumvalue)
FUNC_END

FUNC_INI(enum_def,,Enum_Def)
  _CHECK_RET(enum_list, b->list)
  _CHECK_RET(tag, &b->tag)
FUNC_END

FUNC_INI(union_def,,Union_Def)
  _CHECK_RET(variablelist, b->l)
  _CHECK_RET(tag, &b->tag)
  if(b->tmpl)
    _CHECK_RET(tmpl, b->tmpl)
FUNC_END

FUNC_INI(fptr_def,,Fptr_Def)
  _CHECK_RET(func_base, b->base)
FUNC_END

FUNC_INI(extend_def,,Extend_Def)
  _CHECK_RET(type_decl, b->td)
  _CHECK_RET(taglist, b->traits)
FUNC_END

FUNC_INI(prim_def,,Prim_Def)
  _CHECK_RET(tag, &b->tag)
FUNC_END

DECL_FUNCS(SECTION)
FUNC_INI(section,,Section*)
  POISON(xxx(section_func[b->section_type], *(void**)&b->d))
FUNC_END

FUNC_INI(ast,,Ast)
  LOOP(Section*,section)
FUNC_END
ifdef(`STANDALONE',`
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
')dnl
