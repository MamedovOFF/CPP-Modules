#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string name;
	int grade;
public:
	Bureaucrat( void );
	Bureaucrat (std::string name, int grade);
	Bureaucrat( const Bureaucrat & ref_Point);

	Bureaucrat &operator = ( const Bureaucrat & ref_Point);


	~Bureaucrat();

	std::string getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();
	void signForm(Form & form);

	class GradeTooHighException : public std::exception { 
		public:
			const char * what () const throw();
	};

	class GradeTooLowException : public std::exception { 
		public:
			const char * what () const throw();
	};
};

std::ostream & operator << ( std::ostream& , const Bureaucrat &);

#endif