#include <stdio.h>
#include <stdlib.h>


#define LUI long unsigned int // allows us to say LUI for all long unisgned ints 
// int fibonacci( long unsigned int fib_num, int* fib_array ); // passing array with all previous numbers


LUI Fibonacci( LUI fib_num, LUI* fib_array ); // change to long unsigned int 
 // passing in value for fib_num and pointer of fib_array that we can dereference
void print_array ( LUI fib_num, LUI* fib_array );

int main( void ){

	LUI fib_num; // initialize fib_num

	fprintf(stdout, "Enter Fibinacci number: ");

	if(fscanf(stdin, "%lu", &fib_num) == -1){ // fscanf function - dont forget to use &
		return EXIT_FAILURE; // means -1, if not an unsigned int then terminates
	}

	LUI* fib_array = (LUI*)malloc(fib_num * sizeof(LUI)); // dynamic allocation of memory

	Fibonacci(fib_num, fib_array);

	print_array(fib_num, fib_array);

	free(fib_array); // ALWAYS FREE THE ARRAY- pyut before return not after

	return EXIT_SUCCESS; // EXIT_SUCCESS means 0- beneficial bc tells user its successful (readibility)- comes from stdlib.h

}


LUI Fibonacci( LUI fib_num, LUI* fib_array ){
	if(fib_array[fib_num] != 0){ // checks if val is not 0
		return fib_array[fib_num]; // of so returns value in fib_array in that location
		// this mean you can do Fibonacci(i-1, fib_array) + Fibonacci(i-2, fib_array)
	}

	if( fib_num == 0 || fib_num ==1 ){ // if 
		fib_array[fib_num] = 1;

		return 1;
	}

	fib_array[fib_num] = Fibonacci(fib_num-1, fib_array) + Fibonacci(fib_num-2, fib_array);
	// here the recussion is implemented where the locations will be filled with the previous fib num so you dont have to run through adding them all again
	return fib_array[fib_num];

}

void print_array ( LUI fib_num, LUI* fib_array ){

	fprintf( stdout, "The fibonacci values: " );

	long unsigned int iter;
	for( iter = 0; iter < fib_num; ++iter ){

		fprintf( stdout, "%lu ", fib_array[iter] ); // make sure %lu not %d

	}
	fprintf( stdout, "\n" );

}
