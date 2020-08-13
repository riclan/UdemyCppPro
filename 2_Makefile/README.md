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

  - Debug: ```-g```
  - Release: ```-O0 -O1 -O2 -O3 -Os -Ofast -Og```
  - Includes: ```-I```
  - Warnings: ```-Wall -Wextra -Wpedantic -Wconversion ...```

## Makefile Commands of the Template

### Build the Executable

Create the executable in either Debug or Release mode.

```bash
 make build COMPILATION_MODE=Debug # Build type is debug
 make build COMPILATION_MODE=Release # Build type is release
```

### Run the Executable

Run the executable in either Debug or Release mode.

```bash
 make execute COMPILATION_MODE=Debug # Build type is debug
 make execute COMPILATION_MODE=Release # Build type is release
```

### Variables of the Makefile Template

  - COMPILATION_MODE: Debug or Release
  - ENABLE_WARNINGS: 1 (True) or 0 (False)
  - WARNINGS_AS_ERRORS: 1 (True) or 0 (False)
  - CPP_STANDARD: c++11, c++14, c++17, etc.

### Important Shortcuts of the Makefile Template

  - $@    the file name of the target
  - $<    the name of the first prerequisite (i.e., dependency)
  - $^    the names of all prerequisites (i.e., dependencies)
  