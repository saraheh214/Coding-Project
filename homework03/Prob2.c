/********************************
 * File Name: Prob2.c
 * Student's Name:
 * Student's Notre Dame NetID:
 * Date Started:
 *******************************/

#include <stdio.h>

/* Declare Functions */
int solveSum(int start_int, int end_int);
void printSum(int start_int, int end_int, int sum);

/* Main Function */
int main( void ){
  int start_int_1=22;
  int end_int_1=83;

  printSum(start_int_1,end_int_1,solveSum(start_int_1, end_int_1));

  int start_int_2=0;
  int end_int_2=100;

  printSum(start_int_2,end_int_2,solveSum(start_int_2, end_int_2));

  return 0;
}

/* Define Function */
int solveSum(int start_int, int end_int){
  int inter;
  int sum=0;

  for(inter=start_int; inter<=end_int; ++inter){
    sum+=inter;
  }
  return sum;
}

void printSum(int start_int, int end_int, int sum){
    fprintf(stdout, "The sum (%d to %d) is %d\n",start_int,end_int,sum);
}