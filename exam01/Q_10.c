#include <stdio.h>

int main(){

    double d_1 = 0.1;
    double d_2 = 0.2;

    if( d_1 < d_2 ){
        fprintf( stdout, "%lf %lf\n", d_1, d_2 );
    }
}