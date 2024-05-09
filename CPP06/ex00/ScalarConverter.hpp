#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <climits>
#include <cfloat>
#include <cmath>

typedef enum e_type {
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	LITERAL,
	INVALID
} t_type;

class ScalarConverter {
	public:
		// Constructors
		ScalarConverter();
		ScalarConverter(const ScalarConverter &src);
		// Destructor
		~ScalarConverter();
		// Operator=
		ScalarConverter &operator=(const ScalarConverter &src);
		// Convert
		static void convert(const std::string &str);
};

// Function that returns the type of the string
t_type getType(const std::string &str);

#endif