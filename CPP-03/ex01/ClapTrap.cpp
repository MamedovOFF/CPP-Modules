#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): name(name), hitPoints(10), energyPoints(10), attackDemage(0) {
	std::cout << "ClapTrap " << name << " created" << std::endl;
}

ClapTrap::ClapTrap( void ): name("undefined"), hitPoints(10), energyPoints(10), attackDemage(0) {
	std::cout << "ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & ref_Point) {
    this->name = ref_Point.name;
    this->attackDemage = ref_Point.attackDemage;
    this->energyPoints = ref_Point.energyPoints;
    this->hitPoints = ref_Point.hitPoints;
    std::cout << "ClapTrap " << this->name << " copied!" << std::endl;
}

ClapTrap& ClapTrap::operator = ( const ClapTrap & ref_Point) {
	if (this == &ref_Point) {
		return *this;
	}
	this->name = ref_Point.name;
	this->energyPoints = ref_Point.energyPoints;
	this->hitPoints = ref_Point.hitPoints;
	this->attackDemage = ref_Point.attackDemage;
	return *this;
};

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << name << " destroy" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (this->energyPoints > 0 && this->hitPoints > 0) {
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDemage << " points of damage!" << std::endl;
		this->energyPoints--;
	} else if (this->energyPoints < 0) std::cout << "ClapTrap " << this->name << " no energy " << std::endl;
	else if (this->hitPoints <= 0) std::cout << "ClapTrap " << this->name << " deads " << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	this->hitPoints -= amount;
	  if (this->hitPoints <= 0) {
        std::cout << "ClapTrap " << this->name<< " was killed, health decreased by " << amount << " hit points"<< std::endl;
		this->hitPoints = 0;
    } else {
        std::cout << "ClapTrap " << this->name << " was damaged, health decreased by " << amount << " hit points" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->energyPoints > 0) {
        if (this->hitPoints <= 0) {
            std::cout << "ClapTrap " << this->name\
                    << " was revived, health increased by "\
                    << amount << " hit points"\
                    << std::endl;
        } else {
            std::cout << "ClapTrap " << this->name\
                    << " was repaired, health increased by "\
                    << amount << " hit points"\
                    << std::endl;
        }
		this->hitPoints += amount;
		this->energyPoints -= amount;
    }
}

std::string ClapTrap::getName( void ) {
    return this->name;
}

void ClapTrap::setName( std::string name ) {
	this->name = name;
}