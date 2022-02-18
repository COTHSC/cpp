#include "RobotomyRequestForm.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form("RobotomyRequestForm", 137, 145), _target(target) {

	srand(time(NULL));
	std::cout << "RobotomyRequestForm - Default constructor called\n";
	return ;
};

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ){

	std::cout << "RobotomyRequestForm - Copy constructor called\n";
	*this = src;
	return ;
};

RobotomyRequestForm::~RobotomyRequestForm( void ){

	std::cout << "RobotomyRequestForm - Destructor called\n";
	return;
};

RobotomyRequestForm	&RobotomyRequestForm::operator= ( RobotomyRequestForm const & rhs ){
     
	 Form::operator=(rhs);                                                      
     return *this; 
};

void 	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	isExe(executor);
	if (rand() % 2)
		std::cout << _target <<" has been succesfully robotomized\n";
	else
		std::cout << _target <<" was not robotomized do to an internal server error, we are sorry for this inconvenience and hope to see again soon\n";
}