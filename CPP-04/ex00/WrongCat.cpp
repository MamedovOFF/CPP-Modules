#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal("WrongCat") {
	std::cout << "WrongCat Constructor called" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat & ref_Point) {
	*this = ref_Point;
	std::cout << "WrongCat Constructor copied called: " << this->getType() << std::endl;
}

WrongCat& WrongCat::operator = ( const WrongCat & ref_Point) {
	if (this == &ref_Point) {
		return *this;
	}
	this->type = ref_Point.type;
	std::cout << "WrongCat Constructor overload called: " << this->getType() << std::endl;
	return *this;
};

void WrongCat::makeSound() const {
	std::cout << "CRY CRY!" << std::endl;
}