#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
private:
	std::string name;
	int hitPoints;
	int energyPoints;
	int attackDemage;
public:
	ScavTrap(void);
	ScavTrap( const ScavTrap & ref_Point);
	ScavTrap(std::string name);
	~ScavTrap();

	ScavTrap &operator = ( const ScavTrap & ref_Point);

	void attack(const std::string& target);
	void guardGate();
	int getEnergyPoints() const;
};
#endif

