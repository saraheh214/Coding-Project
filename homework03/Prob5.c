/********************************
 * File Name: Prob5.c
 * Student's Name:
 * Student's Notre Dame NetID:
 * Date Started:
 *******************************/

#include <stdio.h>
#include <math.h>

/* Function Declaration */
/********************************
 * Function Name: solveBacteria
 * Pre-Conditions: int time
 * Post-Conditions: double
 * 
 * solve for number of bacteria after set time 
 *******************************/
double solveBacteria(int time);

/********************************
 * Function Name: printBacteria 
 * Pre-Conditions: int time, double bacteria
 * Post-Conditions: void
 * 
 * print number of bacteria 
 *******************************/
void printBacteria(int time, double bacteria);

/* Main Function */
int main( void ){
  int t_1 = 12; // time in hours
  printBacteria(t_1, solveBacteria(t_1));

  int t_2 = 18; // time in hours
  printBacteria(t_2, solveBacteria(t_2));

  return 0;
}

/* Function Definition */
double solveBacteria(int time){
  double e = 2.71828;
  double bacteria = 300000 * pow(e, -0.032*time);
  return bacteria;
}

void printBacteria(int time, double bacteria){
  fprintf(stdout, "Bacteria after %d hours: %.5lf \n", time, bacteria);
}