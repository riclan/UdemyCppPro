DEBUG ?= 1
ifeq ($(DEBUG), 1)
CPP_COMPILER_FLAGS = -g -O0 -Wall -Wextra -Wpedantic -Wconversion -std=c++17
EXECUTABLE_NAME = mainDebug
else
CPP_COMPILER_FLAGS = -O3 -Wall -Wextra -Wpedantic -Wconversion -std=c++17
EXECUTABLE_NAME = mainRelease
endif

CPP_COMPILER = g++
CPP_COMPILER_CALL = $(CPP_COMPILER) $(CPP_COMPILER_FLAGS)

build: my_lib.o
	$(CPP_COMPILER_CALL) main.cc -o $(EXECUTABLE_NAME) my_lib.o

my_lib.o: my_lib.cc my_lib.h
	$(CPP_COMPILER_CALL) my_lib.cc -c my_lib.cc

execute:
	./$(EXECUTABLE_NAME)
