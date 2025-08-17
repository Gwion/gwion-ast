divert(-1)
define(`xxx', name`_'$1(a, $2))
define(`RET_TYPE', ifdef(`BOOL', `bool', `void'))
define(`RET_INI', ifdef(`BOOL', `{
  bool ret = true;', `{'))
define(`FUNC_END', ifdef(`BOOL',
`  return ret;
}', `}'))
define(`POISON_BOOL',ret = !b->poison
    ? $1
    : false;)
define(`POISON_VOID', `if(!b->poison)' $1)
define(`HANDLE_POISON', ifdef(`BOOL', POISON_BOOL($1), POISON_VOID($1)))
define(`CURE_BOOL', `CHECK_RET('$1`, ret);')
define(`CURE_VOID',$1)
define(`HANDLE_CURE', ifdef(`BOOL', CURE_BOOL($1), CURE_VOID($1)))
define(`POISON', ifdef(`USE_POISON', HANDLE_POISON($1), HANDLE_CURE($1)))
define(`MOD', ifdef(`USE_CONST', `const '$1,$1))
define(`_CHECK_RET', ifdef(`BOOL', `CHECK_RET('name`_'$1`(a, '$2`), ret);',name`_'$1(a, $2)))
define(`STATIC',ifdef(`USE_STATIC',`static',`'))
define(`FUNC_INI',ANN STATIC RET_TYPE name`'_$1(XXX `*a'$2`, '$3` b'$4) RET_INI))
define(`FUNC_DEF',ANN STATIC RET_TYPE name`'_$1(XXX *a$2, $3 b$4)))
define(`LOOP',for(uint32_t i = 0; i < b->len; i++) {
    MOD($1) c = $2list_ptr_at(b, i);
    CHECK_RET(name`'_$2(a, c), ret);
  })
define(`DECL_FUNCS',`DECL_'$1`_FUNC('name`, 'RET_TYPE`, 'XXX*`, 'MOD`)')
divert(0)dnl
include(`xxx.m4')
