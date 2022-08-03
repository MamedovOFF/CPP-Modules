#include "Dog.hpp"

Dog::Dog(void): Animal("Dog") {
	std::cout << "Dog Constructor called" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog( const Dog & ref_Point) {
	*this = ref_Point;
	std::cout << "Dog Constructor copied called: " << this->getType() << std::endl;
}

Dog& Dog::operator = ( const Dog & ref_Point) {
	if (this == &ref_Point) {
		return *this;
	}
	this->type = ref_Point.type;
	std::cout << "Dog Constructor overload called: " << this->getType() << std::endl;
	return *this;
};

void Dog::makeSound() const {
	std::cout << "WOUF!" << std::endl;
}