/********************************
 * File Name: JKFF.h
 * Student's Name: Sarah Harrington
 * Student's Notre Dame NetID: sharrin3
 * Date Started: 12/4/2024
 *******************************/

#ifndef JKFF_H
#define JKFF_H

#include <iostream>
#include <fstream>

#define COUT std::cout 
#define ENDL std::endl

class JKFF{ 

    private: 
        bool Q;
        bool Qbar;

    public:
        //Default Constructor - set Q and Qbar to 0 and 1
        JKFF(); 

        // Constructor - use truth table to determine current Q and Qbar
        void updateVals( const bool& CLK , const bool& J_in, const bool& K_in );
        
        // Constructor - return Q
        bool currentVal_Q() const;

        // Constructor - return Qbar
        bool currentVal_Qbar() const;
};


#endif