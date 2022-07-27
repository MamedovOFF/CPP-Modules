#include "PhoneBook.hpp"

Contact fill_contact() {
	std::string firts_name;
	std::string last_name;
	std::string nickname;
	std::string number;
	std::string dark_secreet;

	std::cout << "First Name: ";
	std::cin >> firts_name;
	std::cout << "Last Name: ";
	std::cin >> last_name;
	std::cout << "Nickname: ";
	std::cin >> nickname;
	std::cout << "Phone Number: ";
	std::cin >> number;
	std::cout << "Dark Secreet: ";
	std::cin >> dark_secreet;

	Contact contact(firts_name, last_name, nickname, number, dark_secreet);
	return contact;
}

int main() {
	PhoneBook phoneBook;
	int i = 0;
	int idx;
	std::string type_value;
	while (true)
	{
		std::cout << "Please select: 'ADD', 'SEARCH', 'EXIT' " << std::endl;
		std::cin >> type_value;
		if (type_value == "ADD")
		{
			if (i == 8) {
				i = 0;
			}
			phoneBook.ADD(fill_contact(), i);
			i++;
		}
		else if (type_value == "SEARCH")
		{
			phoneBook.printALL();
			std::cout << "Please enter the index: ";
			std::cin >> idx;
			if (idx)
				phoneBook.SEARCH(idx);
			else {
				std::cout << "You didn't enter an index" << std::endl;
				break;
			}
		}
		else if (type_value == "EXIT")
		{
			 std::cout << "Good Bye" << std::endl;
			 break;
		}
	}
	return 0;
}