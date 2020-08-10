# Cpp Makefile Tutorial

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
  