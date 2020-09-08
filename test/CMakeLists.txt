project(test)

add_subdirectory(lib/googletest-master)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
add_executable(Task_Tests_run TestTaskList.cpp runAllTests.cpp)
target_link_libraries(Task_Tests_run gtest gtest_main)