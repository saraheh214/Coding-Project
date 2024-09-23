/********************************
 * File Name: Prob3.c
 * Student's Name:
 * Student's Notre Dame NetID:
 * Date Started:
 *******************************/

#include <stdio.h>
#include <math.h>

/* Declare Functions */
/********************************
 * Function Name: solveRadius
 * Pre-Conditions: int load, int length, int stress
 * Post-Conditions: double
 * 
 * solve for radius necessary to sustain load
 *******************************/
 double solveRadius(int load, int length, int stress);

 /********************************
 * Function Name: printRadius
 * Pre-Conditions: int load, int length, int stress, double radius
 * Post-Conditions: void
 * 
 * print radius necessary to sustain load
 *******************************/
void printRadius(int load, int length, int stress, double radius);

/* Main Function */
int main( void ){
  int load_1 = 300; // load in lbs
  int length_1 = 7; // length in inches
  int stress_1 = 10000; //stress in lbs/in^2
  double radius_1 = solveRadius(load_1, length_1, stress_1);
  printRadius(load_1, length_1, stress_1, radius_1);


  int load_2 = 150; // load in lbs
  int length_2 = 5; // length in inches
  int stress_2 = 7000; //stress in lbs/in^2
  double radius_2 = solveRadius(load_2, length_2, stress_2);
  printRadius(load_2, length_2, stress_2, radius_2);

  return 0;
}

/* Define Functions */
double solveRadius( int load, int length, int stress){
  double  pi = 3.14159;
  double radius_cubed = (length*load)/(pi*stress);
  double radius = pow(radius_cubed, 0.33333);
  return radius;
}

void printRadius( int load, int length, int stress, double radius){
  fprintf(stdout, "Load: %d (lbs), length: %d (in), stress: %d (lbs/in^2)\n", load, length, stress);
  fprintf(stdout, "Radius necessary: %lf (in) \n", radius);
}
