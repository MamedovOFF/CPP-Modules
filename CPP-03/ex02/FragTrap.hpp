#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
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
};
