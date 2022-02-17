#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(std::string name, int grade ) : _name(name) {
	if (grade < 1)
		throw GradeToHighException();
	else if (grade > 150)
		throw GradeToLowException();
	_grade = grade;
	std::cout << "Bureaucrat - Default constructor called\n";
	return ;
};

Bureaucrat::Bureaucrat(int grade, std::string name) : _name(name) {
	if (grade < 1)
		throw GradeToHighException();
	else if (grade > 150)
		throw GradeToLowException();
	_grade = grade;
	std::cout << "Bureaucrat - Default constructor called\n";
	return ;
};

Bureaucrat::Bureaucrat( Bureaucrat const & src ){

	std::cout << "Bureaucrat - Copy constructor called\n";
	*this = src;
	return ;
};

Bureaucrat::~Bureaucrat( void ){

	std::cout << "Bureaucrat - Destructor called\n";
	return;
};

std::string Bureaucrat::getName() const
{
	return _name;
};

int Bureaucrat::getGrade() const
{
	return _grade;
};

Bureaucrat	&Bureaucrat::operator= ( Bureaucrat const & rhs ) {
	_grade = rhs._grade;
	return *this;
};

const char * Bureaucrat::GradeToHighException::what( void ) const throw()
{
	return ("EXCEPTION out of range, bureaucrat cannot be so high");
}

const char * Bureaucrat::GradeToLowException::what( void ) const throw()
{
	return ("EXCEPTION out of range, bureaucrat cannot be so low");
}

Bureaucrat &Bureaucrat::operator++ (void)
{
	if (_grade == 1)
		throw Bureaucrat::GradeToHighException();
	--this->_grade;
	std::cout << this->getName() << " has been promoted and is now: " << this->getGrade() << std::endl;
	return *this;
};

Bureaucrat &Bureaucrat::operator++ (int)
{
	Bureaucrat *tmp = this;
	if (_grade == 1)
		throw Bureaucrat::GradeToHighException();
	--this->_grade;
	std::cout << this->getName() << " has been promoted and is now: " << this->getGrade() << std::endl;
	return *tmp;
};

Bureaucrat &Bureaucrat::operator-- (void)
{
	if ((_grade + 1) > 150)
		throw Bureaucrat::GradeToLowException();
	++this->_grade;
	std::cout << this->getName() << " has been demoted and is now: " << this->getGrade() << std::endl;
	return *this;
};

Bureaucrat &Bureaucrat::operator-- (int)
{
	Bureaucrat *tmp = this;
	if ((this->_grade + 1) > 150)
		throw Bureaucrat::GradeToLowException();
	++this->_grade;
	std::cout << this->getName() << " has been demoted and is now: " << this->getGrade() << std::endl;
	return *tmp;
};

std::ostream &operator<< (std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return o;
}

