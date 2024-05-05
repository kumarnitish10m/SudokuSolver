cmake_minimum_required(VERSION 3.15)

set(CMAKE_CXX_COMPILER g++)
set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall -Wextra -pedantic")

project(SudokuTest)

add_executable(Sudoku
    test/main.cpp
    src/SudokuSolver.cpp
    include/SudokuSolver.h
)

include_directories(SudokuTest "./src" "./include")

project(String) 

add_library(String SHARED
    src/SudokuSolver.cpp
    include/SudokuSolver.h
)

include_directories(SudokuTest "./src" "./include")
