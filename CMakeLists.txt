cmake_minimum_required(VERSION 3.16)
project(ToDoList)

set(CMAKE_CXX_STANDARD 20)

set(SOURCE_FILES Task.cpp TaskList.cpp TaskDisplayer.cpp TaskCollection.cpp)
add_executable(ToDoList main.cpp)
add_library(core ${SOURCE_FILES})
target_link_libraries(ToDoList core)
add_subdirectory(test)