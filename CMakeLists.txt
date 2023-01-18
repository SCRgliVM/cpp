cmake_minimum_required(VERSION 3.0.0)
project(Learning VERSION 0.1.0)


add_executable(Learning main.c)

add_subdirectory(Libs/ByteRepresentations)

target_link_libraries(Learning PUBLIC ByteRepresentations)

target_include_directories(Learning PUBLIC "${PROJECT_SOURCE_DIR}/Libs/ByteRepresentations")