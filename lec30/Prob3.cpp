#include <iostream>

void func( std::pair<int, int>& the_pair ){ // called by reference
    std::cout << "Print 1 "<< std::endl;
    std::cout << the_pair.first << " " << the_pair.second << std::endl;
    std::cout << &(the_pair.first) << " " << &(the_pair.second) << std::endl;

    if( the_pair.first == 0 ){
        int temp = the_pair.first;
        the_pair.first = the_pair.second;
        the_pair.second = temp;
        return;
    }
    
    the_pair.first--; // pair is now 3
    the_pair.second++; // pair is now 11
    
    std::cout << "Calling func" << std::endl;
    func( the_pair ); // call
    std::cout << "Passed func" << std::endl;
    
    the_pair.first++;
    the_pair.second++;
    std::cout<<"Print 2" << std::endl;
    std::cout << the_pair.first << " " << the_pair.second << std::endl;
}

int main(){

    std::pair<int, int> the_pair( {4, 10} );
    func( the_pair );
    return 0;
    
}
