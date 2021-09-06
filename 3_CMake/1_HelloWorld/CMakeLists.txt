# 1.) mkdir build
# 2.) cd build
# 3.) cmake ..
# 4.) make

# A1.) mkdir build
# A2.) /usr/bin/cmake -H/home/jan/UdemyCppPro/3_CMake -B/home/jan/UdemyCppPro/3_CMake/build -G "Unix Makefiles"
# A3.) /usr/bin/cmake --build /home/jan/UdemyCppPro/3_CMake/build --config Debug --target all -j 18
cmake_minimum_required(VERSION 3.16)

project(HelloWorld_Project VERSION 1.0.0 LANGUAGES CXX)

add_executable(HelloWorld_Executable main.cc)
