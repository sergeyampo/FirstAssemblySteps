cmake_minimum_required(VERSION 3.17)
project(main LANGUAGES ASM CXX)

set(CMAKE_CXX_STANDARD 17)
add_executable(main main.cpp calculate.S)
set_target_properties(main PROPERTIES COMPILE_FLAGS "-m32" LINK_FLAGS "-m32")