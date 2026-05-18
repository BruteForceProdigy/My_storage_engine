cmake_minimum_required(VERSION 4.2)
project(storage_engine)

set(CMAKE_CXX_STANDARD 20)

add_executable(storage_engine main.cpp
        page.h
        page.cpp)
