#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap() {
	this->name = "undefined";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDemage = 20;
	std::cout << "ScavTrap created" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDemage = 20;
	std::cout << "ScavTrap " << this->getName() << " created" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap & ref_Point) {
	this->name = ref_Point.name;
    this->attackDemage = ref_Point.attackDemage;
    this->energyPoints = ref_Point.energyPoints;
    this->hitPoints = ref_Point.hitPoints;
    std::cout << "ScavTrap " << this->getName() << " copied!" << std::endl;
}

ScavTrap& ScavTrap::operator = ( const ScavTrap & ref_Point) {
	if (this == &ref_Point) {
		return *this;
	}
	this->name = ref_Point.name;
	this->energyPoints = ref_Point.energyPoints;
	this->hitPoints = ref_Point.hitPoints;
	this->attackDemage = ref_Point.attackDemage;
	return *this;
};

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->getName() << " destroy" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (this->energyPoints > 0 && this->hitPoints > 0) {
		std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->attackDemage << " points of damage!" << std::endl;
		this->energyPoints--;
	} else if (this->energyPoints < 0) std::cout << "ScavTrap " << this->getName() << " no energy " << std::endl;
	else if (this->hitPoints <= 0) std::cout << "ScavTrap " << this->getName() << " deads " << std::endl;
}

void ScavTrap::guardGate() {
	if (this->energyPoints > 0 && this->hitPoints > 0) std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode" << std::endl;	
	else std::cout << "ScavTrap" << this->getName() << " no energy or healts" << std::endl;	
}