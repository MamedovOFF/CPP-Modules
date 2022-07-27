#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
	
}

void PhoneBook::ADD(Contact contact, int i)
{
	this->contacts[i] = contact;
	this->contacts[i].switch_create();
}

Contact PhoneBook::getContact(int idx)
{
	return this->contacts[idx];
}

void PhoneBook::printALL() {
	std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
	for (int i = 0;  i < 8; i++) {
		if (this->contacts[i].getSwircher()) {
			std::cout << std::setw(10) << i + 1 << "|";
			if (this->contacts[i].getFirstName().length() > 10) {
				std::cout << std::setw(9) << this->contacts[i].getFirstName().substr(0, 9) << ".|";
			} else {
				std::cout << std::setw(10) << this->contacts[i].getFirstName() << "|" ;
			}
			if (this->contacts[i].getLastName().length() > 10) {
				std::cout << std::setw(9) << this->contacts[i].getLastName().substr(0, 9) << ".|";
			} else {
				std::cout << std::setw(10) << this->contacts[i].getLastName() << "|";
			} 
			if (this->contacts[i].getNickName().length() > 10) {
				std::cout << std::setw(9) << this->contacts[i].getNickName().substr(0, 9) << std::endl;
			} else {
				std::cout << std::setw(10) << this->contacts[i].getNickName() << std::endl;
			}
		}
	}
}

void PhoneBook::SEARCH (int idx) {
	Contact temp = this->getContact(idx - 1);
	if (temp.getSwircher()) {
		std::cout << idx << ' ' + temp.getFirstName() + ' ' << temp.getLastName() + ' ' << temp.getNickName() + ' ' << std::endl;
	}
}