set(LIBRARY_NAME "${PROJECT_NAME}")

set(Header_Files
        "${CMAKE_SOURCE_DIR}/include/absyn.h"
        "${CMAKE_SOURCE_DIR}/include/ast_getter.h"
        "${CMAKE_SOURCE_DIR}/include/ast_pass.h"
        "${CMAKE_SOURCE_DIR}/include/bison_compat.h"
        "${CMAKE_SOURCE_DIR}/include/cpy_ast.h"
        "${CMAKE_SOURCE_DIR}/include/dynop.h"
        "${CMAKE_SOURCE_DIR}/include/flags.h"
        "${CMAKE_SOURCE_DIR}/include/gwion_ast.h"
        "${CMAKE_SOURCE_DIR}/include/lexer.h"
        "${CMAKE_SOURCE_DIR}/include/loc.h"
        "${CMAKE_SOURCE_DIR}/include/macro.h"
        "${CMAKE_SOURCE_DIR}/include/parser.h"
        "${CMAKE_SOURCE_DIR}/include/pp.h"
        "${CMAKE_SOURCE_DIR}/include/pparg.h"
        "${CMAKE_SOURCE_DIR}/include/scanner.h"
)
source_group("Header Files" FILES "${Header_Files}")

set(Source_Files
        "ast_cpy.c"
        "ast_free.c"
        "ast_new.c"
        "dynop.c"
        "lexer.c"
        "loc.c"
        "macro.c"
        "parser.c"
        "pp.c"
        "pparg.c"
        "scanner.c"
)
source_group("Source Files" FILES "${Source_Files}")

add_library("${LIBRARY_NAME}" "${LIBRARY_TYPE_FLAG}" "${Header_Files}" "${Source_Files}")

target_include_directories(
        "${LIBRARY_NAME}"
        PUBLIC
        "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>"
        "$<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>"
        "$<INSTALL_INTERFACE:include>"
)
#target_link_libraries("${LIBRARY_NAME}" PUBLIC "termcolor")
set_target_properties(
        "${LIBRARY_NAME}"
        PROPERTIES
        LINKER_LANGUAGE
        C
)

################
# Flex / bison #
################

find_package(BISON)
find_package(FLEX)

BISON_TARGET(MyParser
        gwion.y
        "${CMAKE_CURRENT_SOURCE_DIR}/parser.c"
        DEFINES_FILE "${CMAKE_SOURCE_DIR}/include/lexer.h"
        # COMPILE_FLAGS "-Wno-yacc"
)
FLEX_TARGET(MyScanner
        gwion.l
        "${CMAKE_CURRENT_SOURCE_DIR}/lexer.c"
        COMPILE_FLAGS "--header-file=${CMAKE_SOURCE_DIR}/include/lexer.h")
ADD_FLEX_BISON_DEPENDENCY(MyScanner MyParser)


# Symbol exporter
include(GenerateExportHeader)
set(_export_file "${CMAKE_SOURCE_DIR}/include/${LIBRARY_NAME}_export.h")
generate_export_header("${LIBRARY_NAME}" EXPORT_FILE_NAME "${_export_file}")

#################
# install rules #
#################

# setup the version numbering
set_property(TARGET "${LIBRARY_NAME}" PROPERTY VERSION "1.0.0")
set_property(TARGET "${LIBRARY_NAME}" PROPERTY SOVERSION "1")

set(installable_libs "${LIBRARY_NAME}" "${PROJECT_NAME}_compiler_flags")
install(FILES "${Header_Files}" "${_export_file}" DESTINATION "include")

if (TARGET "${DEPENDANT_LIBRARY}")
    list(APPEND installable_libs "${DEPENDANT_LIBRARY}")
endif ()
install(TARGETS ${installable_libs}
        DESTINATION "lib"
        EXPORT "${LIBRARY_NAME}Targets")
