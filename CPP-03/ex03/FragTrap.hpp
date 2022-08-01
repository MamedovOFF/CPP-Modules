#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
private:
	std::string name;
	int hitPoints;
	int energyPoints;
	int attackDemage;
public:
	FragTrap(void);
	FragTrap( const FragTrap & ref_Point);
	FragTrap(std::string name);
	~FragTrap();

	FragTrap &operator = ( const FragTrap & ref_Point);

	void highFivesGuys(void);
	int getHitPoints() const;
	int getAttackDemage() const;
};

#endif