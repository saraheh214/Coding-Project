/********************************
 * File Name: Probl.c
 * Student's Name: Sarah Harrington
 * Student's Notre Dame NetID: sharrin3
 * Date Started: 09/11/24
 *******************************/

#include <stdio.h>

/* Declare Functions */
/********************************
 * Function Name: solveVolume
 * Pre-Conditions: double radius
 * Post-Conditions: double
 * 
 * solved volume of sphere
 *******************************/
double solveVolume(double radius);

/********************************
 * Function Name: printVolume
 * Pre-Conditions: double radius, double volume
 * Post-Conditions: void
 * 
 * print volume of a sphere
 *******************************/
void printVolume(double radius,double volume);

/* Main Function */
int main(void){
  double radius_1=2; // radius
  printVolume(radius_1, solveVolume(radius_1));

  double radius_2=1.67; // radius
  printVolume(radius_2, solveVolume(radius_2));


  return 0;
}

/* Define Functions */
double solveVolume(double radius){
 double pi=3.14159;
 return((4*pi*radius*radius*radius)/3);
}

void printVolume(double radius, double volume){
  fprintf( stdout,"Solution for radius %.2lf: %lf\n",radius, volume);
}