cmake_minimum_required(VERSION 3.12)

add_executable(basic_testing main.cpp)

target_link_libraries(basic_testing
        simplelib
        )
