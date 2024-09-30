#include <stdio.h>

/* Put the compiler directive here */
#define ARRAY_LEN 6

/* When we copy to static_basic_prb.c, put the function declaration */

int main(){

  /* Allocate the static integer values */
int int_array[] = {12, 16, -22, 19, 5, 11}; // 24 bytes bc 6*4

char char_array[] = "Go Irish"; // 9 bytes bc 9*1

  /* Iterate through the array and print the values */
fprintf(stdout, "%p %p\n", int_array, char_array);

int iter;

for(iter = 0; iter<ARRAY_LEN; iter++){
  fprintf(stdout, "%d %p %d\n", iter, &int_array[iter], int_array[iter]);
}

for(iter = 0; iter < 9; iter++){
  fprintf(stdout, "%d %p %c\n", iter, &char_array[iter], char_array[iter]);
}

  return 0;
}

/* When we copy to static_basic_prb.c, put the function definition */
