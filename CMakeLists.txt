cmake_minimum_required(VERSION 3.10)
project(hello)
add_executable(hello src/main.cpp src/greet.cpp)
target_include_directories(hello PRIVATE include/)