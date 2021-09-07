cmake_minimum_required(VERSION 3.16)

set(PROJECT "VariablesAndOptions")

project(${PROJECT}_Project VERSION 1.2.3 LANGUAGES CXX)

# Global CMake variables are set here
set(CMAKE_CXX_STANDARD          17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS        OFF)

# Project/Library Names
set(LIBRARY_NAME    "${PROJECT}_MyLib")
set(EXECUTABLE_NAME "${PROJECT}_Executable")

# Option: For generating/building the project
option(USE_PRINTF "Whether printf (ON) or std::cout (OFF) is used." ON)

# Configuration File
configure_file("${PROJECT_SOURCE_DIR}/include/ProjectConfig.h.in"
               "${PROJECT_SOURCE_DIR}/include/ProjectConfig.h" @ONLY)

add_library(${LIBRARY_NAME} "${PROJECT_SOURCE_DIR}/src/my_lib.cc")
include_directories(${LIBRARY_NAME} "${PROJECT_SOURCE_DIR}/include/")

add_executable(${EXECUTABLE_NAME} "${PROJECT_SOURCE_DIR}/app/main.cc")

target_link_libraries(${EXECUTABLE_NAME} ${LIBRARY_NAME})
