#include "Zombie.hpp"

int main() {
	Zombie* horde = zombieHorde(10, "Foo");
	delete[] horde;
	return 0;
}