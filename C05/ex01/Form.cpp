#include "Form.hpp"
#include <iostream>

Form::Form( void ) : _name("some random form"), _isSigned(0), _gradeToExecute(1), _gradeToSign(150)
{
	if (_gradeToExecute > 150 || _gradeToSign > 150)
		throw Form::GradeToLowException();
	else if (_gradeToExecute < 1 || _gradeToSign < 1)
		throw Form::GradeToHighException();
	std::cout << "Form - Default constructor called\n";
	return ;
};

Form::Form( std::string name, int gradeEx, int gradeSign ) : _name(name), _isSigned(0), _gradeToExecute(gradeEx), _gradeToSign(gradeSign)
{
	if (_gradeToExecute > 150 || _gradeToSign > 150)
		throw Form::GradeToLowException();
	else if (_gradeToExecute < 1 || _gradeToSign < 1)
		throw Form::GradeToHighException();
	std::cout << "Form - Default constructor called\n";
	return ;
};

Form::Form( Form const & src ) : _isSigned(src._isSigned) , _gradeToExecute(src._gradeToExecute), _gradeToSign(src._gradeToExecute) 
{

	std::cout << "Form - Copy constructor called\n";
	*this = src;
	return ;
};

Form::~Form( void ){

	std::cout << "Form - Destructor called\n";
	return;
};

Form	&Form::operator= ( Form const & rhs ){
	if (this != &rhs)
		*this = rhs;                                                            
	return *this;
}

int	Form::getGradeToSign() const{
	return _gradeToSign;
}

int	Form::getGradeToExecute() const{
	return _gradeToExecute;
}

std::string	Form::getName() const{
	return _name;
}

bool	Form::getIsSigned() const{
	return _isSigned;
}

void Form::beSigned(Bureaucrat const & signer)
{
	if (_isSigned)
		throw Form::AlreadySignedException();
	if (signer.getGrade() <= this->getGradeToSign())
		_isSigned = 1;
	else
		throw Form::GradeToLowException();
}

const char * Form::GradeToHighException::what( void ) const throw()
{
	return ("EXCEPTION out of range, bureaucrat cannot be so high");
}

const char * Form::AlreadySignedException::what( void ) const throw()
{
	return ("Form is already signed (exception)");
}

const char * Form::GradeToLowException::what( void ) const throw()
{
	return ("EXCEPTION out of range, bureaucrat cannot be so low");
}

std::ostream &operator<< (std::ostream & o, Form const & rhs)
{
	o << "Form Name:        " << rhs.getName() << std::endl;
	o << "Grade to sign:    " << rhs.getGradeToSign() << std::endl;
	o << "Grade to Execute: " << rhs.getGradeToExecute() << std::endl;
	o << "status:           "; 
	if (rhs.getIsSigned())
		std::cout << "signed";
	else
		std::cout << "not signed";
	return o;
}