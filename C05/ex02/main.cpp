#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	ShrubberyCreationForm PlantTrees("Shrub");
	PresidentialPardonForm pardont_test("Pardon");
	RobotomyRequestForm robotomy_test("Robotomy");
	
	Bureaucrat	LowRanker("Some Government worker",138);
	Bureaucrat	HighClass("President for life",1);

	std::cout << "\n\nTest to see if the form can be executed without being signed:\n\n";
	
	HighClass.executeForm(PlantTrees);
	
	std::cout << "\n\nForm is signed by LowRanker, who is classed high enough to sign but not execute\n\n";

	LowRanker.signForm(PlantTrees);

	std::cout << "\n\nLowRanker attemps to execute but is ranked too low\n\n";

	LowRanker.executeForm(PlantTrees);

	std::cout << "\n\nHighClass can execute Form signed by LowRanker\n\n";
	
	HighClass.executeForm(PlantTrees);

	std::cout << "\n\nTesting Robotomize Function\n\n";

	HighClass.signForm(robotomy_test);
	LowRanker.executeForm(robotomy_test);
	HighClass.executeForm(robotomy_test);
	HighClass.executeForm(robotomy_test);
	HighClass.executeForm(robotomy_test);
	HighClass.executeForm(robotomy_test);

	std::cout << "\n\nTesting Presidential Pardon Function\n\n";

	HighClass.signForm(pardont_test);
	LowRanker.executeForm(pardont_test);
	HighClass.executeForm(pardont_test);



	std::cout << "\n\n";

	return 0;
}