cmake_minimum_required(VERSION 3.23)
project(Labo-Jeux-de-cartes)

set(CMAKE_CXX_STANDARD 20)

include_directories(.)

add_executable(Labo-Jeu-de-cartes
        main.cpp
        src/bataille.cpp
        src/bataille.h)
