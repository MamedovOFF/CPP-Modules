#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): name("Null"), grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name), grade(grade) {
	if (this->grade > 150) throw Bureaucrat::GradeTooLowException();
	if (this-> grade < 1) throw Bureaucrat::GradeTooHighException();

}

Bureaucrat::Bureaucrat( const Bureaucrat & ref_Point): name(ref_Point.name), grade(ref_Point.grade) {}


Bureaucrat& Bureaucrat::operator=( const Bureaucrat & ref_Point) {
	if (this == &ref_Point) {
		return *this;
	}
	this->grade = ref_Point.grade;
	return *this;
}

Bureaucrat::~Bureaucrat(){}

std::string Bureaucrat::getName () const  {
	return this->name;
}

int Bureaucrat::getGrade () const {
	return this->grade;
}

void Bureaucrat::incrementGrade () {
	if (--this->grade < 1) throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade () {
	if (++this->grade > 150) throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(Form & form) {
	try {
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	} catch (Form::GradeTooLowException & e) {
		std::cout << this->getName() << " couldn’t sign " << form.getName() << " because " << e.what();
	}
}

const char * Bureaucrat::GradeTooHighException::what () const throw () {
	return "BureaucratException: Grade too High\n";
}

const char * Bureaucrat::GradeTooLowException::what () const throw () {
	return "BureaucratException: Grade too Low\n";
}

std::ostream &operator << ( std::ostream &out, Bureaucrat const &bureaucrat ) {
    return out << bureaucrat.getName()  << ", bureaucrat grade " << bureaucrat.getGrade() << "." << std::endl;
}