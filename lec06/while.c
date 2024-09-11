#include <stdio.h>

int main( void ){

	/* Create Variable */
	int max_effort = 10;


	/* While Loop Statement */
	while(max_effort < 100){
		fprintf(stdout, "Keep Going, effort is %d!\n", max_effort);
		max_effort += 10;
	}

	return 0;
}
