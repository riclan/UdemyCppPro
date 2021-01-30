cmake_minimum_required(VERSION 3.14)

set(PROJECT "UnitTesting")

project("${PROJECT}_Project" VERSION 1.2.3 LANGUAGES CXX)

# Global CMake variables are set here
set(CMAKE_CXX_STANDARD          17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS        OFF)

# Options
option(ENABLE_TESTING       "Enable a Unit Testing buid."   ON)

# Cmake modules
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake/)
include(Documentation)
if (ENABLE_TESTING)
    include(CTest)
endif()

# Project/Library Names
set(LIBRARY_NAME    "${PROJECT}_MyLib")
set(MAIN            "${PROJECT}_Executable")
set(TEST_MAIN       "${PROJECT}_unit_tests")

# Add conan libraries
include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

# Add external libraries
add_subdirectory("${PROJECT_SOURCE_DIR}/external/")

# Add first-party libraries
add_subdirectory("${PROJECT_SOURCE_DIR}/src/")

# Add executables
add_subdirectory("${PROJECT_SOURCE_DIR}/app/")

# Add tests
if (ENABLE_TESTING)
    enable_testing()
    add_subdirectory("${PROJECT_SOURCE_DIR}/tests/")
endif()
