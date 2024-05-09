#include "ScalarConverter.hpp"

// Constructors

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &src) { *this = src; }

// Destructor

ScalarConverter::~ScalarConverter() {}

// Operator=

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &src) {
	if (this != &src) {}
	return *this;
}

// Convert
void ScalarConverter::convert(const std::string& src) {
	t_type type = getType(src);
	if (type == INVALID) {
		std::cout << "Invalid input" << std::endl;
		return;
	}

/* Test
	if (type == CHAR)
		std::cout << "char: ";
	else if (type == INT)
		std::cout << "int: ";
	else if (type == FLOAT)
		std::cout << "float: ";
	else if (type == DOUBLE)
		std::cout << "double: ";
	else if (type == LITERAL)
		std::cout << "literal: ";
	else if (type == INVALID)
		std::cout << "Invalid input" << std::endl;*/

	if (type == CHAR) {
		std::cout << "char: " << src[0] << std::endl;
		std::cout << "int: " << static_cast<int>(src[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(src[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(src[0]) << ".0" << std::endl;
	} else if (type == LITERAL) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		if (src == "-inff" || src == "+inff" || src == "nanf") {
			std::cout << "float: " << src << std::endl;
		} else {
			std::cout << "float: " << src << "f" << std::endl;
		}
		if (src == "-inf" || src == "+inf" || src == "nan") {
			std::cout << "double: " << src << std::endl;
		} else {
			std::string tmp = src.substr(0, src.length() - 1);
			std::cout << "double: " << tmp << std::endl;
		}
	} else {
		if (type == INT) {
			// Check it is not outside of int range
			long long int tmp = strtoll(src.c_str(), NULL, 10);
			if (tmp < INT_MIN || tmp > INT_MAX) {
				std::cout << "char: impossible" << std::endl;
				std::cout << "int: impossible" << std::endl;
				std::cout << "float: impossible" << std::endl;
				std::cout << "double: impossible" << std::endl;
			} else {
				std::cout << "char: ";
				if (tmp < 32 || tmp > 126) {
					std::cout << "Non displayable" << std::endl;
				} else {
					std::cout << static_cast<char>(tmp) << std::endl;
				}
				std::cout << "int: " << static_cast<int>(tmp) << std::endl;
				std::cout << "float: " << static_cast<float>(tmp) << ".0f" << std::endl;
				std::cout << "double: " << static_cast<double>(tmp) << ".0" << std::endl;
			}
		}
		if (type == FLOAT) {
			float tmp = strtof(src.c_str(), NULL);
			std::cout << "char: ";
			if (tmp < 0 || tmp > 127) {
				std::cout << "impossible" << std::endl;
			} else if (tmp < 32 || tmp > 126) {
				std::cout << "Non displayable" << std::endl;
			} else {
				std::cout << static_cast<char>(tmp) << std::endl;
			}
			std::cout << "int: ";
			if (tmp < INT_MIN || tmp > INT_MAX) {
				std::cout << "impossible" << std::endl;
			} else {
				std::cout << static_cast<int>(tmp) << std::endl;
			}
			std::cout << "float: ";
			if (tmp < -FLT_MAX || tmp > FLT_MAX) {
				std::cout << "impossible" << std::endl;
			} else {
				std::cout << tmp;
				if (tmp == static_cast<int>(tmp)) {
					std::cout << ".0f" << std::endl;
				} else {
					std::cout << "f" << std::endl;
			}
			}
			std::cout << "double: ";
			if (tmp < -FLT_MAX || tmp > FLT_MAX) {
				std::cout << "impossible" << std::endl;
			} else {
			 	std::cout << static_cast<double>(tmp);
				if (tmp == static_cast<int>(tmp)) {
					std::cout << ".0" << std::endl;
				} else {
					std::cout << std::endl;
				}
			}
		}
		if (type == DOUBLE) {
			double tmp = strtod(src.c_str(), NULL);
			std::cout << "char: ";
			if (tmp < 0 || tmp > 127) {
				std::cout << "impossible" << std::endl;
			} else if (tmp < 32 || tmp > 126) {
				std::cout << "Non displayable" << std::endl;
			} else {
				std::cout << static_cast<char>(tmp) << std::endl;
			}
			std::cout << "int: ";
			if (tmp < INT_MIN || tmp > INT_MAX) {
				std::cout << "impossible" << std::endl;
			} else {
				std::cout << static_cast<int>(tmp) << std::endl;
			}
			std::cout << "float: ";
			if (tmp < -FLT_MAX || tmp > FLT_MAX) {
				std::cout << "impossible" << std::endl;
			} else {
				std::cout << static_cast<float>(tmp);
				if (tmp == static_cast<int>(tmp)) {
					std::cout << ".0f" << std::endl;
				} else {
					std::cout << "f" << std::endl;
				}
			}
			std::cout << "double: " << tmp;
			if (tmp == static_cast<int>(tmp)) {
				std::cout << ".0" << std::endl;
			} else {
				std::cout << std::endl;
			}
		}
	}
}

// Utility functions

t_type getType(const std::string &str) {
	if (str.length() == 1 && !isdigit(str[0])) {
		return CHAR;
	} else if (str == "-inff" || str == "+inff" || str == "nanf" || str == "-inf" || str == "+inf" || str == "nan") {
		return LITERAL;
	} else {
		size_t i = 0;
		if (str[i] == '-' || str[i] == '+') {
			i++;
		}
		while (i < str.length() && isdigit(str[i])) {
			i++;
		}
		if (i == str.length()) {
			return INT;
		}
		if (str[i] == '.') {
			i++;
			while (i < str.length() && isdigit(str[i])) {
				i++;
			}
			if (i == str.length()) {
				return DOUBLE;
			}
		}
		if (str[i] == 'f') {
			i++;
			if (i == str.length()) {
				return FLOAT;
			}
		}
	}
	return INVALID;
}
