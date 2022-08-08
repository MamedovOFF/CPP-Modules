#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): Form("Defualt RobotomyRequestForm", 72, 45)
{
	this->target = "Defult";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("Defualt RobotomyRequestForm", 72, 45)
{
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & ref_Point):Form( ref_Point.getName(), ref_Point.getSignedGrade(), ref_Point.getExecuteGrade()) {
	this->setSigned(ref_Point.getSignedBool());
}

RobotomyRequestForm & RobotomyRequestForm::operator = (const RobotomyRequestForm &form) {

    if (this != &form) {
        this->setSigned(form.getSignedBool());
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::beSigned(Bureaucrat & bureaucrat) {
	if (bureaucrat.getGrade() <= this->getSignedGrade()) this->setSigned(true); 
	else  throw Form::GradeTooLowException();
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	try {
		Form::execute(executor);
		std::cout << "Drrrrrrrrrr........" << std::endl;
		if (rand() % 2 == 0) std::cout << this->target << ": Otherwise, informs that the robotomy failed." << std::endl;
		else std::cout << this->target << ": Otherwise, informs that the robotomy succses." << std::endl;
	} catch (std::exception & e) {
		std::cout << "Execute error: " <<  e.what();
	}
}