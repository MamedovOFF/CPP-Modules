#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
public:
	WrongCat( void );
	WrongCat( const WrongCat & ref_Point);
	~WrongCat();

	WrongCat &operator = ( const WrongCat & ref_Point);

	void makeSound() const;
};


#endif