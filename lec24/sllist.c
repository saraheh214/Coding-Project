#include "sllist.h"


sllist* constructor(){

    sllist* temp_node = (sllist *)malloc( sizeof(sllist) );
 
	temp_node->head_node = NULL; // current no elements in SLL

    return temp_node; 

}


// Create the constructor method for sllist
void push( sllist* the_list, int the_value ){ // pass pointer by reference, and pass value
	// point of function is to put this new val at the front and then work backward to keep the pointing

	// Create a sll_node pointer called insert_node
	sll_node* insert_node = (sll_node*)malloc(sizeof(sll_node)); // casting to sll*, want size of node

	// Set the insert_node's data to the_value and next_node to NULL
	insert_node->data = the_value; // use -> bc hasn't been deref
	insert_node->next_node = NULL; // forces it to not point to any memeory 
	

	// Dr. Morrison's Golden Rule of Pointers
	// Check if the list is empty
	if(the_list->head_node == NULL){ // check to see if pointing to nothing
		// Set the head node equal to insert_node
		the_list->head_node = insert_node;

		// And return
		return;
	}		
	

	// Otherwise, create a curr_ptr equal to the head_node
	sll_node* curr_ptr = the_list->head_node; // creates another pointer to the head node, now a pointer to a pointer

	// Set the head node equal to the insert node
	the_list->head_node = insert_node;

	// Set the head node's next_node equal to curr_ptr
	the_list->head_node->next_node = curr_ptr;
	
}

void pop( sllist* the_list ){

	// Dr. Morrison's Golden Rule of Pointers
	// Check if the head node is not empty
	if(the_list ->head_node != NULL ){ // this checks to see that there are items in list to begin with 
	

		// Set a temp node equal to the current head node
		sll_node* temp_node = the_list->head_node; // temperary pointer to hold where head node points

		// Set the head node equal to the head node's next node
		the_list->head_node = the_list->head_node->next_node;  

		// the_list->head_node = temp_node->next_node - this is equivilent to prev line of code
		// this changes the the head node pointer to now pointing to where the temperay nodes next node is pointing

		// Free the temp pointer
		free(temp_node); 

		return;
	}

	// If the head node is empty, print a message that the list is empty
	fprintf( stdout, "Can't pop. List is empty\n");
}


// Step 8 - Print the Singly Linked List
void print_list( sll_node* head_node ){

	// Just change node_0 to head_node
	sll_node* curr_ptr = head_node;
	while( curr_ptr != NULL ){

		fprintf( stdout, "Address: %p, ", curr_ptr );
		fprintf( stdout, "Value: %d, ", curr_ptr->data );
		fprintf( stdout, "next_node Addr: %p, ", &(curr_ptr->next_node) );
		fprintf( stdout, "next_node Value: %p\n", curr_ptr->next_node );

		// Iterate through the next node
		curr_ptr = curr_ptr->next_node;

	}
	fprintf( stdout, "\n" );

}


// Free all the elements
void destructor( sll_node* curr_ptr ){

	// Dr. Morrison's Golden Rule of Pointers
	if( curr_ptr != NULL ){
		
		// Recursively call destructor on the next node
		destructor(curr_ptr->next_node); // passes back through function to free last node first 

		// Free the current pointer
		free(curr_ptr); // once hits that last node then it will start freeing the ptr
		
	}

}
