#include "Fixed.hpp"

Fixed::Fixed( void )
{
	this->number = 0;
}

Fixed::Fixed( const int num)
{
	this->number = num << this->f_bits;
}

Fixed::Fixed( const float num) {
	this->number = roundf(num * (1 << this->f_bits));
}

Fixed::~Fixed()
{
}

Fixed::Fixed (const Fixed & ref_Point) {
	this->number = ref_Point.number;
}

Fixed& Fixed::operator = ( const Fixed & ref_Point) {
	if (this == &ref_Point) {
		return *this;
	}
	this->number = ref_Point.getRawBits();
	return *this;
};

int Fixed::getRawBits( void ) const {
	return this->number;
}
void Fixed::setRawBits( int const raw ) {
	this->number = raw;
}

int Fixed::toInt( void ) const {
	return this->number >> this->f_bits;
}

float Fixed::toFloat( void ) const {
	return float((float)this->number / (float)(1 << this->f_bits));
}

Fixed Fixed::operator * ( const Fixed & ref_Point) {
	Fixed fixed;
    fixed.setRawBits((this->number * ref_Point.number) / (1 << this->f_bits) );
    return fixed;
}

Fixed Fixed::operator / ( const Fixed & ref_Point) {
	Fixed fixed;
    fixed.setRawBits((this->number / ref_Point.number) / (1 << this->f_bits) );
    return fixed;
}

Fixed Fixed::operator + ( const Fixed & ref_Point) {
	Fixed fixed;
    fixed.setRawBits((this->number + ref_Point.number) / (1 << this->f_bits) );
    return fixed;
}

Fixed Fixed::operator - ( const Fixed & ref_Point) {
	Fixed fixed;
    fixed.setRawBits((this->number - ref_Point.number) / (1 << this->f_bits) );
    return fixed;
}

bool Fixed::operator>=( const Fixed & ref_Point) {
	return this->getRawBits() >= ref_Point.getRawBits();
}

bool Fixed::operator<=( const Fixed & ref_Point) {
	return this->getRawBits() <= ref_Point.getRawBits();
}

bool Fixed::operator>( const Fixed & ref_Point) {
	return this->getRawBits() > ref_Point.getRawBits();
}

bool Fixed::operator<( const Fixed & ref_Point) {
	return this->getRawBits() < ref_Point.getRawBits();
}

bool Fixed::operator==( const Fixed & ref_Point) {
	return this->getRawBits() == ref_Point.getRawBits();
}

bool Fixed::operator!=( const Fixed & ref_Point) {
	return this->getRawBits() != ref_Point.getRawBits();
}

Fixed	Fixed::operator++( void ) {
	Fixed	fixed;
	fixed.setRawBits(++this->number);
	return fixed;
}

Fixed	Fixed::operator++( int ) {
	Fixed	fixed;
	fixed.setRawBits(this->number++);
	return fixed;
}

Fixed	Fixed::operator--( void ) {
	Fixed	fixed;
	fixed.setRawBits(--this->number);
	return fixed;
}

Fixed	Fixed::operator--( int ) {
	Fixed	fixed;
	fixed.setRawBits(this->number--);
	return fixed;
}

Fixed	Fixed::min(Fixed &Fixed_1, Fixed &Fixed_2) {
	return Fixed_1.number > Fixed_2.number ? Fixed_2 : Fixed_1;
}

const Fixed	Fixed::min(const Fixed &Fixed_1, const Fixed &Fixed_2) {
	return Fixed_1.number > Fixed_2.number ? Fixed_2 : Fixed_1;
}

Fixed	Fixed::max(Fixed &Fixed_1, Fixed &Fixed_2) {
	return Fixed_1.number > Fixed_2.number ? Fixed_1 : Fixed_2;
}

const Fixed	Fixed::max(const Fixed &Fixed_1, const Fixed &Fixed_2) {
	return Fixed_1.number > Fixed_2.number ? Fixed_1 : Fixed_2;
}

std::ostream& operator<<(std::ostream &out, const Fixed &obj) {
	return out << obj.toFloat();
}