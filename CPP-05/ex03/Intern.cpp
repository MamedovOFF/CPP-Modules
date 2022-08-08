#include "Intern.hpp"

const std::string	Intern::formNames[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};

Intern::Intern(){}

Intern::~Intern(){
	
}

Form *Intern::createPresidentalPardon(std::string target) {
	std::cout << "Intern: Create createPresidentalPardon" << std::endl;
	return new PresidentialPardonForm(target);
}

Form *Intern::createShrubberyCreation(std::string target) {
	std::cout << "Intern: Create createShrubberyCreation" << std::endl;
    return new ShrubberyCreationForm(target);
}

Form *Intern::createRobotomyRequest(std::string target) {
	std::cout << "Intern: Create createRobotomyRequest" << std::endl;
    return new RobotomyRequestForm(target);
}

int Intern::findFormIndex( std::string formName ) {

    for (int i = 0; i < 3; i++) {
        if (0 == Intern::formNames[i].compare(formName)) return i;
    }
    throw Intern::FormNotFound();
}

Form *Intern::makeForm( std::string formName, std::string target) {

    Form *(Intern::*funcs_arr[3])( std::string target ) = {&Intern::createRobotomyRequest, &Intern::createPresidentalPardon, &Intern::createShrubberyCreation};
    return (this->*funcs_arr[findFormIndex(formName)]) (target);

}

const char * Intern::FormNotFound::what () const throw () {
	return "Intern: Form Not Found\n";
}