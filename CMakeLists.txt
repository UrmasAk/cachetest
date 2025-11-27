cmake_minimum_required(VERSION 3.29)
project(cachetest C)

set(CMAKE_C_STANDARD 23)

add_executable(cachetest src/main.c)

target_compile_options(cachetest PRIVATE -O1)