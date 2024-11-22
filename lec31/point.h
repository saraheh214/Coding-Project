#ifndef POINT_H
#define POINT_H

#include <iostream>

#define COORDINATE double // compiler derective - each point has coordinate and slope all which are doubles
#define COUT std::cout 
#define ENDL std::endl

class point{ // keyword class - no need for typedef
    // seperate into .h and .cpp
    // members and method dec in .h
    // method defs in .cpp

    private: // members adn methods that cant be modified unless specific public method is called
    // used for protection 
        COORDINATE x_coor;
        COORDINATE y_coor;

    public:
        // Default Constructor: creates the object
        point(); // no return type 

        // Overloaded Constructor
        point( const COORDINATE& x_in , const COORDINATE& y_in );
        //

        COORDINATE get_x() const; // creates member that returns copy to pretect location version
        // const method: need to inticate which member have nothing changing
        COORDINATE get_y() const;

        void set_y( const COORDINATE& y_in ); // calling y_in by ref
        // const allows us to pass const values into this

        void print() const; // const bc not changing any internal members

};


#endif