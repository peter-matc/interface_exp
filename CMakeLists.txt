cmake_minimum_required(VERSION 3.24)
project(interface_exp)

set(CMAKE_CXX_STANDARD 17)

add_executable(interface_exp main.cpp Test01/Test01.cpp Test01/Test02.cpp)
