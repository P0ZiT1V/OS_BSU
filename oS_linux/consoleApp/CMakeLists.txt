cmake_minimum_required(VERSION 3.21)
project(consoleApp)
set(CMAKE_CXX_STANDARD 14)
file(GLOB vector "libraries/libVector.so")
file(GLOB number "libraries/libNumber.a")
add_executable(consoleApp ConsoleApplication1.cpp ${vector} ${number})
target_link_libraries(consoleApp ${vector} ${number})
include_directories(../Number )
include_directories(../Vector)