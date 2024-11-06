#include "sllist.h"


int main(  ){

	// Dynamically allocate a sllist
	sllist* the_list = constructor();

	fprintf( stdout, "Base Addresses: %p %p\n", &the_list, the_list ); // &the list is in reg, the list is where its pointing (val it points to will be address of first term)

	// Step 9 - Call in main
	fprintf( stdout, "Head Node Addresses: %p %p\n", &(the_list->head_node), the_list->head_node );
	print_list( the_list->head_node );

	int choice = -1;
	while ( choice != 3 ){
		fprintf( stdout, "---------------------------------\n");
		fprintf( stdout, "Select a choice:\n");
		fprintf( stdout, "1: Push value\n");
		fprintf( stdout, "2: Pop\n");
		fprintf( stdout, "3: Stop Program\n");
		fprintf( stdout, "Enter your choice: ");
		if( fscanf(stdin, "%d", &choice) ){}

		if( choice == 3 )
			break;

		if( choice == 1 ){
			int scan_value;
			fprintf( stdout, "Enter the value to push: ");
			if( fscanf(stdin, "%d", &scan_value) ){}
			push( the_list, scan_value );
		}
		else{

			// Dr. Morrison's Golden Rule of Pointers!
			if( the_list->head_node != NULL ){
				pop( the_list );
			}

		}

		fprintf( stdout, "\nHead Node Addresses: %p %p\n", &(the_list->head_node), the_list->head_node );
		print_list( the_list->head_node );
	}


	// Step 11 - Call the destructor
	destructor(the_list->head_node); // recursive function that frees each node


	// Step 5 - Free the sllist
	free(the_list); // final free

	return EXIT_SUCCESS;
}
