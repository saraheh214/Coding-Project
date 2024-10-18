/********************************
 * File Name: rotations.c
 * Student's Name: Sarah Harrington
 * Student's Notre Dame NetID: sharrin3
 * Date Started: 10/17/2024
 *******************************/
#include "rotations.h"

 /* Function Definition */

 void alloc_mem(long unsigned int size, int** rotate_array){
   // Note: doing ** opposed to * goes to the positions in the array not just the array itself

    /* Allocate the memory */
   *rotate_array = (int *) malloc( size * sizeof(int *) ) ;
   // first malloc allocates the size * number of bytes in an int to create the array
   // this is a void pointer so we cast it to int * so now it is an int pointer
   // this is stored as the contents of the rotate_array

   /* Check for memory leak */
   if (*rotate_array == NULL) // if nothing in array then exit program
   {
      fprintf(stderr, "Oops, we're out of memory\n") ; 
      exit(-1);
   }
 }

 void free_memory(int** rotate_array){

    free(*rotate_array); // free array itself
 }

void get_inputs(long unsigned int size, int* rotate_array){
    long unsigned int iter; // initialize iterator

    fprintf(stdout, "Input the %lu values: \n", size);

    for(iter = 0; iter<size; iter++){
        fprintf(stdout, "Value at [%lu]: ", iter);
        if(fscanf(stdin, "%d", &rotate_array[iter])){} // use fscanf to dynamically populate array
    }
}

void rotate_left(long unsigned int size, long unsigned int num_rotations, int* rotate_array){
   long unsigned int rotated_index; //initialize index for rotated array
   long unsigned int iter; // initialize iterator
   long unsigned int rotations; // initialize number of rotations

   fprintf(stdout, "Before Rotation: \n"); // print initial array
   for(iter = 0; iter<size; iter++){
      fprintf(stdout, "%d at %p \n", rotate_array[iter], (void *)&rotate_array[iter]); // use (void *) to point to the location of array value in the initial array
   }

   rotations = num_rotations % size; // find remained when dividing rotations by size to run through faster - ie. if you do 6 rotations of 5 value array you only really rotate once
   fprintf(stdout, "After Rotation: \n");
   for(iter = 0; iter<size; iter++){
      rotated_index = (iter + rotations) % size; // since moving left, new value will be to the right by however many rotations then use the remainder when divided by size for location - ie. if iter = 4 and rotations = 3 but in 5 value array you will use val from position 2
      fprintf(stdout, "%d at %p \n", rotate_array[rotated_index], (void *)&rotate_array[rotated_index]); // use (void *) to point to the location of array value in the initial array
      // we want to be pointing to the location in the initial array so we use casting 
   }
}

void rotate_right(long unsigned int size, long unsigned int num_rotations, int* rotate_array){
   long unsigned int rotated_index; // initialize index for rotated array
   long unsigned int iter; // initialize iterator
   long unsigned int rotations; // initialize number of rotations

   fprintf(stdout, "Before Rotation: \n");
   for(iter = 0; iter<size; iter++){
      fprintf(stdout, "%d at %p \n", rotate_array[iter], (void *)&rotate_array[iter]);
   }

   rotations = num_rotations % size;
   fprintf(stdout, "After Rotation: \n");
   for(iter = 0; iter<size; iter++){
      rotated_index = (size + iter - rotations) % size;
      fprintf(stdout, "%d at %p \n", rotate_array[rotated_index], (void *)&rotate_array[rotated_index]);
   }
}