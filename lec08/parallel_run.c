/* parallel_run.c */

#include "parallel_lib.h"

/* Main Function */

int main( void ){
	
	double R_sum = add_resis( 10, 22.7, 13.5 );
	
	double final = invert( R_sum );
	
	print( 10, 22.7, 13.5, final );
	
	return 0;
}