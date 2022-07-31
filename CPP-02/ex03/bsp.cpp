#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	float p_1 = (a.getX().toFloat() - point.getX().toFloat()) * (b.getY().toFloat() - a.getY().toFloat()) - (b.getX().toFloat() - a.getX().toFloat()) * (a.getY().toFloat() - point.getY().toFloat());
	float p_2 = (b.getX().toFloat() - point.getX().toFloat()) * (c.getY().toFloat() - b.getY().toFloat()) - (c.getX().toFloat() - b.getX().toFloat()) * (b.getY().toFloat() - point.getY().toFloat());
	float p_3 = (c.getX().toFloat() - point.getX().toFloat()) * (a.getY().toFloat() - c.getY().toFloat()) - (a.getX().toFloat() - c.getX().toFloat()) * (c.getY().toFloat() - point.getY().toFloat());
	return (p_1 >= 0 && p_2 >= 0 && p_3 >= 0) || (p_1 <= 0 && p_2 <= 0 && p_3 <= 0) ? true : false;
}