#include <iostream>
#include <vector>
#include <stack>
#include <queue>

void func( std::vector<int>& the_vec ){

    std::stack<int> the_stack;
    // last in, first out 
    std::queue<int> the_queue;
    // first in, first out
    for( long unsigned int iter = 0; iter < the_vec.size(); ++iter ){

        if(the_vec.at(iter) % 2 == 0 ) // if even then push to stack
            the_stack.push( the_vec.at(iter) );

        else // if not push to queue
            the_queue.push( the_vec.at(iter) );

    }

    while( !the_stack.empty() ){

        std::cout << the_stack.top() << " ";

        the_stack.pop();
    }

    while( !the_queue.empty() ){

        std::cout << the_queue.front() << " ";

        the_queue.pop();
    }

    std::cout << std::endl;

}

int main()
{
    std::vector<int> the_vec = {22, 7, 14, 45, 8, 81, 24, 27};

    func( the_vec );

    return 0;
}
