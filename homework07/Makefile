# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for Lecture 31

# G++ is for the GCC compiler for C++
PP := g++

# CFLAGS are the compiler flages for when we compile C code in this course
FLAGS := -O2 -g -Wall -Wextra -Wconversion -Wshadow -Werror -lm
CXXFLAGS := -std=c++2a $(FLAGS)


# JKFF Class Compilation:
JKFF.o: JKFF.cpp
	$(PP) $(CXXFLAGS) -c JKFF.cpp

# aggregate Example
# Command: make aggregate 
homework07.o: homework07.cpp
	$(PP) $(CXXFLAGS) -c homework07.cpp

homework07_obj := homework07.o JKFF.o

homework07: $(homework07_obj)
	$(PP) $(CXXFLAGS) -o homework07 $(homework07_obj)
	./homework07 JK_test_1.txt

# Make all
executables := homework07

# Make clean
clean :
	rm -rf *.o $(executables)