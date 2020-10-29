cmake_minimum_required(VERSION 3.17)
project(lab_fourth LANGUAGES ASM)

add_executable(lab_fourth main.S expr_system.S)
set_target_properties(lab_fourth PROPERTIES COMPILE_FLAGS "-m32" LINK_FLAGS "-m32")