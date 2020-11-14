# Name of the project
PROJECT_NAME = NUMBER_SYSTEM_CONVERSION

# Output directory
BUILD = build

# All source code files
SRC =main.c\
src/Bin_to_Dec.c\
src/Bin_to_Oct.c\
src/Bin_to_Hex.c\
src/Bin_to_Hex.c\
src/Dec_to_Bin.c\
src/Dec_to_Oct.c\
src/Dec_to_Hex.c\
src/Oct_to_Bin.c\
src/Oct_to_Dec.c\
src/Oct_to_Hex.c\
src/Hex_to_Bin.c\
src/Hex_to_Dec.c\
src/Hex_to_Oct.c\


# All test source files
TEST_SRC = src/Bin_to_Dec.c\
src/Bin_to_Oct.c\
src/Bin_to_Hex.c\
src/Bin_to_Hex.c\
src/Dec_to_Bin.c\
src/Dec_to_Oct.c\
src/Dec_to_Hex.c\
src/Oct_to_Bin.c\
src/Oct_to_Dec.c\
src/Oct_to_Hex.c\
src/Hex_to_Bin.c\
src/Hex_to_Dec.c\
src/Hex_to_Oct.c\
test/test_convr.c\

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

# All include folders with header files
INC	= -Iinc\
-Iunity\
-Itest\

PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test  doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).out

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).out

# Document the code using Doxygen
doc:
	make -C ./documentation

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) -lcunit
	./$(TEST_OUTPUT)

# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build
