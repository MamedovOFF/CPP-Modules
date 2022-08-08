#include "Bureaucrat.hpp"

int main () {
	 try {
        std::cout << "Test #1. Try to set too low grade (151)" << std::endl;
        Bureaucrat bureaucrat("Bob", 40);
        std::cout << "Success" << std::endl;
    } catch (std::exception &e) {

        std::cout << "Failure : " << std::endl;
        std::cout << e.what();
    }
	try {
        std::cout << "Test #2. Try to set too hight grade (0)" << std::endl;
        Bureaucrat bureaucrat("Bob", 0);
        std::cout << "Success" << std::endl;
    } catch (std::exception &e) {

        std::cout << "Failure : " << std::endl;
        std::cout << e.what();
    }
	try {
        std::cout << "Test #3. Try to set too increment" << std::endl;
        Bureaucrat bureaucrat("Bob", 150);
		bureaucrat.incrementGrade();
		std::cout << bureaucrat;
        std::cout << "Success" << std::endl;
    } catch (std::exception &e) {

        std::cout << "Failure : " << std::endl;
        std::cout << e.what();
    }
	try {
        std::cout << "Test #4. Try to set too decrement" << std::endl;
        Bureaucrat bureaucrat("Bob", 1);
		bureaucrat.decrementGrade();
		std::cout << bureaucrat;
        std::cout << "Success" << std::endl;
    } catch (std::exception &e) {

        std::cout << "Failure : " << std::endl;
        std::cout << e.what();
    }
	return 0;
}