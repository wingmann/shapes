cmake_minimum_required(VERSION 3.20)
project(shapes VERSION 1.0.0 LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/lib")
list(APPEND PROJECT_INCLUDE_DIRS "${CMAKE_SOURCE_DIR}/include")

find_package(fmt COMPONENTS fmt REQUIRED)
find_package(GTest COMPONENTS gtest_main REQUIRED)

add_subdirectory(src)
add_subdirectory(test)

if(fmt_FOUND)
    # Executable
    target_include_directories(${PROJECT_NAME} PRIVATE ${fmt_INCLUDE_DIRS} ${PROJECT_INCLUDE_DIRS})
    target_link_libraries(${PROJECT_NAME} PRIVATE fmt::fmt)

    # Lib for test
    target_include_directories("${PROJECT_NAME}_lib" PUBLIC ${fmt_INCLUDE_DIRS} ${PROJECT_INCLUDE_DIRS})
    target_link_libraries("${PROJECT_NAME}_lib" PUBLIC fmt::fmt)
endif()

# Google test
if(GTest_FOUND)
    target_include_directories("${PROJECT_NAME}_test" PRIVATE ${GTest_INCLUDE_DIRS})
    target_link_libraries("${PROJECT_NAME}_test" PRIVATE GTest::gtest_main "${PROJECT_NAME}_lib")
endif()
