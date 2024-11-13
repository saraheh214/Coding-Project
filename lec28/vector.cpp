#include <iostream> // similar to stdio.h
#include <vector> // need to include library from STL

/* Compiler Directives for std::coutand std::endl */
#define COUT std::cout
#define ENDL std::endl
#define VECTOR std::vector

int main()
{
    
    VECTOR< int > int_vector; // type of template is inside < >
    
    COUT << "Before vector" << " ";
    COUT << &int_vector << " "; // physical location of value 
    COUT << int_vector.size() << " ";
    COUT << int_vector.capacity() << ENDL;

    for( int iter = 0; iter < 10; ++iter ){
        /* Push back, then print the size and capacity */
        int_vector.push_back(iter*2);// int_vector = container
        // push back goes to end of array and adds another value on

        COUT << int_vector.at(iter) << " ";
        COUT << &(int_vector.at(iter)) << " "; // physical location of value 
        COUT << int_vector.size() << " ";
        COUT << int_vector.capacity() << ENDL;
    }
    
    // Print the base address of the vector
    
    COUT << "Before vector 2" << " ";
    COUT << &int_vector << " "; // physical location of value 
    COUT << int_vector.size() << " ";
    COUT << int_vector.capacity() << ENDL;
    
    for( int iter = 0; iter < 10; ++iter ){        

        /* Push back, then print the size and capacity */
        int_vector.push_back(iter*2);// int_vector = container
        // push back goes to end of array and adds another value on

        COUT << int_vector.at(iter) << " ";
        COUT << &(int_vector.at(iter)) << " "; // physical location of value 
        COUT << int_vector.size() << " ";
        COUT << int_vector.capacity() << ENDL;
    }   
	

    return 0;
}