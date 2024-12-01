#include "JKFF.h"

#include <iostream>
#include <fstream>

// Default constructor - set Q to 0 and Qbar to 1
JKFF::JKFF() : Q(0), Qbar(1) {}

// Constructor - truth table to determine Q and Qbar
void JKFF::updateVals( const bool& CLK , const bool& J_in, const bool& K_in){
    if (CLK == 1){
        if (J_in == 1 && K_in == 0){
            Q = 1;
            Qbar = 0;
        }
        else if (J_in == 0 && K_in == 1){
            Q = 0;
            Qbar = 1;
        }
        else if (J_in == 1 && K_in == 1){
            bool temp = Q;
            Q = Qbar;
            Qbar = temp;
        }
    }
}

// Constructor - return Q
bool JKFF::currentVal_Q() const{
    return this->Q;
}

// Constructor - return Qbar
bool JKFF::currentVal_Qbar() const {
    return this->Qbar;
}