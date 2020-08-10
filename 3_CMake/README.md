# Important CMake Commands

## Generating a Project

```
 cmake [<options>] -S <path-to-source> -B <path-to-build>
```
Assuming that a CMakeLists.txt is in the root directory, you can generate a project like the following.

```shell
 mkdir build
 cd build
 cmake -S .. -B . # Option 1
 cmake .. # Option 2
```

Assuming that you have already build the CMake project, you can update the generated project.

```shell
 cd build
 cmake .
```
### Options for Generating a Project

#### Generator

The options consists of, for example the [generator](https://cmake.org/cmake/help/latest/manual/cmake-generators.7.html#manual:cmake-generators(7)) which could be VisualStudio2019 or Unix-Makefiles.

##### For Windows/Linux with GCC:

```shell
 cd build
 cmake -S .. -B . -G "Unix Makefiles" # Option 1
 cmake .. -G "Unix Makefiles" # Option 2
```

#### Compiler

You can also set the [compiler](https://cmake.org/cmake/help/latest/variable/CMAKE_GENERATOR_TOOLSET.html#variable:CMAKE_GENERATOR_TOOLSET) which could be VisualStudio2019 or GCC/G++.

##### For Windows/Linux with GCC:

```shell
 cd build
 cmake .. -G "Unix Makefiles" -DCMAKE_CXX_COMPILER:String=g++-9
```

### Specify the Build Type

Per default the standard type is in the most cases the debug type.
If you want to generate the project, for example, in release mode you have to set the build type.

```shell
 cd build
 cmake -DCMAKE_BUILD_TYPE=Release .. -G "Unix Makefiles"
```

### Passing Variables

If you have set some variables in the CMakeLists, you can pass values in the command line.

```shell
 cd build
 cmake -DMY_VARIABLE=ON .. 
```

## Build a Project:

To build a project, you need to generate it beforehand.
Building a project is pretty straightforward, by typing the following.

```shell
 cmake --build <dir> [<options>] [-- <build-tool-options>]
```

If you want to build the project in parallel you can use the following option.

```shell
 cd build
 cmake --build . -j 4
```

### Specify the Build Target (Option 1)

The standard build command would build all created targets within the CMakeLists.
If you want to build a specific target, you can do so.

```shell
 cd build
 cmake --build . --target ExternalLibraries_Executable -j 4
```

The target *ExternalLibraries_Executable* is just an example of a possible target name.
Note: All dependent targets will be build beforehand.

### Specify the Build Target (Option 2)

Besides setting the target within the cmake build command, you could also run the previously generated Makefile (from the generating step).
If you want to build the *ExternalLibraries_Executable*, you could to the following.

```shell
 cd build
 make ExternalLibraries_Executable
```

## Run the Executable

After generating the project and building a specific target you might want to run the executable.
In the default case, the executable is stored in *build/5_ExternalLibraries/app/ExternalLibraries_Executable*, assuming that you are building the project *5_ExternalLibraries* and the main file of the executable is in the *app* dir.

```shell
 cd build
 ./5_ExternalLibraries/app/ExternalLibraries_Executable
```

## Different Linking Types

There are the three following linking types:

   - PRIVATE: When A links in B as *PRIVATE*, it is saying that A uses B in its
   implementation, but B is not used in any part of A's public API. Any code
   that makes calls into A would not need to refer directly to anything from
   B.
   - INTERFACE: When A links in B as *INTERFACE*, it is saying that A does not use B
   in its implementation, but B is used in A's public API. Code that calls
   into A may need to refer to things from B in order to make such calls.
   - PUBLIC: When A links in B as *PUBLIC*, it is essentially a combination of
   PRIVATE and INTERFACE. It says that A uses B in its implementation and B is
   also used in A's public API.

Example for Boost:

  - PRIVATE: target_include_directories(A PRIVATE ${Boost_INCLUDE_DIRS}) if you only use those Boost headers inside your source files (.cpp) or private header files (.h).
  - INTERFACE: target_include_directories(A INTERFACE ${Boost_INCLUDE_DIRS}) if you don't use those Boost headers inside your source files (therefore, not needing them to compile A). This means that within your library you can include files directly, but as a user of the library you have to insert libname/
  - PUBLIC: target_include_directories(A PUBLIC ${Boost_INCLUDE_DIRS}) if you use those Boost headers in your public header files, which are included BOTH in some of A's source files and might also be included in any other client of your A library.
