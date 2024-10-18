#include <stdio.h>
#include <stdlib.h>

/* Step 3a - Writing a function add_vals_to_dyn_array to save the inputs */
/* Step 4b - Revisiting the file with security */
void add_vals_to_dyn_array( int* dyn_int_array, int argc, char* argv[]);

void print_dyn_array(int* dyn_int_array, int length);

/* Step 1 - Change the input */
/* Step 4a - Revisiting the file with security */
int main( int argc, char* argv[] ){

  /* Step 2 - Example of checking */
  if( argc < 2 ){
    fprintf( stderr, "Need more than one input\n" );

    return EXIT_FAILURE; 
  }

  int* dyn_int_array = (int *)malloc( (long unsigned int)(argc-1) * sizeof(int) );

  /* 3c - Make the call in main */
  add_vals_to_dyn_array(dyn_int_array, argc, argv); // remmeber arrays naturally passed by reference

  print_dyn_array( dyn_int_array, argc - 1 );

  free( dyn_int_array );

  return EXIT_SUCCESS;

}

/* Step 3b - Writing a function add_vals_to_dyn_array to save the inputs */
void add_vals_to_dyn_array( int* dyn_int_array, int argc, char* argv[]){
  int iter;

  for(iter = 1; iter<argc; ++iter){
    dyn_int_array[iter - 1] = atoi(argv[iter]); // MUST HAVE ATOI TO MAKE SAME TYPE
  }
}

/* Step 4c - Revisiting the file with security */


void print_dyn_array(int* dyn_int_array, int length){

  int iter;
  for(iter = 0; iter < length; ++iter){

    fprintf( stdout, "dyn_int_array[%d] = %d at %p\n", iter, dyn_int_array[iter], &dyn_int_array[iter]);
  }

}
