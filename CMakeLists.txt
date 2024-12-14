cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
cmake_policy(VERSION 3.10)
project(cgc VERSION 0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 14)
add_compile_options(-std=c++14 -Wall -Werror -pedantic-errors)

option(CGC_BUILD_EXAMPLES "build examples" OFF)

add_subdirectory(cgc)
include_directories(cgc)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/cgc)
