#include <stdio.h>
#include <stdlib.h>

typedef struct first_struct{
    float first_float; // float has 4 bytes (32bits)
    double first_double; // double has 8 bytes (64bits)
    char first_char; // char has 1 byte
    double second_double;
    int first_int; // int has 4 bytes
    float second_float;
    char second_char;
    char third_char;
    float third_float;
}first_struct;

int main(){

    first_struct* example_struct = (first_struct*)malloc( sizeof(first_struct) );

    // 1 - Learn about size_t compiler directive and use of sizeof
    size_t optimal_size = 3*sizeof(float) + 2*sizeof(double) + 3*sizeof(char) + sizeof(int);

    fprintf( stdout, "Size of optimal first_struct = %lu\n", optimal_size );
    fprintf( stdout, "Actual Size of first_struct = %lu\n", sizeof(first_struct) );

    fprintf( stdout, "The locations:\n");
    fprintf( stdout, "Base address  : %p\n", example_struct);
    fprintf( stdout, "first_float   : %p\n", &example_struct->first_float);
    fprintf( stdout, "first_double  : %p\n", &example_struct->first_double);
    fprintf( stdout, "first_char    : %p\n", &example_struct->first_char);
    fprintf( stdout, "second_double : %p\n", &example_struct->second_double);
    fprintf( stdout, "first_int     : %p\n", &example_struct->first_int);
    fprintf( stdout, "second_float  : %p\n", &example_struct->second_float);
    fprintf( stdout, "second_char   : %p\n", &example_struct->second_char);
    fprintf( stdout, "third_char    : %p\n", &example_struct->third_char);
    fprintf( stdout, "third_float   : %p\n", &example_struct->third_float);

    free(example_struct);

    return EXIT_SUCCESS;
}