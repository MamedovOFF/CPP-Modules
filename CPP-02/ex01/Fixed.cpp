#include "Fixed.hpp"

Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
	this->number = 0;
}

Fixed::Fixed( const int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->number = num << this->f_bits;
}

Fixed::Fixed( const float num) {
	std::cout << "Float constructor called" << std::endl;
	this->number = roundf(num * (1 << this->f_bits));
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

int Fixed::toInt( void ) const {
	return this->number >> this->f_bits;
}

float Fixed::toFloat( void ) const {
	return float((float)this->number / (float)(1 << this->f_bits));
}

std::ostream& operator<<(std::ostream &out, const Fixed &obj) {
	return out << obj.toFloat();
}