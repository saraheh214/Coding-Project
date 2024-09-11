#include <stdio.h>

int main(void){
	
	int x = 5;
	fprintf( stdout, "Initial x is %d\n", x);
	fprintf( stdout, "After ++x %d\n", ++x);
	fprintf( stdout, "After x++ %d\n", x++);
	fprintf( stdout,"After --x %d\b", --x);
	fprintf( stdout, "AFter x-- %d\b", x--); 
	return 0;
}
