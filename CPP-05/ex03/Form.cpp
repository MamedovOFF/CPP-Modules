#include "Form.hpp"

Form::Form(void): name("Null"),  signedBool(false), signedGrade(150), executeGrade(150) {}

Form::Form(std::string name, int signedGrade, int executeGrade): name(name), signedBool(false), signedGrade(signedGrade), executeGrade(executeGrade) {
	if (this->signedGrade > 150 ||  this->executeGrade > 150) throw Form::GradeTooLowException();
	if (this->signedGrade < 1 || this->executeGrade < 1) throw Form::GradeTooHighException();
}

Form::Form( const Form & ref_Point): name(ref_Point.name),  signedBool(ref_Point.signedBool), signedGrade(ref_Point.signedGrade), executeGrade(ref_Point.executeGrade) {}

Form& Form::operator = ( const Form & ref_Point) {
	if (this == &ref_Point) {
		return *this;
	}
	this->signedBool = ref_Point.signedBool;
	return *this;
}

Form::~Form(){}

void Form::beSigned(Bureaucrat & bureaucrat) {
	if (bureaucrat.getGrade() <= this->signedGrade) this->signedBool = true; 
	else  throw Form::GradeTooLowException();
}

void Form::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > this->executeGrade) throw Form::GradeTooLowException();
	if (!this->getSignedBool()) throw Form::FormIsNotSigned();
}

std::string Form::getName() const {
	return this->name;
}

int Form::getExecuteGrade () const {
	return this->executeGrade;
}

int Form::getSignedGrade () const {
	return this->signedGrade;
}

bool Form::getSignedBool () const {
	return this->signedBool;
}

void Form::setSigned(bool sign) {
	this->signedBool = sign;
}

const char * Form::GradeTooHighException::what () const throw () {
	return "Form: Grade too High\n";
}

const char * Form::GradeTooLowException::what () const throw () {
	return "Form: Grade too Low\n";
}

const char * Form::FormIsNotSigned::what () const throw () {
	return "Form: not signed\n";
}

std::ostream &operator << ( std::ostream &out, Form const &form ) {
    return out << "Form: " << form.getName() << " [ " << (form.getSignedBool() ? "Signed" : "Unsigned")
		<< " ] (SignedGrade:" << form.getSignedGrade() << " ExecuteGrade:"
		<< form.getExecuteGrade() << ")" << std::endl;
}
