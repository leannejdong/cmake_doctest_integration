cmake_minimum_required (VERSION 3.12)

project(basic_testing)

# needed for enabling tests
# could be optionally disabled with cmake options
enable_testing()

add_subdirectory(src)
add_subdirectory(lib)
#add_subdirectory(external)
add_subdirectory(test)
