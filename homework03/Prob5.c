/********************************
 * File Name: Prob5.c
 * Student's Name: Sarah Harrington
 * Student's Notre Dame NetID: sharrin3
 * Date Started: 09/21/24
 *******************************/

#include <stdio.h>
#include <math.h>

/* Function Declaration */
/********************************
 * Function Name: solveBacteria
 * Pre-Conditions: double time
 * Post-Conditions: double
 * 
 * solve for number of bacteria after set time 
 *******************************/
double solveBacteria(double time);

/********************************
 * Function Name: printBacteria 
 * Pre-Conditions: double time, double bacteria
 * Post-Conditions: void
 * 
 * print number of bacteria 
 *******************************/
void printBacteria(double time, double bacteria);

/* Main Function */
int main( void ){
  double time_1 = 12; // time in hours
  printBacteria(time_1, solveBacteria(time_1));

  double time_2 = 18; // time in hours
  printBacteria(time_2, solveBacteria(time_2));

  return 0;
}

/* Function Definition */
double solveBacteria(double time){
  double e = 2.71828; // set e
  double bacteria = 300000 * pow(e, -0.032*time); // NOTE: raise e to the power
  return bacteria;
}

void printBacteria(double time, double bacteria){
  fprintf(stdout, "Bacteria after %.0lf hours: %.5lf \n", time, bacteria); // round bacteria to 5 decimal places
}