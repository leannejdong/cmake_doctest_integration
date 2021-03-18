cmake_minimum_required(VERSION 3.12)

add_executable(basic_testing_tests src/test_main.cpp src/test_simple_lib.cpp)

target_link_libraries(basic_testing_tests simplelib)

add_test(basic_testing_tests basic_testing_tests)