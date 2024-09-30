#include <stdio.h>

void func( int* val_a, int* val_b){

    fprintf( stdout, "%p %p\n", val_a, val_b );

    fprintf( stdout, "%p %p\n", &val_a, &val_b );

    int temp_1, temp_2;
    
    if( *val_a <= * val_b ){
        temp_1 = *val_a;
        temp_2 = *val_b;
    }
    else{
        temp_1 = *val_b;
        temp_2 = *val_a;        
    }

    *val_a = temp_1;
    *val_b = temp_2;

}

int main(){
    
    int a = 25;
    int b = 10;

    fprintf( stdout, "&a %p\n", &a);
    fprintf( stdout, "&b %p\n", &b);
    
    func( &a, &b );
    
    fprintf( stdout, "%d %p %d %p\n", a, &a, b, &b);
    
    return 0;
    
}