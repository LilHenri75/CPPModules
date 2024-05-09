#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>

class Bureaucrat;

class AForm {
	public:
		// Constructors, destructor and operator=
		AForm();
		AForm(std::string name, int gradeToSign, int gradeToExecute);
		AForm(const AForm &other);
		~AForm();
		AForm &operator=(const AForm &copy);
		// Getters
		std::string getName() const;
		bool getSigned() const;
		int getGradeToExecute() const;
		int getGradeToSign() const;
		// Setters
		void setSigned(bool tmp);
		// Member functions
		void beSigned(const Bureaucrat &bureaucrat);
		virtual void execute(const Bureaucrat &executor) const = 0;
		// Exceptions
		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw() { return "Grade is too high"; };
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw() { return "Grade is too low"; };
		};
		class FormNotSignedException : public std::exception {
			public:
				virtual const char *what() const throw() { return "Form is not signed"; };
		};

	private:
		const std::string _name;
		bool _signed;
		const int _gradeToSign;
		const int _gradeToExecute;
};

std::ostream &operator<<(std::ostream &out, const AForm &form);

#endif