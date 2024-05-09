#include "AForm.hpp"
#include "Bureaucrat.hpp"

// Constructors

AForm::AForm() : _name("default"), _signed(false), _gradeToSign(150), _gradeToExecute(150) {}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	if (gradeToSign < 1)
		throw AForm::GradeTooHighException();
	if (gradeToSign > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &other) : _name(other._name), _signed(other._signed), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {}

// Destructor

AForm::~AForm() {}

// Operator=

AForm &AForm::operator=(const AForm &copy) {
	if (this == &copy)
		return *this;
	_signed = copy._signed;
	return *this;
}

// Getters

std::string AForm::getName() const { return _name; }
bool AForm::getSigned() const { return _signed; }
int AForm::getGradeToSign() const { return _gradeToSign; }
int AForm::getGradeToExecute() const { return _gradeToExecute; }

// Setters

void AForm::setSigned(bool tmp) { _signed = tmp; }

// Member functions

void AForm::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > _gradeToSign)
		throw AForm::GradeTooLowException();
	_signed = true;
}

// ostream operator

std::ostream &operator<<(std::ostream &out, const AForm &form) {
    out << "Form Details: " << std::endl;
    out << "Name: " << form.getName() << std::endl;
    out << "Signed: " << (form.getSigned() ? "Yes" : "No") << std::endl;
    out << "Grade to Sign: " << form.getGradeToSign() << std::endl;
    out << "Grade to Execute: " << form.getGradeToExecute() << std::endl;
    return out;
}


