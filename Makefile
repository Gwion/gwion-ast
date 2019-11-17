GWION_PACKAGE=gwion_ast
CFLAGS += -DGWION_PACKAGE='"${GWION_PACKAGE}"'

ifeq (,$(wildcard config.mk))
$(shell cp config.mk.orig config.mk)
endif
include config.mk
include ${UTIL_DIR}/config.mk

base_src    := $(wildcard src/*.c)
grammar_src := grammar/lexer.c grammar/parser.c grammar/dynop.c grammar/pparg.c grammar/scanner.c
tool_src    := tool/lexer.c    tool/parser.c    tool/dynop.c    tool/pparg.c    tool/scanner.c

ifeq (${BUILD_ON_WINDOWS}, 1)
ifeq (${CC}, clang)
CFLAGS += -DYY_NO_UNISTD_H
endif
CFLAGS+=-DBUILD_ON_WINDOWS=1 -D_XOPEN_SOURCE=700
endif

base_obj    := $(base_src:.c=.o)
grammar_obj := $(grammar_src:.c=.o)
tool_obj    := $(tool_src:.c=.o)

CFLAGS += -Iinclude -D_GNU_SOURCE

# (parser) internationalization (linux only for now)
ifeq ($(shell uname), Linux)
-DYYENABLE_NLS=1 -DENABLE_NLS
endif

all: options-show grammarlib toollib libgwion_ast.a

options-show:
	@$(call _options)

libgwion_ast.a: ${base_obj}
	@$(info linkig $@)
	${AR} ${AR_OPT}

grammarlib: grammar libgwion_grammar.a
	@grep "\-Igrammar" <<< "${CFLAGS}" || CFLAGS="-DTOOL_MODE -Itool" make -s libgwion_grammar.a

grammar:
	@mkdir $@

libgwion_grammar.a: ${grammar_obj}
	@$(info linking $@)
	@${AR} ${AR_OPT}

toollib: tool
	@grep "\-Itool" <<< "${CFLAGS}" || CFLAGS="-DTOOL_MODE -Itool" make -s libgwion_tool.a

tool:
	@mkdir $@

libgwion_tool.a: ${tool_obj}
	@$(info linkig $@)
	${AR} ${AR_OPT}

grammar/parser.c: grammar/gwion.y
	$(info generating parser)
	@${YACC} -o grammar/parser.c --defines=grammar/parser.h grammar/gwion.y -Wno-yacc

grammar/lexer.c: grammar/gwion.l
	$(info generating lexer)
	@${LEX} --header-file=grammar/lexer.h -o grammar/lexer.c grammar/gwion.l

grammar/gwion.y: m4/gwion.ym4
	$(info meta-generating parser)
	m4 -s $< > $@

grammar/gwion.l: m4/gwion.lm4
	$(info meta-generating lexer)
#	m4 -s $< > $@
	m4 $< > $@

grammar/dynop.c:
	cp m4/dynop.c grammar

grammar/pparg.c:
	cp m4/pparg.c grammar

grammar/scanner.c:
	cp m4/scanner.c grammar

tool/lexer.c: tool/gwion.l
	$(info generating lexer)
	@${LEX} --header-file=tool/lexer.h -o $@ $<

tool/parser.c: tool/gwion.y
	$(info generating parser)
	@${YACC} --defines=tool/parser.h -Wno-yacc -o $@ $<

tool/gwion.l: m4/gwion.lm4
	m4 -s -DTOOL_MODE $< > $@

tool/gwion.y: m4/gwion.ym4
	m4 -s -DTOOL_MODE $< > $@

tool/dynop.c:
	cp m4/dynop.c tool

tool/pparg.c:
	cp m4/pparg.c tool

tool/scanner.c:
	cp m4/scanner.c tool

clean:
	$(info cleaning)
	@rm -f src/*.o *.a src/*.gcno src/*.gcda
	@rm -rf grammar tool

install: translation-install libgwion_ast.a
	$(info installing ${GWION_PACKAGE} in ${PREFIX})
	install libgwion_ast.a ${DESTDIR}/${PREFIX}/bin
	@mkdir -p ${DESTDIR}/${PREFIX}/include/gwion/ast
	@cp include/*.h ${DESTDIR}/${PREFIX}/include/gwion/ast

uninstall: translation-uninstall
	$(info uninstalling ${GWION_PACKAGE} from ${PREFIX})
	rm ${DESTDIR}/${PREFIX}/bin/lib${PACKAGE}.a
	@rm -rf ${PREFIX}/${PREFIX}/include/gwion/util

include $(wildcard .d/*.d)
include ${UTIL_DIR}/intl.mk
