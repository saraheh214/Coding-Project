#include <stdio.h>



int main( void ){

	/* Create Variable */
	double inter = 1;
    double fact = 1;


	/* For Loop Statement */
    for(inter = 1; inter<=25; ++inter){
        fprintf(stdout, "inter: %lf\n", inter);
        fact *= inter;
        fprintf(stdout, "fact: %lf\n", fact);

    }
    fprintf(stdout, "factorial: %lf \n", fact);
	return 0;
}

