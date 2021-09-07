cmake_minimum_required(VERSION 3.16)

set(PROJECT "BetterProjectStructure")

project(${PROJECT}_Project VERSION 1.2.3 LANGUAGES CXX)

# Global CMake variables are set here
set(CMAKE_CXX_STANDARD          17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS        OFF)

# Project/Library Names
set(LIBRARY_NAME    "${PROJECT}_MyLib")
set(EXECUTABLE_NAME "${PROJECT}_Executable")

# Configuration File
configure_file("${PROJECT_SOURCE_DIR}/include/ProjectConfig.h.in"
               "${PROJECT_SOURCE_DIR}/include/ProjectConfig.h" @ONLY)

# Add libraries
add_subdirectory("${PROJECT_SOURCE_DIR}/src")

# Add executable
add_subdirectory("${PROJECT_SOURCE_DIR}/app")
