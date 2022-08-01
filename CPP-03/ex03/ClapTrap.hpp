#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap
{
private:
	std::string name;
	int hitPoints;
	int energyPoints;
	int attackDemage;
public:
	ClapTrap(void);
	ClapTrap( const ClapTrap & ref_Point);
	ClapTrap(std::string name);
	~ClapTrap();

	ClapTrap &operator = ( const ClapTrap & ref_Point);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string getName( void ); 
	void setHitPoints(int point); 
	void setEnergyPoints(int point);
	void setAttackDemage(int point);
};

#endif

