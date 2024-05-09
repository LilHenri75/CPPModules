#include "Intern.hpp"

// Constructors

Intern::Intern() {}

Intern::Intern(const Intern &other) {
	*this = other;
}

// Destructor

Intern::~Intern() {}

// Operator=

Intern &Intern::operator=(const Intern &copy) {
	if (this == &copy)
		return *this;
	return *this;
}

// Member functions

AForm *Intern::makeForm(std::string formName, std::string target) {
	std::string formNames[3] = {"Shrubbery creation", "Robotomy request", "Presidential pardon"};
	AForm *form[] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
	for (int i = 0; i < 3; i++) {
		if (formNames[i] == formName) {
			std::cout << "Intern creates " << formName << std::endl;
			return form[i];
		}
	}
	std::cout << "Intern cannot create " << formName << std::endl;
	return NULL;
}