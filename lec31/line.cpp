#include "line.h"

line::line() : origin( point() ), destin( point() ) {
    COUT<<"this: "<<this<<ENDL;
    COUT<<"this: "<<&(this->origin)<<ENDL; // same address as this 
    COUT<<"this: "<<&(this->destin)<<ENDL;
}

line::line( const point& origin_in, const point& destin_in) : origin(origin_in), destin(destin_in) {

}

line::line(const COORDINATE& origin_in_x, const COORDINATE& origin_in_y, const COORDINATE& destin_in_x, const COORDINATE& destin_in_y)
     : origin( point(origin_in_x, origin_in_y) ), destin( point(destin_in_x, destin_in_y)) {}

point line::getOrigin() const{
    return this->origin;
}

point line::getDestin() const{
    return this->destin;
}

SLOPE line::getSlope() const{
    return (destin.get_y() - origin.get_y())/(destin.get_x() - origin.get_x());
}

void line::print() const{
    COUT << "{";

    this->origin.print(); // we can use methods from point because its called an the method is public 

    COUT << " , ";

    this->destin.print();

    COUT << "}";

}