cmake_minimum_required(VERSION 3.16)

set(PROJECT "IntermediateProject")

project(${PROJECT}_Project VERSION 1.0.0 LANGUAGES CXX)

set(LIBRARY_NAME "${PROJECT}_MyLib")
set(EXECUTABLE_NAME "${PROJECT}_Executable")

add_library(${LIBRARY_NAME} "${PROJECT_SOURCE_DIR}/src/my_lib.cc")
target_include_directories(${LIBRARY_NAME} "${PROJECT_SOURCE_DIR}/include/")

add_executable(${EXECUTABLE_NAME} "${PROJECT_SOURCE_DIR}/app/main.cc")

target_link_libraries(${EXECUTABLE_NAME} ${LIBRARY_NAME})
