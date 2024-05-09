#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <cstdlib>

int main( void )
{

	try {
		Bureaucrat bureaucrat("ash",11);
		Form form("formName", 10, 0);
		std::cout << form << std::endl;
		bureaucrat.signForm(form);

		std::cout << form << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return EXIT_SUCCESS;
}