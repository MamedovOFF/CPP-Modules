#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap() {
	this->name = "undefined";
	this->setHitPoints(FragTrap::getHitPoints());
	this->setEnergyPoints(ScavTrap::getEnergyPoints());
	this->setAttackDemage(FragTrap::getAttackDemage());
	 std::cout << "Empty DiamondTrap created!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name):  ClapTrap(name + "_clap_name") {
	this->name = name;
	this->setHitPoints(FragTrap::getHitPoints());
	this->setEnergyPoints(ScavTrap::getEnergyPoints());
	this->setAttackDemage(FragTrap::getAttackDemage());
	std::cout << "DiamondTrap " << name << " created!" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap & ref_Point ): ClapTrap(ref_Point.name + "_clap_name"), name(ref_Point.name) {
	this->setHitPoints(ref_Point.getHitPoints());
	this->setEnergyPoints(ref_Point.getEnergyPoints());
	this->setAttackDemage(ref_Point.getAttackDemage());
    std::cout << "DiamondTrap " << this->name << " copied!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{	
	std::cout << "DiamondTrap " << this->name << " destroy" << std::endl;
}

void DiamondTrap::whoAmI() {
	std::cout << "My name is " << this->name << " and my grandpa's name is " << ClapTrap::getName() << std::endl;
}
