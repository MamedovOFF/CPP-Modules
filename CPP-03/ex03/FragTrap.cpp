#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDemage = 30;
	std::cout << "FragTrap " << this->getName() << " created" << std::endl;
}

FragTrap::FragTrap( void ) : ClapTrap() {
	this->name = "undefined";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDemage = 30;
	std::cout << "FragTrap created" << std::endl;
}

FragTrap::FragTrap( const FragTrap & ref_Point) {
	this->name = ref_Point.name;
    this->attackDemage = ref_Point.attackDemage;
    this->energyPoints = ref_Point.energyPoints;
    this->hitPoints = ref_Point.hitPoints;
    std::cout << "FragTrap " << this->getName() << " copied!" << std::endl;
}

FragTrap& FragTrap::operator = ( const FragTrap & ref_Point) {
	if (this == &ref_Point) {
		return *this;
	}
	this->name = ref_Point.name;
	this->energyPoints = ref_Point.energyPoints;
	this->hitPoints = ref_Point.hitPoints;
	this->attackDemage = ref_Point.attackDemage;
	return *this;
};

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->getName() << " destroy" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << this->getName() << " give me a five!\n";
}

int FragTrap::getHitPoints() const {
	return this->hitPoints;
}

int FragTrap::getAttackDemage() const {
	return this->attackDemage;
}