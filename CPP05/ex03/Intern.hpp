#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
	public:
		// Constructors, destructor and operator=
		Intern();
		Intern(const Intern &other);
		~Intern();
		Intern &operator=(const Intern &copy);
		// Member functions
		AForm *makeForm(std::string formName, std::string target);
};

#endif