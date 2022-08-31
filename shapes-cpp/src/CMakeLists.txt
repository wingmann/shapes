cmake_minimum_required(VERSION 3.20)

set(LIB_TARGET libshapes)
set(APP_TARGET shapes)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED 20)

add_library(${LIB_TARGET} shapes.cpp)
target_include_directories(${LIB_TARGET} PUBLIC "../include")

add_executable(${APP_TARGET} main.cpp)
target_link_libraries(${APP_TARGET} PUBLIC ${LIB_TARGET})
