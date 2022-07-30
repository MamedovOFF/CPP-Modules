#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->setType(type);
}

Weapon::~Weapon()
{
	std::cout << "Weapon: " << this->type << " destroy\n";
}

void Weapon::setType(std::string type) {
	this->type = type;
}

std::string Weapon::getType() {
	return this->type;
}