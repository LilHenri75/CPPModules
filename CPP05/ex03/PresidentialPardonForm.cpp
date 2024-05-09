#include "PresidentialPardonForm.hpp"

// Constructors

PresidentialPardonForm::PresidentialPardonForm() : AForm("default", 25, 5), _target("default") {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential Pardon Form", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other), _target(other._target) {}

// Destructor

PresidentialPardonForm::~PresidentialPardonForm() {}

// Operator=

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy) {
	if (this == &copy)
		return *this;
	AForm::operator=(copy);
	_target = copy._target;
	return *this;
}

// Member functions

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if (executor.getGrade() > getGradeToExecute())
		throw AForm::GradeTooLowException();
	else
		std::cout << _target << " has been pardoned" << std::endl;
}