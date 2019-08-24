cmake_minimum_required(VERSION 3.14)
project(cpp_shortcuts)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp_shortcuts main.cpp stl/generate/generate.cpp
        functional/less/less.cpp functional/less/less.h)