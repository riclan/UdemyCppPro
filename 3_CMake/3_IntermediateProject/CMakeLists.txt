cmake_minimum_required(VERSION 3.12)

set(PROJECT "IntermediateProject")

project("${PROJECT}_Project" VERSION 1.0.0 LANGUAGES CXX)

set(LIBRARY_NAME    "${PROJECT}_MyLib")
set(MAIN            "${PROJECT}_Executable")

add_library(${LIBRARY_NAME} OBJECT "${PROJECT_SOURCE_DIR}/src/my_lib.cc")
include_directories(${LIBRARY_NAME} "${PROJECT_SOURCE_DIR}/include/")

add_executable(${MAIN} "${PROJECT_SOURCE_DIR}/app/main.cc")
target_link_libraries(${MAIN} ${LIBRARY_NAME})
