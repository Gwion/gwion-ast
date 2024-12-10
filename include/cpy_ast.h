/** @file: cpy_ast.h
@brief copy ast nodes
*/

#ifndef __CPY_AST
#define __CPY_AST
ANN Exp*       cpy_exp(MemPool, const Exp*);
ANN Array_Sub cpy_array_sub(MemPool, const Array_Sub);
ANN ArgList*  cpy_arg_list(MemPool, const ArgList*);
ANN SpecializedList   *cpy_specialized_list(MemPool, const SpecializedList*);
ANN Type_Decl *        cpy_type_decl(MemPool, const Type_Decl *);
ANN VariableList      *cpy_variable_list(MemPool, const VariableList*);
ANN Func_Def           cpy_func_def(MemPool, const Func_Def);
ANN Func_Def           cpy_func_def(MemPool, const Func_Def);
ANN struct Func_Base_ *cpy_func_base(MemPool, const struct Func_Base_ *);
ANN Class_Def          cpy_class_def(MemPool, const Class_Def);
ANN Extend_Def         cpy_extend_def(MemPool, const Extend_Def);
ANN Fptr_Def           cpy_fptr_def(MemPool p, const Fptr_Def src);
ANN Union_Def          cpy_union_def(MemPool, const Union_Def);
ANN TmplArgList       *cpy_tmplarg_list(MemPool p, const TmplArgList *src);
ANN TagList*            cpy_taglist(MemPool p, const TagList *src);
ANN Tmpl *cpy_tmpl(MemPool p, const Tmpl *src);
ANN Ast cpy_ast(MemPool p, const Ast src);
ANN Stmt*   cpy_stmt3(MemPool p, const Stmt*);
#endif
