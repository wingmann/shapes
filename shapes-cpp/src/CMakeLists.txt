add_executable(${PROJECT_NAME} "main.cpp")

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} PUBLIC fmt::fmt)

add_library("${PROJECT_NAME}_lib" "lib.cpp")

target_include_directories("${PROJECT_NAME}_lib" PUBLIC ${PROJECT_INCLUDE_DIRS})
target_link_libraries("${PROJECT_NAME}_lib" PUBLIC fmt::fmt)
