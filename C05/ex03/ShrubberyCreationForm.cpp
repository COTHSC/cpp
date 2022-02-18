#include "ShrubberyCreationForm.hpp"
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : Form("ShrubberyCreationForm", 137, 145) , _target(target) {

	std::cout << "ShrubberyCreationForm - Default constructor called\n";
	return ;
};

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ){

	std::cout << "ShrubberyCreationForm - Copy constructor called\n";
	*this = src;
	return ;
};

ShrubberyCreationForm::~ShrubberyCreationForm( void ){

	std::cout << "ShrubberyCreationForm - Destructor called\n";
	return;
};

ShrubberyCreationForm	&ShrubberyCreationForm::operator= ( ShrubberyCreationForm const & rhs ){
	Form::operator=(rhs);
	return *this;
};

void 	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	std::ofstream outfile;
	
	isExe(executor);
	outfile.open(&(_target + "_shrubbery")[0]);
	outfile << "       /\\      \n      /\\*\\     \n     /\\O\\*\\    \n    /*/\\/\\/\\   \n   /\\O\\/\\*\\/\\  \n  /\\*\\/\\*\\/\\/\\ \n /\\O\\/\\/*/\\/O/\\\n       ||      \n       ||      \n       ||      \n" << std::endl;
}