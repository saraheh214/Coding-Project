/********************************
 * File Name: homework07.cpp
 * Student's Name: Sarah Harrington
 * Student's Notre Dame NetID: sharrin3
 * Date Started: 12/4/2024
 *******************************/

#include "JKFF.h"

#include <iostream>
#include <fstream>
#include <string>

#define COUT std::cout
#define ENDL std::endl

typedef struct JKFF_struct{
    bool CLK;
    bool J_in;
    bool K_in;
}JKFF_struct;


int main(const int argc, const char* argv[]){
    // Check correct inputs
    if (argc > 2){
        COUT << "Incorrect number of input" <<ENDL;
        return EXIT_FAILURE;
    }
    
    // Create JK flip flop
    JKFF JKFF_flip_flop;

    // read in .txt file
    std::ifstream input_stream(argv[1]); // remmeber argv[0] is executable 

    if( !input_stream ){
        std::cerr << "Invalid Stream" << std::endl;
        return EXIT_FAILURE;
    }

    bool CLK, J_in, K_in;
    while(input_stream >> CLK >> J_in >> K_in){
        JKFF_flip_flop.updateVals(CLK, J_in, K_in);
        COUT << JKFF_flip_flop.currentVal_Q() << " ";
        COUT << JKFF_flip_flop.currentVal_Qbar() << ENDL;
    }

    input_stream.close(); // object calling internal     
}