#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main () {
	Animal *animals[10];
	for (int i = 0; i < 10; i++){
		if (i % 2  == 0){
			animals[i] = new Dog();
		}
		else {
			animals[i] = new Cat();
		}
		animals[i]->makeSound();
	}

	for (int i = 0; i < 10; i++) {
		delete animals[i];
	}
	return 0;
}