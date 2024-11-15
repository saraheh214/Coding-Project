#include <iostream>
#include <vector>
#include <stack>

int main(){

    std::vector<int> the_vec(4, 10); // makes initial vector with 4 values of 10 - 10, 10, 10, 10
    // vector: allows us to append
    for( int iter = 0; iter < 5; ++iter ){
        the_vec.push_back( iter ); // adds val to end of current vector so now 10, 10, 10, 10, 0, 1, 2, 3, 4
    }

    std::stack<int> the_stack;
    // singularlly linked list, first in last out 
    for( long unsigned int iter = 0; iter < the_vec.size(); ++iter ){ // size now 9
        std::cout << the_vec.at(iter) << " "; // prints all element out 
        the_stack.push( the_vec.at(iter) ); // 4, 3, 2, 1, 0, 10, 10, 10, 10 - adds next one in front of previous 
    }
    std::cout << std::endl; // 4, 3, 2, 1, 0, 10, 10, 10, 10 printed out 

    while( !the_stack.empty() ){
        std::cout << the_stack.top() << " ";
        the_stack.pop(); // takes the value out 
    }

    std::cout << std::endl;
    return 0;
}
