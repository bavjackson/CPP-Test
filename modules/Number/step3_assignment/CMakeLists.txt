cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(step3_assignment exercise/main.cpp)
add_executable(step3_assignment_tests "${CMAKE_CURRENT_LIST_DIR}/tests/tests.cpp")
target_link_libraries(step3_assignment_tests GTest::gtest_main)


# gtest_discover_tests(step3_assignment_tests)

gtest_add_tests(
    TARGET step3_assignment_tests
)