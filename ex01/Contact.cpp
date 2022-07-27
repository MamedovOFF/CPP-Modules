#include "Contact.hpp"

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->phone_number = phone_number;
	this->darkest_secret = darkest_secret;
	this->creating = false;
}

Contact::~Contact()
{
}
Contact::Contact(){}

std::string Contact::getFirstName() {
	return this->first_name;
}

std::string Contact::getLastName() {
	return this->last_name;
}
std::string Contact::getNickName() {
	return this->nickname;
}

bool Contact::getSwircher () {
	return this->creating;
}

void Contact::switch_create () {
	this->creating = true;
}