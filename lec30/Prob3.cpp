#include <iostream>

void func( std::pair<int, int>& the_pair ){ // called by reference

    std::cout << the_pair.first << " " << the_pair.second << std::endl;
    
    if( the_pair.first == 0 ){
        int temp = the_pair.first;
        the_pair.first = the_pair.second;
        the_pair.second = temp;
        return;
    }
    
    the_pair.first--; // pair is now 3
    the_pair.second++; // pair is now 11
    
    func( the_pair ); // call
    
    the_pair.first++;
    the_pair.second++;
    
    std::cout << the_pair.first << " " << the_pair.second << std::endl;
}

int main(){

    std::pair<int, int> the_pair( {4, 10} );
    func( the_pair );
    return 0;
    
}
