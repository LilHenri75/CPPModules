#ifndef SHRUUBBERYCREATIONFORM_HPP
#define SHRUUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm {
	public:
		// Constructors, destructor and operator=
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &other);
		~ShrubberyCreationForm();
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &copy);
		// Member functions
		void execute(const Bureaucrat &executor) const;

	private:
		std::string _target;
};

#endif