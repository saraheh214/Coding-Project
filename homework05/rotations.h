/********************************
 * File Name: rotations.h
 * Student's Name: Sarah Harrington
 * Student's Notre Dame NetID: sharrin3
 * Date Started: 10/17/2024
 *******************************/

 #ifndef ROTATIONS_H
 #define ROTATIONS_H

 /* Include Libraries */
 #include <stdio.h>
 #include <stddef.h>
 #include <stdlib.h>

 /* Function Declaration */

 /********************************
 * Function Name: alloc_mem
 * Pre-Conditions: long unsigned int size, int** rotate_array
 * Post-Conditions: void
 * 
 * allocate memory to the dynamic array
 *******************************/
 void alloc_mem(long unsigned int size, int** rotate_array);

  /********************************
 * Function Name: free_memory
 * Pre-Conditions: int** rotate_array
 * Post-Conditions: void
 * 
 * free memory for the dynamic array
 *******************************/
 void free_memory(int** rotate_array);
 
  /********************************
 * Function Name: get_inputs
 * Pre-Conditions: long unsigned int size, int** rotate_array
 * Post-Conditions: void
 * 
 * allow user to use fscanf to input array values
 *******************************/
 void get_inputs(long unsigned int size, int* rotate_array);

 /********************************
 * Function Name: rotate_left
 * Pre-Conditions: long unsigned int size, long unsigned int num_rotations, int** rotate_array
 * Post-Conditions: void
 * 
 * rotate array to the left
 *******************************/
 void rotate_left(long unsigned int size, long unsigned int num_rotations, int* rotate_array);

 /********************************
 * Function Name: rotate_right
 * Pre-Conditions: long unsigned int size, long unsigned int num_rotations, int** rotate_array
 * Post-Conditions: void
 * 
 * rotate array to the right
 *******************************/
 void rotate_right(long unsigned int size, long unsigned int num_rotations, int* rotate_array);

#endif