#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>

Base * generate(void) {
	srand(time(NULL));
    int rand = std::rand() % 3;
    switch (rand) {
        case 0:
            std::cout << "created pointer A*" << std::endl;
            return new A();
        case 1:
            std::cout << "created pointer B*" << std::endl;
            return new B();
        case 2:
            std::cout << "created pointer C*" << std::endl;
            return new C();
    }
    return NULL;
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "Class A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Class B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Class C" << std::endl;
	else
		std::cout << "No Base" << std::endl;
}

void identify(Base& p) {
	try {
		A instance;
		instance = dynamic_cast<A&>(p);
		std::cout << "&Type A" << std::endl;
	}	catch (const std::exception&) {}
	try {
		B instance;
		instance = dynamic_cast<B&>(p);
		std::cout << "&Type B" << std::endl;
	}	catch (const std::exception&) {}
		try {
		C instance;
		instance = dynamic_cast<C&>(p);
		std::cout << "&Type C" << std::endl;
	}	catch (const std::exception&) {}
}

int main () {
	Base *base;

	base = generate();
	identify(base);
	identify(*base);
	return 1;
}