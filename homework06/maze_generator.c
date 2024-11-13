#include "maze_generator.h"

void generate_maze( maze* the_maze, const char* key_string ){ // pass pointer to maze and pointer to key_string
    int curr_id = 1; // set first id to 1
    int loc = 0; // set first location to 0 bc indexing starts at 0

    the_maze->start_cell = mc_constructor(NULL, curr_id, key_string[loc]); // use constructor function to set start cell of the maze to the first cell

    while(key_string[loc] != '\0'){ 
        generate_cell(the_maze->start_cell, key_string, &curr_id, &loc); // if not at the end of the key string, then use generate cell to create a cell containing the previous cell value, the id, and character
    }
}

void generate_cell(maze_cell* curr_cell, const char* key_string, int* curr_id, int* char_loc){ // passes pointers to all components of new cell

    (*char_loc) += 1; // increment value inside character location

    if( key_string[*char_loc] == '\0'){
        curr_cell -> whats_here = TREASURE; // sets whats here to TREASURE if very last value 
        return;
    } 
    else if( key_string[*char_loc] == ' '){
        return;
    }

    int direction = key_string[*char_loc] % 4; // solves direction by taking module of character AT location/4 so gets val between 0-3 this is mapped to LEFT, RIGHT, MIDDLE, and GO BACK as compiler directive

    if( direction == LEFT){
        if( curr_cell -> left == NULL ){
            (*curr_id) += 1; // if nothing to the left you must generate a new cell with an incremented id
            curr_cell -> left = mc_constructor(curr_cell, *curr_id, key_string[*char_loc]); // construct cell
        }
        generate_cell(curr_cell -> left, key_string, curr_id, char_loc); // recursive statement that will look to next cell
    }

    if( direction == MIDDLE){
        if( curr_cell -> middle == NULL ){
            (*curr_id) += 1; // if nothing to the middle you must generate a new cell with an incremented id
            curr_cell -> middle = mc_constructor(curr_cell, *curr_id, key_string[*char_loc]); // construct cell
        }
        generate_cell(curr_cell -> middle, key_string, curr_id, char_loc); // recursive statement that will look to next cell
    }

    if( direction == RIGHT){
        if( curr_cell -> right == NULL ){
            (*curr_id) += 1; // if nothing to the right you must generate a new cell with an incremented id
            curr_cell -> right = mc_constructor(curr_cell, *curr_id, key_string[*char_loc]); // construct cell
        }
        generate_cell(curr_cell -> right, key_string, curr_id, char_loc); // recursive statement that will look to next cell
    }
    
    if( direction == GO_BACK ){
        if( curr_cell -> previous != NULL){
            generate_cell(curr_cell -> previous, key_string, curr_id, char_loc); // recursive statement that will look to next cell
        }
        else{
            return;
        }
    }
}

void print_maze( maze_cell* curr_cell ){ 
    // Your work goes here
    if(curr_cell == NULL){
        return;
    }
    else if(curr_cell != NULL){
        fprintf(stdout, "ID: %d generated using %c\n", curr_cell->unique_id, curr_cell->generate_char); // print the id and character fron the current cell 
        if(curr_cell->whats_here == NOTHING){
            fprintf(stdout, "Nothing's here! Let's keep looking, Scooby Doo...\n");
        }
        else if(curr_cell->whats_here == SPELLBOOK){
            fprintf(stdout, "We found a Spellbook! Be careful what you chant... \n");
        }
        else if(curr_cell->whats_here == POTION){
            fprintf(stdout, "We found a Potion! Check to se what the potion is before you drink it.\n");
        }
        else if(curr_cell->whats_here == WAND){
            fprintf(stdout, "We found a Wand! It's pronounced levio-SAH.\n");
        }
        else if(curr_cell->whats_here == TREASURE){
            fprintf(stdout, "We found the treasure! WE'RE RICH!\n");
        }
    }
    if(curr_cell->left != NULL){
        fprintf( stdout, "There is a path to the left in cell %d!\n", curr_cell->unique_id);
        print_maze( curr_cell->left ); // recursively print next cell 
    }
    if(curr_cell->middle != NULL){
        fprintf( stdout, "There is a path to the middle in cell %d!\n", curr_cell->unique_id);
        print_maze( curr_cell->middle );
    }
    if(curr_cell->right != NULL){
        fprintf( stdout, "There is a path to the right in cell %d!\n", curr_cell->unique_id);
        print_maze( curr_cell->right );
    }
        fprintf( stdout, "There are no more valid paths foward in %d! Going backwards.\n", curr_cell->unique_id);

}

void delete_maze(maze_cell* curr_cell){

    // Your work goes here
    if(curr_cell != NULL){
        delete_maze( curr_cell->left ); // recursively delete cell
        delete_maze( curr_cell->middle );
        delete_maze( curr_cell->right );
        free(curr_cell); // free cell
    }

}
