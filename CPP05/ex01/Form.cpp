#include "Form.hpp"
#include "Bureaucrat.hpp"

// Constructors

Form::Form() : _name("default"), _signed(false), _gradeToSign(150), _gradeToExecute(150) {}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	if (gradeToSign < 1)
		throw Form::GradeTooHighException();
	if (gradeToSign > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &other) : _name(other._name), _signed(other._signed), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {}

// Destructor

Form::~Form() {}

// Operator=

Form &Form::operator=(const Form &copy) {
	if (this == &copy)
		return *this;
	_signed = copy._signed;
	return *this;
}

// Getters

std::string Form::getName() const { return _name; }
bool Form::getSigned() const { return _signed; }
int Form::getGradeToSign() const { return _gradeToSign; }
int Form::getGradeToExecute() const { return _gradeToExecute; }

// Setters

void Form::setSigned(bool tmp) { _signed = tmp; }

// Member functions

void Form::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > _gradeToSign)
		throw Form::GradeTooLowException();
	_signed = true;
}

// ostream operator

std::ostream &operator<<(std::ostream &out, const Form &form) {
    out << "FORM DETAILS" << std::endl;
    out << "Name: " << form.getName() << std::endl;
    out << "Signed: " << (form.getSigned() ? "Yes" : "No") << std::endl;
    out << "Grade to Sign: " << form.getGradeToSign() << std::endl;
    out << "Grade to Execute: " << form.getGradeToExecute() << std::endl;
    return out;
}

// Exceptions
const char* Form::GradeTooHighException::what() const throw() { return "Grade is too high"; }

const char* Form::GradeTooLowException::what() const throw() { return "Grade is too low"; }

