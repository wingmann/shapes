cmake_minimum_required(VERSION 3.20)
project(shapes)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED 20)

add_subdirectory(src)

if(CMAKE_BUILD_TYPE STREQUAL Test)
    add_subdirectory("lib/googletest")
    add_subdirectory(tests)
endif()