/**********************************************
* File: namespace_fixed.cpp
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* An example of fixing the namespace conflict
* in namespace.cpp
**********************************************/
#include <iostream>

#define COUT std::cout 

#define ENDL std::endl

namespace foo{
	
	int cout(){
		return 10;
	}
}

int main(){
	
	// std::cout << foo::cout() << std::endl; // now we use compiler directives
	COUT << foo::cout() << ENDL; // or we can use the define compiler directives

	return 0;
	
}
