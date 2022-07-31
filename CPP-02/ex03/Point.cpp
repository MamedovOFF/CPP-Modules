#include "Point.hpp"

Point::Point( void ): x(0), y(0) {}
Point::Point(const float x, const float y): x(x), y(y) {}
Point::Point(const Point & ref_Point): x(ref_Point.x), y(ref_Point.y) {}


Point& Point::operator = ( const Point & ref_Point) {
	(void)ref_Point;
	return *this;
};

Point::~Point(){}

Fixed   Point::getX(void) const { 
	return this->x; 
}

Fixed   Point::getY(void) const { 
	return this->y; 
}