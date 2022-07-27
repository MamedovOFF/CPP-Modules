#include <iostream>
#include <string>

class Contact
{
private:
std::string first_name; 
std::string last_name; 
std::string nickname;
std::string phone_number;
std::string darkest_secret;
bool creating;
public:
	Contact();
	Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
	~Contact();
	
	std::string getFirstName();
	std::string getLastName();
	std::string getNickName();
	void switch_create();
	bool getSwircher();
};