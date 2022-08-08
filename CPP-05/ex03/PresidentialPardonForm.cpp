#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): Form("Defualt PresidentialPardonForm", 25, 5)
{
	this->target = "Defult";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("Defualt PresidentialPardonForm", 25, 5)
{
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & ref_Point):Form( ref_Point.getName(), ref_Point.getSignedGrade(), ref_Point.getExecuteGrade()) {
	this->setSigned(ref_Point.getSignedBool());
}

PresidentialPardonForm & PresidentialPardonForm::operator = (const PresidentialPardonForm &form) {

    if (this != &form) {
        this->setSigned(form.getSignedBool());
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::beSigned(Bureaucrat & bureaucrat) {
	if (bureaucrat.getGrade() <= this->getSignedGrade()) this->setSigned(true); 
	else  throw Form::GradeTooLowException();
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	try {
		Form::execute(executor);
		std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	} catch (std::exception & e) {
		std::cout << "Execute error: " <<  e.what();
	}
}