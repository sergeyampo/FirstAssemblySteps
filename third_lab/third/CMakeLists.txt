cmake_minimum_required(VERSION 3.17)
project(lab_first LANGUAGES ASM CXX)

set(CMAKE_CXX_STANDARD 17)
add_executable(lab_third rand.cpp main.S)
set_target_properties(lab_third PROPERTIES COMPILE_FLAGS "-m32" LINK_FLAGS "-m32")