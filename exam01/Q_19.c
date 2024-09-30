#include <stdio.h>

void print_func(int the_array_pf[], long unsigned int* array_len_pf ){

    fprintf( stdout, "%p %lu %p %p\n", the_array_pf, *array_len_pf, array_len_pf, &array_len_pf);

    long unsigned int iter;
    for( iter = 0; iter < *array_len_pf; ++iter ){

        fprintf( stdout, "%lu %d %p\n", iter, the_array_pf[iter], &the_array_pf[iter] );
    }

}

int main(){

    int the_array[] = {10, 22, 17, -5, 31};

    long unsigned int array_len = 5;

    fprintf( stdout, "%p %lu %p\n", the_array, array_len, &array_len);

    print_func( the_array, &array_len );

    return 0;
}