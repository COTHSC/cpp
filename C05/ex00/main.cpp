#include "Bureaucrat.hpp"
int main(void)
{
	Bureaucrat icarus(3);

	std::cout << "\n\n---  TEST TOO HIGH EXCEPTION WHN INCREMENTING A VALID BUREAUCRAT ---\n\n";


	try {
		icarus++;
		++icarus;
		++icarus;
		++icarus;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n\n---  TEST TOO LOW EXCEPTION WHN INCREMENTING A VALID BUREAUCRAT ---\n\n";

	Bureaucrat hades(147);

	try
	{
		--hades;
		hades--;
		hades--;
		hades--;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n\n---  TEST TOO HIGH EXCEPTION WHEN CONSTRUCTING AN INVALID BUREAUCRAT ---\n\n";

	try
	{
		Bureaucrat icarus2(0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "\n\n---  TEST TOO LOW EXCEPTION WHEN CONSTRUCTING AN INVALID BUREAUCRAT ---\n\n";
	
	try
	{
		 Bureaucrat titanic2(151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n\n";

	return 0;
}