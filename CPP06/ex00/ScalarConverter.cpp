#include "ScalarConverter.hpp"
// #include <iomanip>

// Constructors
ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter &src) {
    *this = src;
}

// Destructor
ScalarConverter::~ScalarConverter() {}

// Operator=
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &src) {
    (void)src;
    return *this;
}

/*
void printResult(int i, float f, double d) {
    std::cout << "int: " << i << std::endl;

    // Print float
    std::cout << "float: " << std::setprecision(7) << f;
    if (std::fabs(f) < 1e7 && f - static_cast<int>(f) == 0) {
        std::cout << ".0";
    }
    std::cout << "f" << std::endl;

    // Print double
    std::cout << "double: " << std::setprecision(15) << d;
    if (std::fabs(d) < 1e15 && d - static_cast<int>(d) == 0) {
        std::cout << ".0";
    }
    std::cout << std::endl;
}*/

void printResult(long i, float f, double d) {
    if (i > INT_MAX || i < INT_MIN) {
        std::cout << "int: impossible" << std::endl;
    } else {
        std::cout << "int: " << i << std::endl;
    }
    std::cout << "float: " << f;
    if (f - static_cast<int>(f) == 0) {
        std::cout << ".0";
    }
    std::cout << "f" << std::endl;
    std::cout << "double: " << d;
    if (d - static_cast<int>(d) == 0) {
        std::cout << ".0";
    }
    std::cout << std::endl;
}

// Function to get the type of the string
t_type getType(const std::string &str) {
    if (str == "-inff" || str == "+inff" || str == "nanf" || 
        str == "-inf" || str == "+inf" || str == "nan" ||
		str == "inff" || str == "inf") {
        return LITERAL;
    }
	if (str.length() == 1 && isprint(str[0]) && !isdigit(str[0])) {
        return CHAR;
    }
    char* endptr;
    strtol(str.c_str(), &endptr, 10);
    if (*endptr == '\0') {
        return INT;
    }
    strtof(str.c_str(), &endptr);
    if (*endptr == 'f' && *(endptr + 1) == '\0') {
        return FLOAT;
    }
    strtod(str.c_str(), &endptr);
    if (*endptr == '\0') {
        return DOUBLE;
    }
    return INVALID;
}

void fromChar(const std::string &str) {
    char c = str[0];
	// Print Non displayable if the character is not printable
	if (!isprint(c)) {
		std::cout << "char: Non displayable" << std::endl;
	} else {
		std::cout << "char: '" << c << "'" << std::endl;
	}
	printResult(static_cast<int>(c), static_cast<float>(c), static_cast<double>(c));
}

void fromInt(const std::string &str) {
    long i = strtol(str.c_str(), NULL, 10);
    if (i < CHAR_MIN || i > CHAR_MAX) {
        std::cout << "char: impossible" << std::endl;
    } else {
        char c = static_cast<char>(i);
        if (isprint(c)) {
			std::cout << "char: '" << c << "'" << std::endl;
		} else {
			std::cout << "char: Non displayable" << std::endl;
		}
    }
    if (i < INT_MIN || i > INT_MAX) {
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    } else {
        printResult(static_cast<int>(i), static_cast<float>(i), static_cast<double>(i));
    }
}

void fromFloat(const std::string &str) {
//    float f = strtof(str.c_str(), NULL);
    float f = static_cast<float>(strtod(str.c_str(), NULL));
    if (f < CHAR_MIN || f > CHAR_MAX) {
        std::cout << "char: impossible" << std::endl;
    } else {
        char c = static_cast<char>(f);
        if (isprint(c)) {
			std::cout << "char: '" << c << "'" << std::endl;
		} else {
			std::cout << "char: Non displayable" << std::endl;
		}
    }
    printResult(static_cast<long>(f), f, static_cast<double>(f));
}

void fromDouble(const std::string &str) {
//    double d = strtod(str.c_str(), NULL);
    double d = static_cast<double>(strtod(str.c_str(), NULL)); 
    if (d < CHAR_MIN || d > CHAR_MAX) {
        std::cout << "char: impossible" << std::endl;
    } else {
        char c = static_cast<char>(d);
        if (isprint(c)) {
			std::cout << "char: '" << c << "'" << std::endl;
		} else {
			std::cout << "char: Non displayable" << std::endl;
		}
    }
    printResult(static_cast<long>(d), static_cast<float>(d), d);
}

// Convert function
void ScalarConverter::convert(const std::string &str) {
    t_type type = getType(str);
    switch (type) {
        case LITERAL:
			std::cout << "char: impossible" << std::endl;
			if (str == "-inff" || str == "-inf") {
				std::cout << "int: impossible" << std::endl;
				std::cout << "float: -inff" << std::endl;
				std::cout << "double: -inf" << std::endl;
			} else if (str == "+inff" || str == "+inf") {
				std::cout << "int: impossible" << std::endl;
				std::cout << "float: +inff" << std::endl;
				std::cout << "double: +inf" << std::endl;
			} else if (str == "nan" || str == "nanf") {
				std::cout << "int: impossible" << std::endl;
				std::cout << "float: nanf" << std::endl;
				std::cout << "double: nan" << std::endl;
			} else if (str == "inf" || str == "inff") {
				std::cout << "int: impossible" << std::endl;
				std::cout << "float: inff" << std::endl;
				std::cout << "double: inf" << std::endl;
			}
			break;
        case CHAR:
            fromChar(str);
            break;
        case INT:
            fromInt(str);
            break;
        case FLOAT:
            fromFloat(str);
            break;
        case DOUBLE:
            fromDouble(str);
            break;
        case INVALID:
        default:
            std::cout << "Error: Invalid input literal" << std::endl;
            break;
    }
}
