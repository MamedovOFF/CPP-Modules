#include "Zombie.hpp"

int main() {
	Zombie *Fedor = newZombie("Fedor");
	Zombie Alex("Alex");
	Fedor->announce();
	Alex.announce();
	randomChump("LExa");
	randomChump("Foo");
	delete Fedor;
	return 0;
}