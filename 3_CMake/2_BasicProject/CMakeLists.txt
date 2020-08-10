cmake_minimum_required(VERSION 3.12)

set(PROJECT "BasicStructure")

project("${PROJECT}_Project" VERSION 1.0.0 LANGUAGES CXX)

set(LIBRARY_NAME MyLib)
set(MAIN "${PROJECT}_Executable")

add_library(${LIBRARY_NAME} OBJECT my_lib.cc)

add_executable(${MAIN} main.cc)
target_link_libraries(${MAIN} ${LIBRARY_NAME})
