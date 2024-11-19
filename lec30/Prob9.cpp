#include <iostream>
#include <unordered_map>

int func( std::unordered_map<int, int>& the_map, int val ){

    if( the_map.contains( val ) ){
        std::cout << "printing from contains" << std::endl;
        std::cout << val << " " << the_map.at(val) << std::endl;

        return the_map.at(val);
    }

    if( val == 0 || val == 1){
        the_map.insert( {val, 1} );
        std::cout << "printing from or" << std::endl;
        std::cout << val << " " << the_map.at(val) << std::endl;

        return 1;
    }
    std::cout << "printing pre insert" << std::endl;
    int result = func(the_map, val - 1) + func(the_map, val - 2); // memoization
    the_map.insert( {val, result} );
    std::cout << "printing post insert" << std::endl;
    std::cout << val << " " << the_map.at(val) << std::endl;

    return result;
}

int main( ){

    int val = 5;

    std::unordered_map<int, int> the_map;

    std::cout << func(the_map, val) << std::endl;

}