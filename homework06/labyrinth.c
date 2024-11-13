#include "labyrinth.h"

maze* maze_constructor(){

    maze* temp_node = (maze*)malloc(sizeof(maze)); // allocate a temperary node using malloc and make it the size of maze and cast it to maze
    // dynamically allocate temp_node to be the size of maze

	temp_node->start_cell = NULL; // set that temperary nodes start cell to NULL
    // temp_node is pointing to start_cell which is NULL
    
    return temp_node; 

}

maze_cell* mc_constructor(maze_cell* previous, int curr_id, char generate_char){

    maze_cell* maze_ptr = (maze_cell*)malloc(sizeof(maze_cell)); // allocate a maze pointer
    maze_ptr->left = NULL; // left component of struct is NULL
    maze_ptr->right = NULL; // right component of struct is NULL
    maze_ptr->middle = NULL; // middle component of struct is NULL
    maze_ptr->previous = previous; // previous component of struct is the value of the previous value passed by reference in
    maze_ptr->unique_id = curr_id; // unique id component of struct is current id that is passed in
    maze_ptr->generate_char = generate_char; // generate character component of struct is character passed in
    maze_ptr->whats_here = which_item(generate_char); // whats here component of struct is the value of the which item function using the generated character

    return maze_ptr;

}

item which_item( char generate_char ){

    int result; // initialize result
    result = generate_char%6; // set result to the module of the character/6 (provides val 0-5)
    if(result == 2){
        return SPELLBOOK;
    }
    else if(result == 4){
        return POTION;
    }
    else if(result == 5){
        return WAND;
    }
    else{
        return NOTHING;
    }
}