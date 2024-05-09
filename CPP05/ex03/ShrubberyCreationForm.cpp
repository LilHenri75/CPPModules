#include "ShrubberyCreationForm.hpp"

// Constructors

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("default", 145, 137), _target("default") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other), _target(other._target) {}

// Destructor

ShrubberyCreationForm::~ShrubberyCreationForm() {}

// Operator=

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy) {
	if (this == &copy)
		return *this;
	AForm::operator=(copy);
	_target = copy._target;
	return *this;
}

// Member functions

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	if (this->getSigned() == false)
		throw AForm::FormNotSignedException();
	else if ( executor.getGrade() > this->getGradeToExecute() ) {
		throw AForm::GradeTooLowException();
	}
	std::cout << "Shrubbery Creation Form is being executed" << std::endl;
	std::string filename = this->getName() + "_shrubbery";
	std::ofstream file(filename.c_str());
		// ASCII art : tree with leaves
	file << "     ^    \n";
	file << "    ^^^   \n";
	file << "   ^^^^^  \n";
	file << "  ^^^^^^^ \n";
	file << " ^^^^^^^^^\n";
	file << "^^^^^^^^^^^\n";
	file << "     |    \n";
	file.close();



}