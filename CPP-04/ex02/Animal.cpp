#include "Animal.hpp"

Animal::Animal(void): type("") {
	std::cout << "Animal Empty Constructor called" << std::endl;
}

Animal::Animal(std::string type): type(type) {
	std::cout << "Animal Constructor called: " << this->type << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal Destructor called" << std::endl;
}

Animal::Animal( const Animal & ref_Point): type(ref_Point.type) {
	std::cout << "Animal Constructor copied called: " << this->type << std::endl;
}

Animal& Animal::operator = ( const Animal & ref_Point) {
	if (this == &ref_Point) {
		return *this;
	}
	this->type = ref_Point.type;
	std::cout << "Animal Constructor overload called: " << this->type << std::endl;
	return *this;
};

std::string Animal::getType() const {
	return this->type;
}