# Author: Sarah Harrington
# E-mail: sharrin3@nd.edu
#
# gcc is for the compiler for C
CC := gcc

# CFLAGS are the compiler flags for when we compile C code in this course
FLAGS := -O2 -g -Wall -Wextra -Wconversion -Werror
CFLAGS := -std=c2x $(FLAGS)

# Create the Pallel Lib Library
rotations.o: rotations.c
	$(CC) $(CFLAGS) -c rotations.c

# Create the Pallel Run
homework05.o: homework05.c
	$(CC) $(CFLAGS) -c homework05.c

# Parallel Program Objects
homework05_objs := rotations.o homework05.o

#Executables
homework05: $(homework05_objs)
	$(CC) $(CFLAGS) -o homework05 $(homework05_objs)
		valgrind --leak-check=full ./homework05

# Executable Names
executable_names := homework05

# Make all
all: $(executable_names)

# Make clean
clean:
	rm -rf *.o *.swp $(executable_names) 

