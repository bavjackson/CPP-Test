cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(step4_plus_operator exercise/main.cpp)
add_executable(step4_plus_operator_tests "${CMAKE_CURRENT_LIST_DIR}/tests/tests.cpp")
target_link_libraries(step4_plus_operator_tests GTest::gtest_main)


# gtest_discover_tests(step4_plus_operator_tests)

gtest_add_tests(
    TARGET step4_plus_operator_tests
)
