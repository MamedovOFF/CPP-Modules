#include "Cat.hpp"

Cat::Cat(void): Animal("Cat"), catBrain(new Brain()) {
	std::cout << "Cat Constructor called" << std::endl;
}
Cat::~Cat() {
	delete catBrain;
	std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat( const Cat & ref_Point): Animal(ref_Point.getType()) {
	*this = ref_Point;
	std::cout << "Cat Constructor copied called: " << this->getType() << std::endl;
}

Cat& Cat::operator = ( const Cat & ref_Point) {
	if (this == &ref_Point) {
		return *this;
	}
	this->type = ref_Point.type;
	this->catBrain = ref_Point.catBrain;
	std::cout << "Cat Constructor overload called: " << this->getType() << std::endl;
	return *this;
};

void Cat::makeSound() const {
	std::cout << "MEOW!" << std::endl;
}