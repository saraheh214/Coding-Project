/**********************************************
* File: countSort.cpp
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* Shows a basic example of Counting Sort
* using the C++ STL Libraries
**********************************************/
#include <unordered_map> // hash table 
#include <vector>
#include <string> // vector specificiv for character arrays like char*
#include <iostream>

void update_hash( std::unordered_map< int, int >& count_sort, 
	const std::vector<int>& the_vals ){
	// call by reference allows us to update count_sort but allows us 
	// to feel like we're coding in main so we dont need to defref
	// const creates level of security if you dont plan to change something
	for( long unsigned int iter = 0; iter < the_vals.size(); ++iter ){

		/* If it doesn't contain the value */
		if( !count_sort.contains( the_vals.at(iter) ) ){ // looks for key
			count_sort.insert( {the_vals.at(iter), 1} ); // if not it then adds that key
			// MUST HAVE {} around key, val - line of code within line of code 
			// creating new structure called a pair - key value pair 
		}
		else{
			/* Otherwise, incement the result */
			count_sort.at(the_vals.at(iter))++; // else, it increments value at key 
		}
	}
}

void print_hash(const std::unordered_map< int, int >& countSort, const int largestNum){
	// can make both of these const bc you arent changing either of them
	// calling by reference is calling abstracted pointer
	// if you DONT call by ref you are making entirely new table
	// ALWAYS CALL BY REF 

	for(int i = 0; i <= largestNum; i++){
		
		if( countSort.contains(i) ){
			for(int j = 0; j < countSort.at(i); ++j){
				
				std::cout << i << " "; // prints value number of times its seen in vector
			}
		}
	}
	
	std::cout << std::endl;
	
}

/********************************************
* Function Name  : main
* Pre-conditions : 
* Post-conditions: int
*
* Main driver function. Solution  
********************************************/
int main( ){

	/* The Hash Table for the Counting Sort */
	std::unordered_map<int, int> count_sort; // <key, value>
	// key used to find address so similar to switch statements (switch had to be accurate not percise, int)
	// 
	
	/* An array of values to sort */
	std::vector<int> the_vals{7, 1, 5, 7, 1, 4, 100, 31, 18, 41, 7, 45, 56, 22, 19, 7, 8, 36, 1};
	
	/* Get the largest number, which is the number of buckets */
	int largestNum = 0;

	/* Learn about a new */
	for(long unsigned int iter = 0; iter < the_vals.size(); ++iter ){
		// we cant have negative index and we dont know how long list is
		// .size and .capacity return long unsigned int  

		if(the_vals.at(iter) > largestNum){
			largestNum = the_vals.at(iter);
		}
		
	}
	
	update_hash( count_sort, the_vals ); // count sort = unordered map, the_vals is vector

	/* Print the Hash */
	print_hash(count_sort, largestNum);

	return 0;
}
