cmake_minimum_required(VERSION 3.8)
project(reflection_complie_time)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp reflection.hpp)
add_executable(reflection_complie_time ${SOURCE_FILES})