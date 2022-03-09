project(Vector)
cmake_minimum_required(VERSION 3.21)
include_directories(../Number)
add_library(Vector SHARED
        Vector.cpp
        Vector.h)