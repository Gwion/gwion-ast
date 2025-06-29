GWION_PACKAGE=gwion_ast

ifeq (,$(wildcard config.mk))
$(shell cp config.mk.orig config.mk)
endif
include config.mk
include ${UTIL_DIR}/config.mk

src := $(wildcard src/*.c)

ifeq (${BUILD_ON_WINDOWS}, 1)
ifeq (${CC}, clang)
CFLAGS += -DYY_NO_UNISTD_H
endif
endif

OBJ := $(src:src/%.c=build/%.o)
OBJ += build/lexer.o build/parser.o

CFLAGS += -Iinclude -D_GNU_SOURCE -I${UTIL_DIR}/libtermcolor/include

# (parser) internationalization (linux only for now)
ifeq ($(shell uname), Linux)
-DYYENABLE_NLS=1 -DENABLE_NLS
endif

all: options-show libgwion_ast.a

options-show:
	@$(call _options)

libgwion_ast.a: ${OBJ}
	@$(info linking $@)
	${AR} ${AR_OPT}

include/lexer.h src/lexer.c: src/gwion.l
	$(info generating lexer)
	@${LEX} ${LEX_OPT} --header-file=include/lexer.h -o $@ $<

include/parser.h src/parser.c: src/gwion.y
	$(info generating parser)
	@${YACC} ${YACC_OPT} --defines=include/parser.h -Wno-yacc -o $@ $<

clean:
	$(info cleaning)
	@rm -f build/*.o *.a src/*.gcno src/*.gcda
	@rm -f grammar/*.o tool/*.o

install: translation-install libgwion_ast.a
	$(info installing ${GWION_PACKAGE} in ${PREFIX}/lib)
	install libgwion_ast.a ${DESTDIR}/${PREFIX}/lib
	@mkdir -p ${DESTDIR}/${PREFIX}/include/gwion/ast
	@cp include/*.h ${DESTDIR}/${PREFIX}/include/gwion/ast

uninstall: translation-uninstall
	$(info uninstalling ${GWION_PACKAGE} from ${PREFIX})
	rm ${DESTDIR}/${PREFIX}/bin/lib${PACKAGE}.a
	rm -r ${DESTDIR}/${PREFIX}/include/gwion/ast

gwparse: main.o
	${CC} -o $@ $< -lfl libgwion_ast.a libprettyerr/libprettyerr.a ../util/libgwion_util.a -lpthread -lm

counterexamples:
	touch src/gwion.y
	YACC_OPT="${YACC_OPT} -Wcex" make src/parser.c 2> counterexample.txt
test: 
	CFLAGS="${CFLAGS} -Dmod=" make pass/xxx.o
	rm pass/xxx.o

include $(wildcard .d/*.d)
include ${UTIL_DIR}/locale.mk
