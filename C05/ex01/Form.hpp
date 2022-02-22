#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	public:

		Form( void );
		Form( std::string, int, int );
		Form( Form const & src );
		~Form( void );

		//getters for some reason
		int			getGradeToSign( void ) const;
		int			getGradeToExecute( void ) const;
		std::string	getName( void ) const;
		bool		getIsSigned( void ) const;

		void		beSigned(Bureaucrat const &);
		
		Form	&operator= ( Form const & rhs );


	private:
		std::string const _name;
		bool _isSigned;
		int const _gradeToExecute;
		int const _gradeToSign;
		
		class GradeToHighException : public std::exception
		{
			virtual	const char * what( void ) const throw();
		};

		class GradeToLowException : public std::exception
		{
			virtual	const char * what( void ) const throw();
		};
		class AlreadySignedException : public std::exception
		{
			virtual	const char * what( void ) const throw();
		};
};

std::ostream &operator<< (std::ostream &, Form const &);

#endif
