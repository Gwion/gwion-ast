TARGET?=
GWION_PACKAGE=gwion_ast

ifneq (,$(findstring -DGWION_PACKAGE,$(MAKEFLAGS)))
CFLAGS += -DGWION_PACKAGE='"${GWION_PACKAGE}"'
endif

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
	@$(info linking $@)
	${AR} ${AR_OPT}

grammarlib:
	@make -s TARGET=grammar _$@

toollib:
	@M4FLAGS="-DTOOL_MODE" CFLAGS='-DTOOL_MODE ' make -s TARGET=tool _$@

_${TARGET}lib: ${TARGET}
	@CFLAGS="${CFLAGS} -I${TARGET}" make -s libgwion_${TARGET}.a

${TARGET}:
	@mkdir $@

libgwion_${TARGET}.a: ${${TARGET}_obj}
	@$(info linking $@)
	${AR} ${AR_OPT}

${TARGET}/lexer.c: ${TARGET}/gwion.l
	$(info generating lexer)
	@${LEX} --header-file=${TARGET}/lexer.h -o $@ $<

${TARGET}/parser.c: ${TARGET}/gwion.y
	$(info generating parser)
	@${YACC} --defines=${TARGET}/parser.h -o $@ $<

${TARGET}/gwion.l: m4/gwion.lm4
	@m4 -s ${M4FLAGS} $< > $@

${TARGET}/gwion.y: m4/gwion.ym4
	@m4 -s ${M4FLAGS} $< > $@

${TARGET}/dynop.c:
	@cp m4/dynop.c ${TARGET}

${TARGET}/pparg.c:
	@cp m4/pparg.c ${TARGET}

${TARGET}/scanner.c:
	@cp m4/scanner.c ${TARGET}

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
