#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
private:
	Brain* dogBrain;
public:
	Dog( void );
	Dog( const Dog & ref_Point);
	~Dog();

	Dog &operator = ( const Dog & ref_Point);

	void makeSound() const;
};

#endif