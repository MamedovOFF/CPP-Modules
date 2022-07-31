#include "Fixed.hpp"

Fixed::Fixed(/* args */)
{
	std::cout << "Default constructor called" << std::endl;
	this->number = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
Fixed::Fixed (const Fixed & ref_Point) {
	std::cout << "Copy constructor called" <<std::endl;
	this->number = ref_Point.number;
}

Fixed& Fixed::operator = ( const Fixed & ref_Point) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &ref_Point) {
		return *this;
	}
	this->number = ref_Point.getRawBits();
	return *this;
};

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->number;
}
void Fixed::setRawBits( int const raw ) {
	this->number = raw;
	std::cout << "setRawBits member function called" << std::endl;
}