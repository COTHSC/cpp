#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat {

	public:

	//	Bureaucrat( void );
		Bureaucrat(std::string = "josh", int  = 150);
		Bureaucrat(int  = 150, std::string = "josh");
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat( void );

	//Hello operators.
		Bureaucrat	&operator= ( Bureaucrat const & rhs );
		Bureaucrat	&operator++ ( void );
		Bureaucrat	&operator++ ( int );
		Bureaucrat	&operator-- ( void );
		Bureaucrat	&operator-- ( int );

		std::string getName( void ) const;
		int getGrade( void ) const;
		void	signForm(Form &);

	private:
		std::string const	_name;
		int					_grade;

	class GradeToHighException : public std::exception
	{
		virtual	const char * what( void ) const throw();
	};

	class GradeToLowException : public std::exception
	{
		virtual	const char * what( void ) const throw();
	};


};

std::ostream &operator<< (std::ostream &, Bureaucrat const &);

#endif