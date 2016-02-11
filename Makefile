CC 	  = g++
FLAGS	  = -std=c++11
STRIP 	  = strip
VALGRIND  = valgrind --leak-check=full --show-leak-kinds=all 
CPP_FILES = $(wildcard source/*.cpp)
HPP_FILES = header
OBJ_FILES = obj/main.o

all: $(SOURCE)
	$(CC) $(FLAGS) -I$(HPP_FILES) $(CPP_FILES) -o$(OBJ_FILES)

clean:
	rm -f $(OBJ_FILES)

valgrind: all
	@$(VALGRIND) ./$(OBJ_FILES)
