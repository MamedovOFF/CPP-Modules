#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main () {
    {
        ShrubberyCreationForm  form1("first");
        Bureaucrat bureaucrat("Bob", 150);

        bureaucrat.signForm(form1);
        bureaucrat.incrementGrade();
        bureaucrat.signForm(form1);
        form1.execute(bureaucrat);
        std::cout << form1 ;
    }

    {
        RobotomyRequestForm  form1("first");
        Bureaucrat bureaucrat("Bob", 30);

        // bureaucrat.signForm(form1);
        bureaucrat.incrementGrade();
        // bureaucrat.signForm(form1);
        form1.execute(bureaucrat);
        std::cout << form1 ;
    }

        {
        PresidentialPardonForm  form1("first");
        Bureaucrat bureaucrat("Bob", 5);

        bureaucrat.signForm(form1);
        bureaucrat.incrementGrade();
        bureaucrat.signForm(form1);
        bureaucrat.executeForm(form1);
        std::cout << form1 ;
    }

	return 0;
}