#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm( std::string target ) :  Form("PresidentialPardonForm", 137, 145), _target(target) {

	std::cout << "PresidentialPardonForm - Default constructor called\n";
	return ;
};

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ) {

	std::cout << "PresidentialPardonForm - Copy constructor called\n";
	*this = src;
	return ;
};

PresidentialPardonForm::~PresidentialPardonForm( void ) {

	std::cout << "PresidentialPardonForm - Destructor called\n";
	return;
};

PresidentialPardonForm	&PresidentialPardonForm::operator= ( PresidentialPardonForm const & rhs ) {

	if (this != &rhs)
		*this = rhs;
	return *this;
};

void 	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	isExe(executor);
	std::cout << _target << " has been officially been Pardonned by universe president for life Zaphod Beeblebrox, all hail our benevolent overlord, may he live a long and fruitfull life and bear many children." << std::endl;
}