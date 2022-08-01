#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: virtual public FragTrap, virtual public ScavTrap
{
private:
	std::string name;
public:
	DiamondTrap(void);
	DiamondTrap( const DiamondTrap & ref_Point);
	DiamondTrap(std::string name);
	~DiamondTrap();

	DiamondTrap &operator = ( const DiamondTrap & ref_Point);

	void whoAmI();
};
#endif