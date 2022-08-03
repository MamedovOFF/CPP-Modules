#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
private:
	std::string ideas[100];
public:
	Brain( void );
	Brain(std::string &idea);
	Brain( const Brain & ref_Point);

	~Brain();

	Brain &operator = ( const Brain & ref_Point);
};
#endif