# Author: Sarah Harrington
# E-mail: sharrin3@nd.edu
#
# gcc is for the compiler for C
CC := gcc

# CFLAGS are the compiler flages for when we compile C code in this course
FLAGS := -O2 -g -Wall -Wextra -Wconversion -Wshadow -Werror
CFLAGS := -std=c2x $(FLAGS)


# Build the main object
homework06.o: homework06.c
	$(CC) $(CFLAGS) -c homework06.c

# Build the labyrinth object
labyrinth.o: labyrinth.c
	$(CC) $(CFLAGS) -c labyrinth.c

# Build the maze_generator object
maze_generator.o: maze_generator.c
	$(CC) $(CFLAGS) -c maze_generator.c


# All Objects
homework06_obj := homework06.o labyrinth.o maze_generator.o

# Compilation
homework06: $(homework06_obj)
	$(CC) $(CFLAGS) -o homework06 $(homework06_obj) -lm
	valgrind --leak-check=full ./homework06

# All executables
executable_names := homework06 maze_generator labyrinth

# Make all
all: $(executable_names)

# Make clean
clean:
	rm -rf *.o *.swp $(executable_names)
