#include "ClapTrap.hpp"

int main( void ) {

    ClapTrap Frodo("Frodo");
    ClapTrap Saruman("Saruman");

	Frodo.attack("Saruman");
    Saruman.attack("Frodo");
    Frodo.takeDamage(11);
    Frodo.beRepaired(5);
    for (int i = 0; i < 8; i++) {
        Frodo.attack("Saruman");
    }
	Frodo.takeDamage(11);
	Frodo.attack("Saruman");
	
    return 0;
}