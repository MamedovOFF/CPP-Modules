#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): type("") {
	std::cout << "WrongAnimal Empty Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): type(type) {
	std::cout << "WrongAnimal Constructor called: " << this->type << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal & ref_Point): type(ref_Point.type) {
	std::cout << "WrongAnimal Constructor copied called: " << this->type << std::endl;
}

WrongAnimal& WrongAnimal::operator = ( const WrongAnimal & ref_Point) {
	if (this == &ref_Point) {
		return *this;
	}
	this->type = ref_Point.type;
	std::cout << "WrongAnimal Constructor overload called: " << this->type << std::endl;
	return *this;
};

void WrongAnimal::makeSound() const {
	std::cout << "I`m WrongAnimal!" << std::endl;
}

std::string WrongAnimal::getType() const {
	return this->type;
}