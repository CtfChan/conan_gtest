cmake_minimum_required(VERSION 3.5)
project(gtest_conan)

enable_testing()

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_subdirectory (libbar)
add_subdirectory (tests)
