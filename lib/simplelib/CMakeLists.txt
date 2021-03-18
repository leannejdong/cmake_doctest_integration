cmake_minimum_required (VERSION 3.12)

add_library(simplelib
        src/simplelib.cpp
        include/simplelib/simplelib.h)

target_include_directories(simplelib
        PUBLIC
        # this will be automatically propagated if you use target_link_libraries
        ${CMAKE_CURRENT_SOURCE_DIR}/include/
        PRIVATE
        # in case you have private includes
        ${CMAKE_CURRENT_SOURCE_DIR}
        )
