#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): Form("Defualt ShrubberyCreationForm", 145, 137)
{
	this->target = "Defult";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("Defualt ShrubberyCreationForm", 145, 137)
{
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & ref_Point):Form( ref_Point.getName(), ref_Point.getSignedGrade(), ref_Point.getExecuteGrade()) {
	this->setSigned(ref_Point.getSignedBool());
}

ShrubberyCreationForm & ShrubberyCreationForm::operator = (const ShrubberyCreationForm &form) {

    if (this != &form) {
        this->setSigned(form.getSignedBool());
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::beSigned(Bureaucrat & bureaucrat) {
	if (bureaucrat.getGrade() <= this->getSignedGrade()) this->setSigned(true); 
	else  throw Form::GradeTooLowException();
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	try {
		Form::execute(executor);
		std::ofstream outfile;
    	outfile.open(this->target + "_shrubbery");
    	if (outfile.is_open()) {
        	outfile << ASCII_THREE << std::endl;
			outfile.close(); 
    	} else  throw std::ios::failure( "Error opening file!" );
	} catch (std::exception & e) {
		std::cout << "Execute error: " <<  e.what();
	}
}