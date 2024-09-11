#include <stdio.h>

int main( void ){

	/* Create Variable */
	int max_effort;


	/* For Loop Statement */
	for(max_effort = 10; max_effort < 100; max_effort += 10){
		fprintf(stdout, "Keep Going, effort is %d!\n", max_effort);
	}
	fprintf(stdout, "Congratuations you are DONE!! \n");

	return 0;
}
