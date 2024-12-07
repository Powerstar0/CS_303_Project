cmake_minimum_required(VERSION 3.27)
project(CS_303_Project)

set(CMAKE_CXX_STANDARD 17)

add_executable(CS_303_Project main.cpp
        Library.h
        Library.cpp
        Date.h
        Date.cpp
        Employee.h
        Employee.cpp
        Book.h
        Book.cpp)
