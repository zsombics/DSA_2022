cmake_minimum_required(VERSION 3.20)
project(Labs C)

set(CMAKE_C_STANDARD 11)

add_executable(Labs introdution/src/main.c introdution/src/function.c introdution/headers/function.h)
include_directories(Labs introdution/headers)