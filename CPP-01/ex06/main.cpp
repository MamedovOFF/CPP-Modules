#include "Harl.hpp"

int main(int argc, char **argv) {
	if (argc == 2) {
		Harl test;
		test.complain(std::string(argv[1]));
	}
	return 0;
}