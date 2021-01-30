cmake_minimum_required(VERSION 3.14)

set(PROJECT "ExternalLibraries")

project("${PROJECT}_Project" VERSION 1.2.3 LANGUAGES CXX)

# Global CMake variables are set here
set(CMAKE_CXX_STANDARD          17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS        OFF)

# Project/Library Names
set(LIBRARY_NAME    "${PROJECT}_MyLib")
set(MAIN            "${PROJECT}_Executable")

# Add external libraries
add_subdirectory("${PROJECT_SOURCE_DIR}/external/")

# Add first-party libraries
add_subdirectory("${PROJECT_SOURCE_DIR}/src/")

# Add executables
add_subdirectory("${PROJECT_SOURCE_DIR}/app/")
