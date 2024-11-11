#include <iostream>
#include <cstdlib>
#include <string>

void pass_by_ref( int* print_int, double* print_dbl ){

	std::cout << print_int << " " << print_dbl << std::endl;
	// prints out content of register - address its pointing to

	std::cout << &print_int << " " << &print_dbl << std::endl;
	// address holding register itself

	std::cout << *print_int << " " << *print_dbl << std::endl;
	// deref by getting val pointing to
}

void call_by_ref( int& print_int, double& print_dbl ){
	
	// In-class code here
	std::cout << print_int << " " << print_dbl << std::endl;
	// prints actual value, not address its pointing to

	std::cout << &print_int << " " << &print_dbl << std::endl;
	// prints address of variable in main

	++print_int; // no need to deref
	print_dbl*=2; // no need to deref
}

int main(){
	
	int print_int = 10;
	double print_dbl = -22.7;
	
	std::cout << "Hello, World" << std::endl;
	
	std::cout << "Addrs in main: " << &print_int << " " << &print_dbl << std::endl;
	
	// Review C++ Example
	pass_by_ref( &print_int, &print_dbl ); // explicitly passing in addresses

	// Initial Call by Reference
	call_by_ref( print_int, print_dbl ); // just send in variable names

	// Call again to show changes
	call_by_ref( print_int, print_dbl );
	
	return EXIT_SUCCESS;
}