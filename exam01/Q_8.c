#include <stdio.h>

int main(void){

    int inter = 10;

    do{
        inter -= 2;
        fprintf(stdout, "inter: %d \n", inter);
    } while(inter>0);

    return 0;

}