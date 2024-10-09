/********************************
 * File Name: sort_and_search.c
 * Student's Name: Sarah Harrington
 * Student's Notre Dame NetID: sharrin3
 * Date Started: 10/07/2024
 *******************************/

#include "sort_and_search.h"

#define ARRAY_LEN 10

/* Function Definition */

void fill_array(int int_array[]){
  int iter; // initialize incrementing

  for(iter = 0; iter<ARRAY_LEN; iter++){ // loop through each array spot
    fprintf( stdout, "Enter an integer greater than 0: ");    
    scan_value(&int_array[iter]); // scan in value for said array spot
  }
}

void print_array(int int_array[]){ 
  int iter; // initialize incrementing

  for(iter = 0; iter<ARRAY_LEN; iter++){ // loop through each arrya spot
    if(iter == ARRAY_LEN-1){
      fprintf(stdout, "%d\n", int_array[iter]); // print array value + new line
    }
    else
      fprintf(stdout, "%d ", int_array[iter]); // print array value
  }
}

void insertion_sort(int int_array[]){
  int iter; // initialize incrementing

  for(iter = 0; iter<ARRAY_LEN; iter++){ // loop through each array spot
    int current_value = int_array[iter]; // set current value holder
    int start = iter-1; // set start val
    int i; // set iterator

    for(i = start; i>=0; i--){ // loop through previous values
      if(current_value < int_array[i]){ // check it value is smaller
        int_array[i+1] = int_array[i]; // is so, move cvalue to the right 
        int_array[i] = current_value; // insert the value
        }
    }
  }
}

void scan_value(int* search_val){
  if(fscanf(stdin, "%d", search_val)){} // scan value in
}

int binary_search(int int_array[], int value){
    int min = 0; // initialize min
    int max = ARRAY_LEN - 1; // initialize max

    fprintf(stdout, "Searching for %d...\n", value); 
    while(min <= max){ // loop until min > max
        int midpoint = (min + max)/2; // solve midpoint

        if(int_array[midpoint] == value){ // check if array val = value
            fprintf(stdout, "%d found at int_array[%d]\n", value, midpoint);
            return midpoint;
        }
        else if(int_array[midpoint] < value){ // check if array val < value
            min = midpoint+1; // reset min
        }
        else{
            max = midpoint-1; // reset max
        }
    }
    fprintf(stdout, "%d not found in array \n", value);
    return -1;
}

