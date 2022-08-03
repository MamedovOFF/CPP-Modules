#include "Brain.hpp"

Brain::Brain(void) {
	for (int i = 0; i < 100; i++) this->ideas[i] = "idea " + std::to_string(i);
	std::cout << "Brain Constructor called" << std::endl;
}
Brain::~Brain() {
	std::cout << "Brain Destructor called" << std::endl;
}

Brain::Brain( const Brain & ref_Point) {
	*this = ref_Point;
	std::cout << "Brain Constructor copied called: " << std::endl;
}

Brain& Brain::operator = ( const Brain & ref_Point) {
	if (this == &ref_Point) return *this;
	for (int i = 0; i < 100; i++) this->ideas[i] = ref_Point.ideas[i];
	std::cout << "Brain Constructor overload called" << std::endl;
	return (*this);
};