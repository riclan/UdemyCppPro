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

CPP_SRCS = $(wildcard *.cc *.cpp)
CPP_OBJECTS = $(filter %.o, $(patsubst %.cc,  %.o, $(CPP_SRCS)) \
							$(patsubst %.cpp, %.o, $(CPP_SRCS)))

build: $(EXECUTABLE_NAME)

$(EXECUTABLE_NAME): $(CPP_OBJECTS)
	$(CPP_COMPILER_CALL) -o $@ $^

%.o: %.c
	$(CPP_COMPILER_CALL) -c -o $@ $<

execute:
	./$(EXECUTABLE_NAME)
