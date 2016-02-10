CC = g++ -std=c++11
CPP_FILES = $(wildcard source/*.cpp)
HPP_FILES = header
OBJ_FILES = obj/main.o

all: $(SOURCE)
	$(CC) -I$(HPP_FILES) $(CPP_FILES) -o$(OBJ_FILES)

clean:
	rm -f $(OBJ_FILES)
