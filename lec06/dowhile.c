#include <stdio.h>

int main( void ){

	/* Create Variable */
	int max_effort = 100;


	/* While Loop Statement */
	do{
		fprintf(stdout, "Keep Going, effort is %d!\n", max_effort);
		max_effort += 10;	
	}while(max_effort < 100);
	fprintf(stdout, "Congratuations you are DONE!! \n");
	return 0;
}
