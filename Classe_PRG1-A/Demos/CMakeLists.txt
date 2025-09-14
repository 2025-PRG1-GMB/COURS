cmake_minimum_required(VERSION 3.25)
project(Demos_PRG1-E)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wconversion -Wall -Wextra -pedantic -std=c++23")

# Project files
add_executable(Demos_PRG1-E
        2025-01-21.cpp
        )
