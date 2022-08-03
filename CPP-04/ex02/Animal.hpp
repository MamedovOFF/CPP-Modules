#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal( void );
	Animal(std::string type);
	Animal( const Animal & ref_Point);
	virtual ~Animal();

	Animal &operator = ( const Animal & ref_Point);

	virtual void makeSound() const = 0;
	std::string getType() const;
};
#endif
