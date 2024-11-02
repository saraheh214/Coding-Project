#include <stdio.h>
#include <stdlib.h>

#define BUFFER 45 // array size - 45 characters for name of txt book
#define DEPARTMENT 4 // array size - 4 characters for department - uses 4 instead of 3 (CSE AME) because needs NULL character at end

// Step 4:
// Struct Definition will go here - lib_entry
// Must contain an index, title string sized BUFFER,
// a course_dept sized DEPARTMENT
// a Course Number course_num and the number of books num_books
typedef struct lib_entry{

    char title[BUFFER]; // creates 48 bytes bc must b factor of 4 so 3 bytes of segmentation
    char course_dept[DEPARTMENT]; // put characters first bc character array thats larger than the ints
    unsigned int course_num; // use long unsigned for memory allocation 
    unsigned int num_books;

}lib_entry;

int main( const int argc, const char* argv[] ){ // const bc dont need to check type/ makes it so ppl cant manipulate type- good for security 

    // Protect the inputs
    if( argc != 3 ){ 
        //fprintf( stdout, "Incorrect Number of Inputs\n" );
        fprintf( stderr, "Incorrect Number of Inputs\n" ); // stderr even better than stdout bc its an error message
        return EXIT_FAILURE;
    }

    // Step 1a - Create a read FILE* with the argv[1] (argv[0] is executable)
    FILE* lib_file = fopen( argv[1],"r" ); // use fopen not malloc, argv[1] is file and "r" is mode

    // Step 2 - Check to ensure that the file exists
    if(lib_file == NULL){ // checks if file name, lib_file, exists
        fprintf(stderr, "File does not exist"); // print to stderr bc error
        return EXIT_FAILURE; // exists program
    } 
    // Message to the user, reading from the File
    fprintf( stdout, "Reading from %s\n", argv[1] ); // tells us which lib reading from
    fprintf( stdout, "File memory info: %p -> %p\n", &lib_file, lib_file ); // prints register location and location in memeory 

    // Step 3 - Read in the first line, which is the number of entries
    long unsigned int num_entries;
    if(fscanf(lib_file, "%lu", &num_entries)){} // use lib_file NOT stdin because reading into that file, use & because we want the address of the entries

    // Print the number of entries
    fprintf( stdout, "Reading %ld Entries...\n", num_entries );

    // Step 4 - Create a struct ^
    // Step 5a - Allocate the amount of dynamic memory for that struct
    lib_entry* the_lib = (lib_entry* )malloc(num_entries* sizeof(lib_entry)); // each entry needs 60 bytes

    // Print pointers for the dynamically allocated memory
    fprintf( stdout, "%p -> %p\n", &the_lib, the_lib );

    // Now we can see the location of the pointers
    fprintf( stdout, "_IO_read_ptr = %p, ", lib_file->_IO_read_ptr); // use -> bc dynamic
    fprintf( stdout, "_IO_read_end = %p\n", lib_file->_IO_read_end);

    // Step 6a - Loop through the array
    // Remember Dr. Morrison's Golden Rule of Pointers
    // Put the second bracket after Step 6b
    // Also, create an iterator before the loop
    long unsigned int iter = 0;

    while(lib_file != NULL){

        // Step 7 - Scan in each value
        if(fscanf(lib_file, "%s",the_lib[iter].title)){} // in the_lib stuct, position iter, part title, passed by ref by def bc array
        if(fscanf(lib_file, "%s",the_lib[iter].course_dept)){}
        if(fscanf(lib_file, "%u",&the_lib[iter].course_num)){} // needs & to pass by ref
        if(fscanf(lib_file, "%u",&the_lib[iter].num_books)){} // not using arrows bc all vals need to be passed by reference
        
        // Print the values
        fprintf( stdout, "%s %s %u %u\n", the_lib[iter].title, 
            the_lib[iter].course_dept, the_lib[iter].course_num,
            the_lib[iter].num_books); // using . instead of -> bc its already been deferenced

        // Print the locations of the pointers
        fprintf( stdout, "_IO_read_ptr = %p, ", lib_file->_IO_read_ptr);
        fprintf( stdout, "_IO_read_end = %p\n", lib_file->_IO_read_end);

        // Step 6c - Use the break command from the reading
        if(lib_file->_IO_read_ptr == lib_file->_IO_read_end){ // c struct pointing to position on heap
            break; // breaks while loop, not if statement
        }  

        ++iter;

    // Step 6b - Put the bracket from the while loop here  
    }

    // Step 1b - Close the FILE*
    fclose(lib_file); // close file, does not delete file

    // Step 8a - Create a read FILE* with the argv[1]
    FILE* write_file = fopen( argv[2],"w"); // argv[0] = executable, argv[1] = read file, argv[3] = write file

    // Step 9 - Print to the output
    fprintf( write_file, "%lu\n", num_entries); //

    for(iter = 0; iter < num_entries; ++iter){
        fprintf( write_file, "%s %s %u %u\n", the_lib[iter].title, 
            the_lib[iter].course_dept, the_lib[iter].course_num, 
            the_lib[iter].num_books); // already dereferenced 
    }

    // Step 8b - Close the file 
    fclose(write_file);

    // Step 5b - Free the lib_entry array
    free(the_lib);

    return EXIT_SUCCESS;
}