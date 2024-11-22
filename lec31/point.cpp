#include "point.h"

// must indicate which object so use name_of_class::

point::point() : x_coor(0), y_coor(0) {}
// name_of_class::name_of_constructor : name_of_member(), name_of_member() {}
// dont forget the {} at the end !!!

point::point( const COORDINATE& x_in , const COORDINATE& y_in ) 
    : x_coor(x_in), y_coor(y_in) {}
    // member initalization list


COORDINATE point::get_x() const{
    return this->x_coor; // dynamic so use ->
}

COORDINATE point::get_y() const{
    return this->y_coor;
}

void point::set_y( const COORDINATE& y_in ){
    this->y_coor = y_in;
}

void point::print() const{
    COUT << "{" << this->x_coor << ", " << this->y_coor << "}";
}