cmake_minimum_required(VERSION 3.0.0)
project(Learning VERSION 0.1.0)

# Set the required standart as C++11
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 11)

add_executable(Learning main.cpp)

add_subdirectory(Libs/ByteRepresentations)

target_link_libraries(Learning PUBLIC ByteRepresentations)

target_include_directories(Learning PUBLIC "${PROJECT_SOURCE_DIR}/Libs/ByteRepresentations")