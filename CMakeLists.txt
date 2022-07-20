cmake_minimum_required(VERSION 3.14)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
project(cmake_train2)

add_subdirectory(Libs)

set(FLAGS -Wall -Wextra -Werror -Wconversion -pedantic -pedantic-errors -g)
add_compile_options(${FLAGS})

add_executable(${PROJECT_NAME} main.cpp)

# Normal library link
target_link_libraries(${PROJECT_NAME} buildInfoLib)

# Template library link
target_link_libraries(${PROJECT_NAME} easyCalcLib)



