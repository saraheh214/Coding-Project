/********************************
 * File Name: homework05.h
 * Student's Name: Sarah Harrington
 * Student's Notre Dame NetID: sharrin3
 * Date Started: 10/17/2024
 *******************************/
#include "rotations.h"
 /* Main Function */

 int main(void){
    long unsigned int size; // initialize size
    long unsigned int num_rotations; // initalize number of rotations
    char direction; // initialize direction
    int* rotate_array; // initialize the rotation array
    int cont = 1; // initialize conter
    while(cont == 1){
      fprintf(stdout, "Enter the size, number of rotations, and direction (L or R): ");
      if(fscanf(stdin, "%lu %lu %c", &size, &num_rotations, &direction)){}

      if(direction == 'L'|| direction == 'R'){
         alloc_mem(size, &rotate_array); // send size and address of array
         get_inputs(size, rotate_array); // fill array
         if(direction =='L'){
            rotate_left(size, num_rotations, rotate_array);
         }
         else if(direction =='R'){
            rotate_right(size, num_rotations, rotate_array);
         }
         free_memory(&rotate_array); // free array
      }
      else{
         fprintf(stdout, "Please enter either L or R for direction \n"); // if invalid direction 
      }

      fprintf(stdout, "Would you like to continue? (1 = continue 2 = stop): ");
      if(fscanf(stdin, "%d", &cont)){}
      fprintf(stdout, "\n");
    }
 }

 