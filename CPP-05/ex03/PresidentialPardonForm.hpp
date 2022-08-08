

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm( const PresidentialPardonForm & ref_Point);

	PresidentialPardonForm &operator = ( const PresidentialPardonForm & ref_Point);

	void beSigned(Bureaucrat & bureaucrat);
	void execute(Bureaucrat const & executor) const;
	
	~PresidentialPardonForm();
};


#endif