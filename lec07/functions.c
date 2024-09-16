#include <stdio.h>

/* Function Declarations */
double doubleAverage(double first_double, double second_double);

int main( void ){

	/* Create Variables */
	/* Note: Only create variables we are using at intermediate steps */
	double double_1 = 1;
	double double_2 = 2;

	fprintf(stdout, "%p %lf %p %lf in main\n",
	&double_1, double_1, &double_2, double_2);

	/* Average of two doubles */
	double average=doubleAverage(double_1, double_2);

	/* Print the result */
	fprintf(stdout, "the average is %lf\n",average);

	return 0;
}

/* Function Definitions */
double doubleAverage(double first_double, double second_double){

	double average=(first_double+second_double)/2;
	fprintf(stdout, "%p %lf %p %lf in doubleAverage\n",
	&first_double, first_double, &second_double, second_double);

	return average;

}