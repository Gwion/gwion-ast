typedef struct {

} XXX;

ANN static void xxx_loc(XXX *a, loc_t b);
ANN static void xxx_symbol(XXX *a, Symbol b);
ANN static void xxx_tag(XXX *a, Tag *tag);
ANN static void xxx_array_sub(XXX *a, Array_Sub b);
ANN static void xxx_specialized(XXX *a, Specialized *b);
ANN static void xxx_tmpl(XXX *a, Tmpl *b);
ANN static void xxx_range(XXX *a, Range *b);
ANN static void xxx_type_decl(XXX *a, Type_Decl *b);
ANN static void xxx_prim_id(XXX *a, Symbol *b);
ANN static void xxx_prim_num(XXX *a, m_uint *b);
ANN static void xxx_prim_float(XXX *a, m_float *b);
ANN static void xxx_prim_str(XXX *a, m_str *b);
ANN static void xxx_prim_array(XXX *a, Array_Sub *b);
ANN static void xxx_prim_range(XXX *a, Range* *b);
ANN static void xxx_prim_dict(XXX *a, Exp* *b);
ANN static void xxx_prim_hack(XXX *a, Exp* *b);
ANN static void xxx_prim_interp(XXX *a, Exp* *b);
ANN static void xxx_prim_char(XXX *a, m_str *b);
ANN static void xxx_prim_nil(XXX *a, void *b);
ANN static void xxx_prim_perform(XXX *a, Symbol *b);
ANN static void xxx_prim(XXX *a, Exp_Primary *b);
ANN static void xxx_var_decl(XXX *a, Var_Decl *b);
ANN static void xxx_variable(XXX *a, Variable *b);
ANN static void xxx_exp_decl(XXX *a, Exp_Decl *b);
ANN static void xxx_exp_binary(XXX *a, Exp_Binary *b);
ANN static void xxx_exp_unary(XXX *a, Exp_Unary *b);
ANN static void xxx_exp_cast(XXX *a, Exp_Cast *b);
ANN static void xxx_exp_post(XXX *a, Exp_Postfix *b);
ANN static void xxx_exp_call(XXX *a, Exp_Call *b);
ANN static void xxx_exp_array(XXX *a, Exp_Array *b);
ANN static void xxx_exp_slice(XXX *a, Exp_Slice *b);
ANN static void xxx_exp_if(XXX *a, Exp_If *b);
ANN static void xxx_exp_dot(XXX *a, Exp_Dot *b);
ANN static void xxx_exp_lambda(XXX *a, Exp_Lambda *b);
ANN static void xxx_exp_td(XXX *a, Type_Decl *b);
ANN static void xxx_exp(XXX *a, Exp* b);
ANN static void xxx_stmt_exp(XXX *a, Stmt_Exp b);
ANN static void xxx_stmt_while(XXX *a, Stmt_Flow b);
ANN static void xxx_stmt_until(XXX *a, Stmt_Flow b);
ANN static void xxx_stmt_for(XXX *a, Stmt_For b);
ANN static void xxx_stmt_each(XXX *a, Stmt_Each b);
ANN static void xxx_stmt_loop(XXX *a, Stmt_Loop b);
ANN static void xxx_stmt_if(XXX *a, Stmt_If b);
ANN static void xxx_stmt_code(XXX *a, Stmt_Code b);
ANN static void xxx_stmt_break(XXX *a, Stmt_Index b);
ANN static void xxx_stmt_continue(XXX *a, Stmt_Index b);
ANN static void xxx_stmt_return(XXX *a, Stmt_Exp b);
ANN static void xxx_case_list(XXX *a, Stmt_List b);
ANN static void xxx_stmt_match(XXX *a, Stmt_Match b);
ANN static void xxx_stmt_case(XXX *a, Stmt_Match b);
ANN static void xxx_stmt_index(XXX *a, Stmt_Index b);
ANN static void xxx_stmt_pp(XXX *a, Stmt_PP b);
ANN static void xxx_stmt_retry(XXX *a, Stmt_Exp b);
ANN static void xxx_stmt_try(XXX *a, Stmt_Try b);
ANN static void xxx_stmt_defer(XXX *a, Stmt_Defer b);
ANN static void xxx_stmt(XXX *a, Stmt* b);
ANN static void xxx_arg(XXX *a, Arg *b);
ANN static void xxx_variable_list(XXX *a, Variable_List b);
ANN static void xxx_stmt_list(XXX *a, Stmt_List b);
ANN static void xxx_func_base(XXX *a, Func_Base *b);
ANN static void xxx_func_def(XXX *a, Func_Def b);
ANN static void xxx_class_def(XXX *a, Class_Def b);
ANN static void xxx_trait_def(XXX *a, Trait_Def b);
ANN static void xxx_enum_def(XXX *a, Enum_Def b);
ANN static void xxx_union_def(XXX *a, Union_Def b);
ANN static void xxx_fptr_def(XXX *a, Fptr_Def b);
ANN static void xxx_type_def(XXX *a, Type_Def b);
ANN static void xxx_extend_def(XXX *a, Extend_Def b);
ANN static void xxx_section(XXX *a, Section *b);
ANN static void xxx_ast(XXX *a, Ast b);
