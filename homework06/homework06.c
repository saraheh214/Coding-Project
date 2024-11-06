#include "maze_generator.h"
#include "labyrinth.h"

int main( const int argc, const char* argv[] ){

    if( argc != 2 ){
        fprintf( stderr, "Need two inputs\n" );
        return EXIT_FAILURE;
    }

    // allocate maze pointer for size of maze constructor
    maze* maze_ptr = (maze*)malloc(sizeof(maze_constructor))

    // free maze ptre
    free(maze_ptr);

    return EXIT_SUCCESS;
}