#include <iostream>
# include <cmath>

class Fixed
{
private:
	int number;
	static const int f_bits = 8;
public:
	Fixed( void );
	Fixed( const int num);
	Fixed( const float num);
	~Fixed();
	Fixed( const Fixed & ref_Point);
	Fixed &operator = ( const Fixed & ref_Point);

	Fixed operator * ( const Fixed & ref_Point);
	Fixed operator / ( const Fixed & ref_Point);
	Fixed operator + ( const Fixed & ref_Point);
	Fixed operator - ( const Fixed & ref_Point);

	bool operator >= ( const Fixed & ref_Point);
	bool operator <= ( const Fixed & ref_Point);
	bool operator > ( const Fixed & ref_Point);
	bool operator < ( const Fixed & ref_Point);
	bool operator == ( const Fixed & ref_Point);
	bool operator != ( const Fixed & ref_Point);

	Fixed	operator++( void );
	Fixed	operator++( int );
	Fixed	operator--( void );
	Fixed	operator--( int );

	static Fixed		min( Fixed &, Fixed & );
	static const Fixed	min( const Fixed &, const Fixed & );
	static Fixed		max( Fixed &, Fixed & );
	static const Fixed	max( const Fixed &, const Fixed & );

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	int toInt( void ) const;
	float toFloat( void ) const;
};
	
std::ostream&	operator<<(std::ostream &out, const Fixed &obj);
