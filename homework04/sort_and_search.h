/********************************
 * File Name: sort_and_search.h
 * Student's Name: Sarah Harrington
 * Student's Notre Dame NetID: sharrin3
 * Date Started: 10/07/2024
 *******************************/

#ifndef SORT_AND_SEARCH_H
#define SORT_AND_SEARCH_H

/* Include Libraries */

#include <stdio.h>

/* Function Declaration */

/********************************
 * Function Name: fill_array
 * Pre-Conditions: int int_array[]
 * Post-Conditions: void
 * 
 * Read in 10 integers from terminala nd store in array
 *******************************/
void fill_array(int int_array[]);

/********************************
 * Function Name: print_array
 * Pre-Conditions: int int_array[]
 * Post-Conditions: void
 *
 * Print contents of array 
 *******************************/
void print_array(int int_array[]);

/********************************
 * Function Name: insertion_sort
 * Pre-Conditions: int int_array[]
 * Post-Conditions: void
 *
 * Perform insertion sort algorithm
 *******************************/
void insertion_sort(int int_array[]);

/********************************
 * Function Name: scan_value
 * Pre-Conditions: int* serach_val
 * Post-Conditions: void
 *
 * Asks user what value to serach for then return by reference
 *******************************/
void scan_value(int* search_val);

/********************************
 * Function Name: binary_search
 * Pre-Conditions: int int_array[], int value
 * Post-Conditions: int
 *
 * Uses binary search to find value requested by user
 *******************************/
int binary_search(int int_array[], int value);

#endif