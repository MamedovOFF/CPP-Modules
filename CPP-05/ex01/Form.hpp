#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string name;
	bool signedBool;
	const int signedGrade;
	const int executeGrade;
public:
	Form( void );
	Form (std::string name, int signedGrade, int executeGrade);
	Form( const Form & ref_Point);

	Form &operator = ( const Form & ref_Point);
	
	std::string getName() const;
	int getSignedGrade() const;
	int getExecuteGrade() const;
	bool getSignedBool() const;
	void beSigned(Bureaucrat  & bureaucrat);

	class GradeTooHighException : public std::exception { 
		public:
			const char * what () const throw();
	};

	class GradeTooLowException : public std::exception { 
		public:
			const char * what () const throw();
	};

	~Form();
};

std::ostream & operator << ( std::ostream& , const Form &);

#endif