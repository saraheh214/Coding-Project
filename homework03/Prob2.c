/********************************
 * File Name: Prob2.c
 * Student's Name: Sarah Harrington
 * Student's Notre Dame NetID: sharrin3
 * Date Started: 09/11/2024
 *******************************/

#include <stdio.h>

/* Declare Functions */
/********************************
 * Function Name: solveSum
 * Pre-Conditions: int int_start, int int_end
 * Post-Conditions: int
 * 
 * solve sum of all integers from int_start until int_end
 *******************************/
int solveSum(int int_start, int int_end);

/********************************
 * Function Name: printSum
 * Pre-Conditions: int int_start, int int_end, int sum
 * Post-Conditions: void
 * 
 * print sum of all integers from int_start until int_end
 *******************************/
void printSum(int int_start, int int_end, int sum);

/* Main Function */
int main( void ){
  int int_start_1=22;
  int int_end_1=83;

  printSum(int_start_1,int_end_1,solveSum(int_start_1, int_end_1));

  int int_start_2=0;
  int int_end_2=100;

  printSum(int_start_2,int_end_2,solveSum(int_start_2, int_end_2));

  return 0;
}

/* Define Function */
int solveSum(int int_start, int int_end){
  int inter;
  int sum=0;

  for(inter=int_start; inter<=int_end; ++inter){
    sum+=inter;
  }
  return sum;
}

void printSum(int int_start, int int_end, int sum){
    fprintf(stdout, "The sum (%d to %d) is %d\n",int_start,int_end,sum);
}