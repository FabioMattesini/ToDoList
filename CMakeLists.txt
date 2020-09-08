cmake_minimum_required(VERSION 3.16)
project(ToDoList)

set(CMAKE_CXX_STANDARD 20)

add_executable(ToDoList main.cpp Task.cpp Task.h date.h TaskList.cpp TaskList.h)
add_subdirectory(test)