cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(step1_mynumber exercise/main.cpp)
add_executable(step1_mynumber_tests "${CMAKE_CURRENT_LIST_DIR}/tests/tests.cpp")
target_link_libraries(step1_mynumber_tests GTest::gtest_main)


add_dependencies(step1_mynumber_tests step1_mynumber)

gtest_add_tests(
    TARGET step1_mynumber_tests
)