# Author: Sarah Harrington
# E-mail: sharrin3@nd.edu
#
# gcc is for the compiler for C
CC := gcc

# CFLAGS are the compiler flags for when we compile C code in this course
FLAGS := -O2 -g -Wall -Wextra -Wconversion -Werror
CFLAGS := -std=c2x $(FLAGS)

# Create the Pallel Lib Library
sort_and_search.o: sort_and_search.c
	$(CC) $(CFLAGS) -c sort_and_search.c

# Create the Pallel Run
homework04.o: homework04.c
	$(CC) $(CFLAGS) -c homework04.c

# Parallel Program Objects
homework04_objs := sort_and_search.o homework04.o

#Executables
homework04: $(homework04_objs)
	$(CC) $(CFLAGS) -o homework04 $(homework04_objs)
	./homework04

# Executable Names
executable_names := homework04

# Make all
all: $(executable_names)

# Make clean
clean:
	rm -rf *.o *.swp $(executable_names) 