#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat: public Animal
{
public:
	Cat( void );
	Cat( const Cat & ref_Point);
	~Cat();

	Cat &operator = ( const Cat & ref_Point);

	void makeSound() const;
};


#endif