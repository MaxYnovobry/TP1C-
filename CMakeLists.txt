cmake_minimum_required(VERSION 3.21)
project(TP1C_)

set(CMAKE_CXX_STANDARD 14)

include_directories(Header)

add_executable(TP1C_
        Header/Exercice1.h
        Source/Exercice1.cpp
        Header/main.cpp)
