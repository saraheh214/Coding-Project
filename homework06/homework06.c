#include "maze_generator.h"
#include "labyrinth.h"

int main( const int argc, const char* argv[] ){
    if( argc != 2 ){ // checks to make sure 2 inputs were added and if not returns exit failure
        fprintf( stderr, "Need two inputs\n" );
        return EXIT_FAILURE;
    }

    // dynamically allocate maze_ptr using maze_constructor function
    maze* maze_ptr = maze_constructor(); // creates a pointer using the maze constructor function that points from register to maze
    // this will protect the maze through encapsulation
    generate_maze(maze_ptr, argv[1]); // passes in the maze pointer and inputed string (arg[v])

    print_maze(maze_ptr -> start_cell); // prints maze pointer

    delete_maze(maze_ptr -> start_cell); // prints maze pointer

    // free maze ptr
    free(maze_ptr); // frees pointer

    return EXIT_SUCCESS;
}