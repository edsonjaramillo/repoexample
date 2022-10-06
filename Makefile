# complier settings
CXX = clang++
CPPFLAGS = -g -Wall --std=c++17

# directories
SRC_DIR = src
INCLUDE_DIR = include
OBJECTS_DIR = objects

# program name
TARGET = Program

# gets all .o files in the objects directory from the .cpp files in the src directory
CPP_FILES := $(wildcard $(SRC_DIR)/**/*.cpp)
OBJ_FILES := $(CPP_FILES:$(SRC_DIR)/%.cpp=$(OBJECTS_DIR)/%.o)


# excecutes the program
all: $(TARGET)
	@./$(TARGET)

# compiles the program with all the .o files and the main.cpp file
$(TARGET): $(OBJECTS_DIR)/main.o $(OBJ_FILES)
	@echo "Creating $(TARGET) executable..."
	@$(CXX) $(CPPFLAGS) -o $(TARGET) $(OBJECTS_DIR)/main.o $(OBJ_FILES)
	@rm -f $(TARGET).ilk $(TARGET).pdb

# compiles the main.cpp file into a .o file
$(OBJECTS_DIR)/main.o: main.cpp
	@mkdir -p $(OBJECTS_DIR) $(SRC_DIR) $(INCLUDE_DIR)
	@echo "Compiling main.cpp..."
	@$(CXX) $(CPPFLAGS) -c -o $@ $<

# compiles all the .cpp files into .o files
$(OBJECTS_DIR)/%.o: $(SRC_DIR)/%.cpp
	@echo "Compiling $<..."
	@mkdir -p $(dir $@)
	@$(CXX) $(CPPFLAGS) -c $< -o $@

# removes all the .o files and the executable
clean:
	@rm -rf $(TARGET) $(OBJECTS_DIR)/*
	@echo "Cleaning was successful."