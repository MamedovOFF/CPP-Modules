#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
private:
	Brain* catBrain;
public:
	Cat( void );
	Cat( const Cat & ref_Point);
	~Cat();

	Cat &operator = ( const Cat & ref_Point);

	void makeSound() const;
};


#endif