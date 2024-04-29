cmake_minimum_required(VERSION 3.28)
project(GS)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
set(CMAKE_CXX_STANDARD 17)
add_executable(GS main.cpp
        interpreter.h)
