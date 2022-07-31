#include "Fixed.hpp"

class Point
{
private:
	Fixed x;
	Fixed y;
public:
	Point(void);
    Point(const float x, const float y);
    Point(const Point & ref_Point);
	~Point();

	Point &operator = ( const Point & ref_Point);
    Fixed   getX( void ) const;
    Fixed   getY( void ) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);