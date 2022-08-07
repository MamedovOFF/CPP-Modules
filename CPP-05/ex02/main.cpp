#include "Bureaucrat.hpp"
#include "Form.hpp"

int main () {
    {
        Form form("first", 100, 50);
        Bureaucrat bureaucrat("Bob", 101);

        bureaucrat.signForm(form);
        bureaucrat.incrementGrade();
        bureaucrat.signForm(form);
        std::cout << form ;
    }
 
    try {
        Form form1("second", 151, 50);
    } catch (Form::GradeTooLowException & e) {
        std::cout << e.what();
    }

    try {
        std::cout << "Try to create form with gradeToSign == " << 0 << std::endl;
        Form form1("second", 12, 0);
    } catch (std::exception & e) {
        std::cout << e.what();
    }
	return 0;
}