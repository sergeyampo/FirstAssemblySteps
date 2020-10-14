cmake_minimum_required(VERSION 3.17)
project(assembly ASM)

add_executable(main greeting.S)
set_target_properties(main PROPERTIES COMPILE_FLAGS "-m32" LINK_FLAGS "-m32")