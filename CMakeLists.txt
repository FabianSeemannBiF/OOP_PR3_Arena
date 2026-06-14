cmake_minimum_required(VERSION 4.2)
project(OOP_PR3_Arena)

set(CMAKE_CXX_STANDARD 14)

include_directories(includes)

add_executable(OOP_PR3_Arena
        includes/Arena.h
        src/Arena.cpp
        main.cpp)
