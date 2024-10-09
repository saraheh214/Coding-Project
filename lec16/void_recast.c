#include <stdio.h>
#include <stdlib.h> // 

int main()
{

  /* Step 1a - Allocate a length of four */
  long unsigned int array_len = 4;

  /* Step 1b - Allocate a void pointer array */
  void* void_array = malloc(array_len * sizeof(char) ); // must use malloc to allocate mem, use sizeof(char) for size whcih will be important when we build up to ints and strucs

  fprintf(stdout, "%p %p\n", &void_array, void_array);

  /* Step 3 - Using pointer arithmetic and ASCII hex, save values A, B, C, D */
  // (char *)(void_array + 0*sizeof(char)) // casting a character point, tells OS that info at the location should be character pointer
  *(char *)(void_array + 0*sizeof(char)) = 0x41; // now adding that extra * dereferences so you have the address, youre at the house, and the * lets you in, 0x41 is A in hex
  *(char *)(void_array + 1*sizeof(char)) = 0x42;
  *(char *)(void_array + 2*sizeof(char)) = 0x43; 
  *(char *)(void_array + 3*sizeof(char)) = 0x44; 

  /* Step 4 - Loop through and print addresses */
  long unsigned int iter;
  for(iter = 0; iter<array_len; iter++){
    fprintf(stdout, "%c %p\n",

      *(char *)(void_array + iter*sizeof(char)),

        void_array + iter*sizeof(char)); // for address just remove the * that dereferences
  }


  /* Step 5 - Loop through and print addresses */



  /* Step 6 - Cast the address to int and print the result */
  fprintf( stdout, "%d %p\n", *(int *)void_array, void_array);

  /* Step 1c - Free the void array*/
  free(void_array);

  return 0;
}
