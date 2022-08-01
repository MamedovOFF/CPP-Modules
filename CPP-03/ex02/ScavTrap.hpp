#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
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
};


