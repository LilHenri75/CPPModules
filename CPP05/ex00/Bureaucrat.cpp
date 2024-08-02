#include "Bureaucrat.hpp"

// Constructors

Bureaucrat::Bureaucrat() : _name("default"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name), _grade(copy._grade) {}

// Destructor

Bureaucrat::~Bureaucrat() {}

// Operator=

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy) {
	if (this == &copy)
		return *this;
	_grade = copy._grade;
	return *this;
}

// ostream operator

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat) {
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return out;
}

// Getters

int Bureaucrat::getGrade() const { return _grade; }

std::string Bureaucrat::getName() const { return _name; }

// Setters

void Bureaucrat::setGrade(int grade) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
}

// Decrement and increment grade

void Bureaucrat::incrementGrade() {
	if (_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void Bureaucrat::decrementGrade() {
	if (_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

// Exceptions
const char* Bureaucrat::GradeTooHighException::what() const throw() { return "Grade is too high"; }

const char* Bureaucrat::GradeTooLowException::what() const throw() { return "Grade is too low"; }