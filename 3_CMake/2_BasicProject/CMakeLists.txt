cmake_minimum_required(VERSION 3.16)

set(PROJECT "BasicStructure")

project(${PROJECT}_Project VERSION 1.0.0 LANGUAGES CXX)

set(LIBRARY_NAME ${PROJECT}_MyLib)

add_library(${LIBRARY_NAME} my_lib.cc)

set (EXECUTABLE_NAME ${PROJECT}_Executable)

add_executable(${EXECUTABLE_NAME} main.cc)

target_link_libraries(${EXECUTABLE_NAME} ${LIBRARY_NAME})
