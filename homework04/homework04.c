/********************************
 * File Name: homework04.c
 * Student's Name: Sarah Harrington
 * Student's Notre Dame NetID: sharrin3
 * Date Started: 10/07/2024
 *******************************/

#include "sort_and_search.h"

#define ARRAY_LEN 10 // define array length

int main(){
  int int_array[ARRAY_LEN], search_val; // initialize

  fill_array(int_array); // fill array with vals

  fprintf(stdout, "Unsorted Array: "); 
  print_array(int_array); // print array before sort

  fprintf(stdout, "Sorted Array: ");
  insertion_sort(int_array); // sort array
  print_array(int_array); // print array after sort

  fprintf(stdout, "Enter a value to search for (or -1 to finish): ");
  scan_value(&search_val); // scan in search value
  while(search_val != -1){ // while loop to search array until search val is -1
    binary_search(int_array, search_val); // binary search array for search val
    fprintf(stdout, "Enter a value to search for (or -1 to finish): ");
    scan_value(&search_val); // enter another value until -1 is selected to finish
  }
}