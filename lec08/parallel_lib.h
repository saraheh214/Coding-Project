/* parallell_lib.h */
#ifndef PARALLELL_LIB_H
#define PARALLELL_LIB_H

/* Included Libraries */

#include <stdio.h>
#include <math.h>

/* Function Declaration */

double add_resis( double R1, double R2, double R3 );

double invert( double R_sum );

void print( double R1, double R2, double R3, double R_sum );

#endif