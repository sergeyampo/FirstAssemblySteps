cmake_minimum_required(VERSION 3.17)
project(lab_second LANGUAGES ASM)

add_executable(lab_second main.s)
set_target_properties(lab_second PROPERTIES COMPILE_FLAGS "-m32" LINK_FLAGS "-m32")