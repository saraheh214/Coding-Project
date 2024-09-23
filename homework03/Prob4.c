/********************************
 * File Name: Prob4.c - I think second sol is wrong in assign
 * Student's Name: Sarah Harrington
 * Student's Notre Dame NetID: sharrin3 
 * Date Started: 09/21/2024
 *******************************/

#include <stdio.h>
#include <math.h>

/* Function Declaration */
/********************************
 * Function Name: solveCurrent
 * Pre-Conditions: int voltage, int resistance, double capacitance, double time
 * Post-Conditions: double
 * 
 * solve for current 
 *******************************/
 double solveCurrent(int voltage, int resistance, double capacitance, double time);

/********************************
 * Function Name: printCurrent
 * Pre-Conditions: double radius
 * Post-Conditions: void
 * 
 * print current 
 *******************************/
  void printCurrent(double current);

/* Main Function */
int main( void ){
  int E_1 = 20; // voltage in volts
  int R_1 = 10; // resistance in ohms
  double C_1 = 0.0044; // capacitance in farads
  double t_1 = 0.023; // time in seconds
  printCurrent(solveCurrent(E_1, R_1, C_1, t_1));

  int E_2 = 35; // voltage in volts
  int R_2 = 10; // resistance in ohms
  double C_2 = 0.016; // capacitance in farads
  double t_2 = 0.067; // time in seconds
  printCurrent(solveCurrent(E_2, R_2, C_2, t_2));

  return 0;
}

/* Function Definition */
double solveCurrent(int voltage, int resistance, double capacitance, double time){
  double e = 2.71828;
  double current = (voltage/resistance)*pow(e, (-1*time)/(resistance*capacitance));
  return current;
}

void printCurrent(double current){
  fprintf(stdout, "Current: %.5lf (Amps) \n", current);
}