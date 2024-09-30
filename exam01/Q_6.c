#include <stdio.h>

/* Question 6 */

int main( void ){

	/* Create Variable */
    int inter = 0;
    int sum = 0;

    while(inter<100){
        fprintf(stdout, "current int: %d\n", inter);
        inter += 1;
        sum +=inter;
    }
    fprintf(stdout,"%d\n", sum);

	return 0;
}


