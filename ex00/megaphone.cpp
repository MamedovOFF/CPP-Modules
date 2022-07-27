#include <iostream>
#include <cstring>

int main(int argc, char **argv) {
	if (argc > 1) {
		for (int i = 1; i < argc; i++) {
			std::string name = argv[i];
			for(size_t j = 0; j < name.length(); j++)
				name[j] = toupper(name[j]);
			std::cout << name;
		}
		std::cout<<std::endl;
	}
	else {
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	return 0;
}
