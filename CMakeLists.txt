cmake_minimum_required(VERSION 3.5)
project(string2sign)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories( include
        src)

set(SOURCE_FILES
    include/ul_prime.h
    include/ul_sign.h
    include/util.h
    src/sign.cpp
    src/ul_prime.cpp
    src/ul_sign.cpp
    Makefile
    README.md)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/output")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/output")

add_executable(sign ${SOURCE_FILES})