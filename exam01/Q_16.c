#include <stdio.h>

int main(void)
{

    int x = 14;
    int y = 22;

    int *p1 = &x;
    int *p2 = &y;

    fprintf( stdout, "&x %p\n", &x );
    fprintf( stdout, "&y %p\n", &y );
    fprintf( stdout, "&p1 %p\n", &p1 );
    fprintf( stdout, "&p2 %p\n", &p2 );

    fprintf( stdout, "%x\n", *p1 );

    fprintf( stdout, "%d\n", *p2 );

    fprintf( stdout, "%p\n", p1 );

    fprintf( stdout, "%p\n", &p1 );

    fprintf( stdout, "%p\n", &y );

    fprintf( stdout, "%p\n", &p2 );

    return 0;
}