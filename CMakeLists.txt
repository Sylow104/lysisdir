cmake_minimum_required(VERSION 3.10)
project(lysisdir VERSION 0.0.1)
FILE(GLOB SRC_C src/*.c)
add_library(lysisdir ${SRC_C})
enable_testing()
target_include_directories(lysisdir PUBLIC include)

add_executable(path_analyze_text tests/path_analyze.c)
target_link_libraries(path_analyze_text lysisdir)
add_test(path_analyze_tst path_analyze_text)