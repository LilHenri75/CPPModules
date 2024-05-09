#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Bureaucrat;

class Form {
	public:
		// Constructors, destructor and operator=
		Form();
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form(const Form &other);
		~Form();
		Form &operator=(const Form &copy);
		// Getters
		std::string getName() const;
		bool getSigned() const;
		int getGradeToExecute() const;
		int getGradeToSign() const;
		// Setters
		void setSigned(bool tmp);
		// Member functions
		void beSigned(const Bureaucrat &bureaucrat);
		// Exceptions
		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw() { return "Grade is too high"; };
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw() { return "Grade is too low"; };
		};

	private:
		const std::string _name;
		bool _signed;
		const int _gradeToSign;
		const int _gradeToExecute;
};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif