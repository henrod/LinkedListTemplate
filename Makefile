CXX 	  	= g++
CXXFLAGS  = -std=c++11 -Wall -Wextra
VALGRIND  = valgrind --leak-check=full --show-leak-kinds=all
CPP_PATH  = source
CPP_FILES = $(CPP_PATH)/main.cpp
HPP_PATH  = header
OBJ_FILES = obj/main.o

all: $(SOURCE)
	$(CXX) $(CXXFLAGS) -I$(HPP_PATH) -I$(CPP_PATH)  $(CPP_FILES) -o$(OBJ_FILES)

clean:
	rm -f $(OBJ_FILES)

valgrind: all
	@$(VALGRIND) ./$(OBJ_FILES)
