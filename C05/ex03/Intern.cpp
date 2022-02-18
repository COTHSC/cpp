#include "Intern.hpp"
#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern( void ){

	std::cout << "Intern - Default constructor called\n";
	return ;
};

Intern::Intern( Intern const & src ){

	std::cout << "Intern - Copy constructor called\n";
	*this = src;
	return ;
};

Intern::~Intern( void ){

	std::cout << "Intern - Destructor called\n";
	return;
};

Intern	&Intern::operator= ( Intern const & rhs ) {
	if (this != &rhs)
		*this = rhs;
	return *this;
};

Form	*Intern::createPresidentialPardon(std::string name)
{
	return (new PresidentialPardonForm(name));
}

Form	*Intern::createRobotomyRequest(std::string name)
{
	return (new RobotomyRequestForm(name));
}

Form	*Intern::createShrubberyRequest(std::string name)
{
	return (new ShrubberyCreationForm(name));
}

Form*	Intern::createForm(std::string formToCreate, std::string formName) {
	const std::string   levels[3] = {"presidential pardon", "robotomy request", "shrubbery request"};      
    Form *(Intern::*functptr[3])(std::string) = {&Intern::createPresidentialPardon, &Intern::createRobotomyRequest, &Intern::createShrubberyRequest} ;

	for (int i = 0; i < 3; i++)
	{
		if (levels[i] == formToCreate)
			return (this->*functptr[i])(formName);
	}
	std::cout << "This intern is clearly incompetent and does not know how to create this form, if he wasn't your golf buddy's son he definitely should be fired." << std::endl;
	return NULL;
}