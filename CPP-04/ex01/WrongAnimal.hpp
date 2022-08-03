#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP
#include <iostream>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal( void );
	WrongAnimal(std::string type);
	WrongAnimal( const WrongAnimal & ref_Point);
	virtual ~WrongAnimal();

	WrongAnimal &operator = ( const WrongAnimal & ref_Point);

	void makeSound() const;
	std::string getType() const;
};
#endif
