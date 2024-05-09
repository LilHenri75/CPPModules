#include "Bureaucrat.hpp"
#include <cstdlib>

int main( void )
{
	try {
		Bureaucrat bureaucrat("Test", 1);
		std::cout << bureaucrat << std::endl;
		bureaucrat.incrementGrade();
//		bureaucrat.decrementGrade();
		std::cout << bureaucrat << std::endl;
	} catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
	}
	return EXIT_SUCCESS;
}