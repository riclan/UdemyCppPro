cmake_minimum_required(VERSION 3.12)

set(PROJECT "VariablesAndOptions")

project("${PROJECT}_Project" VERSION 1.2.3 LANGUAGES CXX)

# Global CMake variables are set here
set(CMAKE_CXX_STANDARD          17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS        OFF)

# Project/Library Names
set(LIBRARY_NAME    "${PROJECT}_MyLib")
set(MAIN            "${PROJECT}_Executable")

# Options for generating/building
# cd build && cmake -D USE_PRINTF=[OFF|ON] ..
option(USE_PRINTF "If you want either to use printf (ON) or cout (OFF)" OFF)

# Configuration Files
configure_file("${PROJECT_SOURCE_DIR}/include/ProjectConfig.h.in"
               "${PROJECT_BINARY_DIR}/ProjectConfig.h" @ONLY)

add_library(${LIBRARY_NAME} OBJECT "${PROJECT_SOURCE_DIR}/src/my_lib.cc")
include_directories(${LIBRARY_NAME} "${PROJECT_SOURCE_DIR}/include/")

add_executable(${MAIN} "${PROJECT_SOURCE_DIR}/app/main.cc")
target_link_libraries(${MAIN} ${LIBRARY_NAME})
target_include_directories(${MAIN} PUBLIC ${PROJECT_BINARY_DIR})
