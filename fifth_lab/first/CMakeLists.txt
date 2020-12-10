cmake_minimum_required(VERSION 3.17)
project(lab_fifth LANGUAGES ASM CXX)

set(CMAKE_CXX_STANDARD 17)
add_executable(lab_fifth main.cpp task.cpp ../second/main.cpp)