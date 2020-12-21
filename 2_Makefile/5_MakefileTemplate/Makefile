###############
## VARIABLES ##
###############
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

INCLUDE_DIR = include
SOURCE_DIR = src
BUILD_DIR = build

CPP_SRCS = $(wildcard $(SOURCE_DIR)/*.cpp)
CPP_OBJECTS = $(patsubst $(SOURCE_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(CPP_SRCS))

CC_SRCS = $(wildcard $(SOURCE_DIR)/*.cc)
CC_OBJECTS = $(patsubst $(SOURCE_DIR)/%.cc, $(BUILD_DIR)/%.o, $(CC_SRCS))

####################
## PESUDO TARGETS ##
####################
build: $(BUILD_DIR)/$(EXECUTABLE_NAME)

#############
## TARGETS ##
#############
$(BUILD_DIR)/$(EXECUTABLE_NAME): $(CPP_OBJECTS) $(CC_OBJECTS)
	$(CPP_COMPILER_CALL) $^ -o $@

execute:
	./$(BUILD_DIR)/$(EXECUTABLE_NAME)

##############
## PATTERNS ##
##############
$(BUILD_DIR)/%.o: $(SOURCE_DIR)/%.cpp
	$(CPP_COMPILER_CALL) -I $(INCLUDE_DIR) -c $< -o $@

$(BUILD_DIR)/%.o: $(SOURCE_DIR)/%.cc
	$(CPP_COMPILER_CALL) -I $(INCLUDE_DIR) -c $< -o $@
