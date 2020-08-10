# Step 1: Generating the project - mkdir build && cd build && cmake ..
# Step 2: Bulding the project    - cd build && cmake --build .

cmake_minimum_required(VERSION 3.12)

project(CppCmakeTutorial VERSION 1.0.0 LANGUAGES CXX)

# add_subdirectory("1_HelloWorld")
# add_subdirectory("2_BasicProject")
# add_subdirectory("3_IntermediateProject")
# add_subdirectory("4_VariablesAndOptions")
# add_subdirectory("5_BetterProjectStructure")
# add_subdirectory("6_ExternalLibraries")
add_subdirectory("7_ConanPackages")
