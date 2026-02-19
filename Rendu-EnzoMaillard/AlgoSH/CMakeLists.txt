cmake_minimum_required(VERSION 4.0)
project(AlgoSH)

set(CMAKE_CXX_STANDARD 20)

add_executable(AlgoSH main.cpp
        Algo.cpp
        Algo.h
        Point.cpp
        Point.h)
