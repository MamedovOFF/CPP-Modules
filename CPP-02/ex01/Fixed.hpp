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

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	int toInt( void ) const;
	float toFloat( void ) const;
};
	
std::ostream&	operator<<(std::ostream &out, const Fixed &obj);
