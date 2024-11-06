#include "labyrinth.h"

maze* maze_constructor(){

    typedef struct maze{
        struct maze_cell* start_cell; // added for security 
    }maze;

}

maze_cell* mc_constructor(maze_cell* previous, int curr_id, char generate_char){

    // Delete these 4 lines of code (include so initial compilation works only)
    (void)previous;
    (void)curr_id;
    (void)generate_char;
    return NULL;

    // Your work goes here

}

item which_item( char generate_char ){

    // Delete these two lines of code (include so initial compilation works only)
    (void)generate_char;
    return NOTHING;

    // Your work goes here

}