#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main( void )
{
	std::srand(time(NULL));
	Intern intern;

	AForm *form1 = intern.makeForm("Shrubery creation", "Shrbbery");
	AForm *form2 = intern.makeForm("Robotomy request", "Robotomy");
	AForm *form3 = intern.makeForm("Presidential pardon", "President");

	try {
		Bureaucrat bureaucrat("Theo", 150);
		if (form1) {
			bureaucrat.executeForm(*form1);
			bureaucrat.executeForm(*form1);
		} if (form2) {
			bureaucrat.signForm(*form2);
			bureaucrat.executeForm(*form2);
		} if (form3) {
			bureaucrat.signForm(*form3);
			bureaucrat.executeForm(*form3);
		}
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}