#include "maze_generator.h"
#include "labyrinth.h"

int main( const int argc, const char* argv[] ){
    if( argc != 2 ){
        fprintf( stderr, "Need two inputs\n" );
        return EXIT_FAILURE;
    }

    // dynamically allocate maze_ptr using maze_constructor function
    maze* maze_ptr = maze_constructor(); 

    generate_maze(maze_ptr, argv[1]);

    print_maze(maze_ptr -> start_cell);

    delete_maze(maze_ptr -> start_cell);

    // free maze ptr
    free(maze_ptr);

    return EXIT_SUCCESS;
}