#include "RobotomyRequestForm.hpp"

// Constructors

RobotomyRequestForm::RobotomyRequestForm() : AForm("default", 72, 45), _target("default") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Request Form", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other), _target(other._target) {}

// Destructor

RobotomyRequestForm::~RobotomyRequestForm() {}

// Operator=

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy) {
	if (this == &copy)
		return *this;
	AForm::operator=(copy);
	_target = copy._target;
	return *this;
}

// Member functions

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if (this->getSigned() == false)
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > getGradeToExecute())
		throw AForm::GradeTooLowException();
	else {
		std::cout << "*drilling noises* ";
		if (std::rand() < RAND_MAX / 2)
			std::cout << _target << " has been robotomized" << std::endl;
		else
			std::cout << _target << " robotomization failed" << std::endl;
	}
}