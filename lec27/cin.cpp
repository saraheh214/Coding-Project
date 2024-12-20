/**********************************************
* File: cin.cpp
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file demonstrates the benefits of cin in C++
**********************************************/

#include <iostream> /*C++ version of stdio.h*/
#include <cstdlib> /* Equivalent of stdlib.h */

int main(){

	int tempX;
	unsigned int unsigX;
	float floatY;
	
	std::cout << "Input an integer: "; // fprintf( stdout, "Input an integer: ")
	
	if(std::cin >> tempX){ // equivilent of fscanf( stdin, "%d", &tempX)
		
		std::cout << "The integer is " << tempX << std::endl; // same as print
	}
	else{
		std::cerr << tempX << " is not a valid Integer" << std::endl;
		exit(-1); // same as exit failure 
	}

	std::cout << "Input an unsigned integer: ";		
	if(std::cin >> unsigX){
		
		std::cout << "The unsigned integer value is " << unsigX << std::endl;
	}
	else{
		std::cerr << unsigX << " is not a valid unsigned Integer" << std::endl;
		exit(-1);
	}

	std::cout << "Input a float: ";	
	
	if(std::cin >> floatY){ // dont need to cast floats anymore 
		
		std::cout << "The float value is " << floatY << std::endl;
	}
	else{
		std::cerr << floatY << " is not a valid Float" << std::endl;
		exit(-1);
	}
	
	return 0;
}
