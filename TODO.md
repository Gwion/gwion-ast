clean test in fptr_def

change OPERATOR SYNTAX

investigate ;;;;;;;

YACC="~/src/git/bison/src/bison -Wcex" make 2>log

## resolve a few conflicts

+%left "]"
+%right "["
+
+//%nonassoc DECL_COMMA
+//%nonassoc EXP_COMMA
+//%right GOTO_COLON
+//%left "{"
+//%right "}"
+
+%nonassoc ";"
+%nonassoc INCLUDE
