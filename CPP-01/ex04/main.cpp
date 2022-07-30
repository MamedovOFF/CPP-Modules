#include <iostream>
#include <fstream>

void replace (std::string fileName, std::string s1, std::string s2) {
		std::ifstream file;
		std::string tmp, res;
		file.open(fileName.data());
		if (!file.is_open()) {
			std::cout << "Error: bad arguments" << std::endl;
			exit(EXIT_FAILURE);
		}
		while (getline(file, tmp)) {
			res += tmp;
			res += '\n';
		}
		file.close();
		int pos = res.find(s1);
		size_t s1_length = std::string(s1).length();
		while (pos != -1) {
			res.erase(pos, s1_length);
			res.insert(pos, std::string(s2));
			pos = res.find(std::string(s1));
		}
		std::ofstream newFile;
		std::string newFileName = std::string(fileName) + ".replace";
		newFile.open(newFileName.data());
		if (!newFile.is_open()) {
			std::cout << "Error: create files" << std::endl;
			exit(EXIT_FAILURE);
		}
		newFile << res;
		newFile.close();
}

int main (int argc, char **argv) {
	if (argc == 4) replace(std::string(argv[1]), std::string(argv[2]), std::string(argv[3]));
	else std::cout << "Error: bad arguments" << std::endl;
	return 0;
}