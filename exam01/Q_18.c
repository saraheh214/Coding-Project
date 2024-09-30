#include <stdio.h>

void pointer_func(int a_pf, int* b_pf ){

    a_pf = 27;
    *b_pf = 11;

    fprintf( stdout, "%x %p\n", a_pf, &a_pf);

    fprintf( stdout, "%d %p %p\n", *b_pf, b_pf, &b_pf);

}

int main(){

    int a = 10;
    int b = 20;

    fprintf( stdout, "%d %p\n", a, &a);

    fprintf( stdout, "%x %p\n", b, &b);

    pointer_func( a, &b );

    fprintf( stdout, "%d %p\n", a, &a);

    fprintf( stdout, "%d %x %p\n",b, b, &b);

    return 0;
}