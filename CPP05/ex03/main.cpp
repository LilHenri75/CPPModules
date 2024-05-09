#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main( void )
{
	Intern intern;

	AForm *form1 = intern.makeForm("Shrubbery creation", "Shrubbery");
	AForm *form2 = intern.makeForm("Robotomy request", "Robotomy");
	AForm *form3 = intern.makeForm("Presidential pardon", "President");

	try {
		Bureaucrat bureaucrat("Theo", 100);
		bureaucrat.signForm(*form1);
		bureaucrat.executeForm(*form1);
		bureaucrat.signForm(*form2);
		bureaucrat.executeForm(*form2);
		bureaucrat.signForm(*form3);
		bureaucrat.executeForm(*form3);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}