cmake_minimum_required(VERSION 3.24)
project(interface_exp)

set(CMAKE_CXX_STANDARD 17)

add_executable(interface_exp main.cpp Test01/Test01.cpp Test01/Test02.cpp Test01/PolyTest.cpp Test01/Test03.cpp Test01/TEst05.cpp Test01/TEst04.cpp Test01/Test06.cpp)
