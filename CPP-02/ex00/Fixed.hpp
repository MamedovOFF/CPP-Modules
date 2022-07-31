#include <iostream>

class Fixed
{
private:
	int number;
public:
	Fixed( void );
	~Fixed();
	Fixed( const Fixed & ref_Point);
	Fixed &operator = ( const Fixed & ref_Point);

	int getRawBits( void ) const;
	void setRawBits( int const raw );
};
