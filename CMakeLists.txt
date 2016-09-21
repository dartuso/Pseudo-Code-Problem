cmake_minimum_required(VERSION 3.6)
project(Test_example)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(Test_example ${SOURCE_FILES})