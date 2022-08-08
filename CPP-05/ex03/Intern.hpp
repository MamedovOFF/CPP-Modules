#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	private:
		static const std::string formNames[3];

   		Form *createRobotomyRequest(std::string target);

    	Form *createPresidentalPardon(std::string target);

    	Form *createShrubberyCreation(std::string target);

		int findFormIndex(std::string);
	public:
		Intern( void );
		~Intern();

		Form *makeForm(std::string name, std::string target);

	
		class FormNotFound : public std::exception { 
			public:
				const char * what () const throw();
		};
};


#endif