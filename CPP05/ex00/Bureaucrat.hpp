#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>


class Bureaucrat {
	public:
		// Constructors, destructor and operator=
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &other);
		virtual ~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &copy);
		// Getters
		int getGrade() const;
		std::string getName() const;
		// Setters
		void setGrade(int grade);
		// Member functions
		void incrementGrade();
		void decrementGrade();
		// Exceptions
		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

	protected:
		const std::string _name;
		int _grade;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif