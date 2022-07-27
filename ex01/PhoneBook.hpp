#include "Contact.hpp"

class PhoneBook
{
private:
	/* data */
	Contact contacts[8];
public:
	PhoneBook();
	~PhoneBook();
	void ADD(Contact contact, int i);
	void printALL();
	void SEARCH(int idx);
	Contact getContact(int idx);
};
