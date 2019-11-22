#ifndef __BISON_COMPAT
#define __BISON_COMPAT

#define YYLTYPE struct loc_t

#define YYLTYPE_IS_DECLARED
  #define YY_USER_ACTION                                     \
    yylloc->first.line = yylloc->last.line;                  \
    yylloc->first.column = get_currpos(yyscanner) ;          \
    if (yylloc->last.line == get_currline(yyscanner))        \
      yylloc->last.column = get_currpos(yyscanner) + yyleng; \
    else {                                                   \
      yylloc->last.line = get_currline(yyscanner);           \
      yylloc->last.column = get_currpos(yyscanner);          \
    }

  #define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first.line   = YYRHSLOC (Rhs, 1).first.line;        \
          (Current).first.column = YYRHSLOC (Rhs, 1).first.column;      \
          (Current).last.line    = YYRHSLOC (Rhs, N).last.line;         \
          (Current).last.column  = YYRHSLOC (Rhs, N).last.column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first.line   = (Current).last.line   =              \
            YYRHSLOC (Rhs, 0).last.line;                                \
          (Current).first.column = (Current).last.column =              \
            YYRHSLOC (Rhs, 0).last.column;                              \
        }                                                               \
    while (0)
#endif
