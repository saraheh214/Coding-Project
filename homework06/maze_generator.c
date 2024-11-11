#include "maze_generator.h"

void generate_maze( maze* the_maze, const char* key_string ){
    int curr_id = 1;
    int loc = 0;

    the_maze->start_cell = mc_constructor(NULL, curr_id, key_string[loc]);

    while(key_string[loc] != '\0'){
        generate_cell(the_maze->start_cell, key_string, &curr_id, &loc);
    }
}

void generate_cell(maze_cell* curr_cell, const char* key_string, int* curr_id, int* char_loc){

    (*char_loc) += 1; // uncertain about this part

    if( key_string[*char_loc] == '\0'){
        curr_cell -> whats_here = TREASURE;
        return;
    } 
    else if( key_string[*char_loc] == ' '){
        return;
    }

    int direction = key_string[*char_loc] % 4;

    if( direction == LEFT){
        if( curr_cell -> left == NULL ){
            (*curr_id) += 1;
            curr_cell -> left = mc_constructor(curr_cell, *curr_id, key_string[*char_loc]);
        }
        generate_cell(curr_cell -> left, key_string, curr_id, char_loc);
    }

    if( direction == MIDDLE){
        if( curr_cell -> middle == NULL ){
            (*curr_id) += 1;
            curr_cell -> middle = mc_constructor(curr_cell, *curr_id, key_string[*char_loc]);
        }
        generate_cell(curr_cell -> middle, key_string, curr_id, char_loc);
    }

    if( direction == RIGHT){
        if( curr_cell -> right == NULL ){
            (*curr_id) += 1;
            curr_cell -> right = mc_constructor(curr_cell, *curr_id, key_string[*char_loc]);
        }
        generate_cell(curr_cell -> right, key_string, curr_id, char_loc);
    }
    
    if( direction == GO_BACK ){
        if( curr_cell -> previous != NULL){
            generate_cell(curr_cell -> previous, key_string, curr_id, char_loc);
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
        fprintf(stdout, "ID: %d generated using %c\n", curr_cell->unique_id, curr_cell->generate_char);
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
        print_maze( curr_cell->left );
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
        delete_maze( curr_cell->left );
        delete_maze( curr_cell->middle );
        delete_maze( curr_cell->right );
        free(curr_cell); // check this part
    }

}
