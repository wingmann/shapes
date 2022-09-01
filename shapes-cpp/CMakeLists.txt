cmake_minimum_required(VERSION 3.20)
project(shapes VERSION 1.0.0 LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/lib")

set(PROJECT_INCLUDE_DIRS "${CMAKE_SOURCE_DIR}/include")

add_subdirectory(src)

find_package(fmt COMPONENTS fmt REQUIRED)
if(fmt_FOUND)
    target_include_directories(${PROJECT_NAME} PRIVATE ${fmt_INCLUDE_DIRS} ${PROJECT_INCLUDE_DIRS})
    target_link_libraries(${PROJECT_NAME} fmt::fmt)
endif()

if(CMAKE_BUILD_TYPE MATCHES "Test")
    add_subdirectory(test)

    find_package(GTest COMPONENTS gtest_main REQUIRED)
    if(GTest_FOUND)
        target_include_directories("${PROJECT_NAME}_test" PRIVATE
            ${GTest_INCLUDE_DIRS}
            ${fmt_INCLUDE_DIRS}
            ${PROJECT_INCLUDE_DIRS})

        target_link_libraries("${PROJECT_NAME}_test" GTest::gtest_main fmt::fmt)
    endif()
endif()
