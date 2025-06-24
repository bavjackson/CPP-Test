cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(step2_destructor exercise/main.cpp)
add_executable(step2_destructor_tests "${CMAKE_CURRENT_LIST_DIR}/tests/tests.cpp")
target_link_libraries(step2_destructor_tests GTest::gtest_main)


#gtest_discover_tests(step2_destructor_tests)

gtest_add_tests(
    TARGET step2_destructor_tests
)