#include "labyrinth.h"

maze* maze_constructor(){

    maze* temp_node = (maze*)malloc(sizeof(maze));
    // dynamically allocate temp_node to be the size of maze

	temp_node->start_cell = NULL; 
    // temp_node is pointing to start_cell which is NULL
    
    return temp_node; 

}

maze_cell* mc_constructor(maze_cell* previous, int curr_id, char generate_char){

    // Your work goes here
    maze_cell* maze_ptr = (maze_cell*)malloc(sizeof(maze_cell));
    maze_ptr->left = NULL;
    maze_ptr->right = NULL;
    maze_ptr->middle = NULL;
    maze_ptr->previous = previous;
    maze_ptr->unique_id = curr_id;
    maze_ptr->generate_char = generate_char;
    maze_ptr->whats_here = which_item(generate_char);

    return maze_ptr;

}

item which_item( char generate_char ){

    // Your work goes here
    int result;
    result = generate_char%6;
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