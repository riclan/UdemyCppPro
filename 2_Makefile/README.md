# Cpp Makefile Tutorial

## GCC/Clang Compiler Steps:

### Compilation Steps:

1. Preprocessing
2. Compilation
3. Assembler
4. Linking

#### Preprocessing:

  - Removes comments from the source code
  - Macro expansion
  - Expansion of header files
  - Command: g++ -E main.cc > main.i

#### Compilation:

  - Translates the preprocessing file into assembly language.
  - Checks the C/C++ language syntax for error
  - Command: g++ -S main.i
  - Produces: main.s

#### Assembler:

  - Translates the assembly code into low-level machine code
  - Command: g++ -c main.s
  - Produces: main.o

#### Linker:

  - Linking all the source files together, that is all the other object codes in the project.
  - Generates the executable file
  - Command: g++ main.o -o main
  - Produces: main.out (.exe for Windows)

### Compiler Flags:

  - Debug: ```-g  -glevel```
  - Release: ```-O  -O0  -O1  -O2  -O3  -Os  -Ofast  -Og```
  - Includes: ```-I dir```
  - Warnings: ```-Wall -Wextra -Wpedantic -Wconversion ...```

## Makefile Commands of the Template

### Build the Executable

Create the executable in either Debug or Release mode.

```bash
 cd 4_FinalTemplate
 make -f Makefile build # Default build type is debug
 make -f Makefile build DEBUG=1 # Build type is debug
 make -f Makefile build DEBUG=0 # Build type is release
```

Note: The *-f* command line argument is optional, if the Makefile is in the current directory.

### Run the Executable

Run the executable in either Debug or Release mode.

```bash
 cd 4_FinalTemplate
 make -f Makefile execute # Default build type is debug
 make -f Makefile execute DEBUG=1 # Build type is debug
 make -f Makefile execute DEBUG=0 # Build type is release
```

## Important Makefile Shortcuts

  - $@    the file name of the target
  - $<    the name of the first prerequisite (i.e., dependency)
  - $^    the names of all prerequisites (i.e., dependencies)
  