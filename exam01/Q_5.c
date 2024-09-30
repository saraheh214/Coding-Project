#include <stdio.h>

int main(void){
    int i = 5, j = -10, k = -15;

    int sum = i + j + k;

    fprintf(stdout, "sum: %d %x \n", sum, sum);
}