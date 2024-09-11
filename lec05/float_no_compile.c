#include <stdio.h>

int main( void ){

	float the_float = 3.1;
	double the_double =3.1;

	fprintf( stdout, "The float = %.11f %.11lf\n", the_float, the_double );

	return 0;

}
