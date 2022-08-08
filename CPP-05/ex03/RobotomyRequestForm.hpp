#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm( const RobotomyRequestForm & ref_Point);

	RobotomyRequestForm &operator = ( const RobotomyRequestForm & ref_Point);

	void beSigned(Bureaucrat & bureaucrat);
	void execute(Bureaucrat const & executor) const;
	
	~RobotomyRequestForm();
};

#endif