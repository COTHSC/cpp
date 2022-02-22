#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern someintern;
	Form *plantTrees = someintern.createForm("shrubbery request", "test_shrub");
	Form *pardont_test = someintern.createForm("presidential pardon", "test_Pardon");
	Form *robotomy_test = someintern.createForm("robotomy request", "test_robotomy");

	
	Bureaucrat	LowRanker("Some Government worker",138);
	Bureaucrat	HighClass("President for life",1);

	someintern.createForm("presidential pardon", "some name");

	std::cout << "\n\nTest to see if the form can be executed without being signed:\n\n";
	
	HighClass.executeForm(*plantTrees);
	
	std::cout << "\n\nForm is signed by LowRanker, who is classed high enough to sign but not execute\n\n";

	LowRanker.signForm(*plantTrees);

	std::cout << "\n\nLowRanker attemps to execute but is ranked too low\n\n";

	LowRanker.executeForm(*plantTrees);

	std::cout << "\n\nHighClass can execute Form signed by LowRanker\n\n";
	
	HighClass.executeForm(*plantTrees);

	std::cout << "\n\nTesting Robotomize Function\n\n";

	HighClass.signForm(*robotomy_test);
	LowRanker.executeForm(*robotomy_test);
	HighClass.executeForm(*robotomy_test);
	HighClass.executeForm(*robotomy_test);
	HighClass.executeForm(*robotomy_test);
	HighClass.executeForm(*robotomy_test);

	std::cout << "\n\nTesting Presidential Pardon Function\n\n";

	HighClass.signForm(*pardont_test);
	LowRanker.executeForm(*pardont_test);
	HighClass.executeForm(*pardont_test);



	std::cout << "\n\n";	
	
	std::cout << "\n\nTesting our interns to see if they can create nonexistant forms\n\n";
	
	plantTrees = someintern.createForm("", "");
	plantTrees = someintern.createForm("notaform", "");

	std::cout << "\n\n";	

	delete pardont_test;
	delete robotomy_test;
	delete	plantTrees;

	return 0;
}
