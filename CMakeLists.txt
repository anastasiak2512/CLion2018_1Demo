cmake_minimum_required(VERSION 3.9)
project(CLion2018_1Demo)

set(CMAKE_CXX_STANDARD 17)

add_executable(CLion2018_1Demo main.cpp editor/control_statements_folding.cpp)

add_subdirectory(cpp_support)
add_subdirectory(clang_tidy)
add_subdirectory(editor)
add_subdirectory(cmake_support)