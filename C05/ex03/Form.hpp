#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

// In all cases, the base class Form must be an abstract class. Keep in mind the form’s
// attributes need to remain private and that they are in the base class.
// Add the following concrete classes:


// • ShrubberyCreationForm: Required grades: sign 145, exec 137
// Create a file <target>_shrubbery in the working directory, and writes ASCII trees
// inside it.

// • RobotomyRequestForm: Required grades: sign 72, exec 45
// Makes some drilling noises. Then, informs that <target> has been robotomized
// successfully 50% of the time. Otherwise, informs that the robotomy failed.

// • PresidentialPardonForm: Required grades: sign 25, exec 5
// Informs that <target> has been pardoned by Zaphod Beeblebrox.
// All of them take only one parameter in their constructor: the target of the form. For
// example, "home" if you want to plant shrubbery at home.

// Now, add the execute(Bureaucrat const & executor) const member function to
// the base form and implement a function to execute the form’s action of the concrete
// classes. You have to check that the form is signed and that the grade of the bureaucrat
// attempting to execute the form is high enough. Otherwise, throw an appropriate exception.
// Whether you want to check the requirements in every concrete class or in the base
// class (then call another function to execute the form) is up to you. However, one way is
// prettier than the other one.
// Lastly, add the executeForm(Form const & form) member function to the Bureaucrat. It must attempt to execute the form. If it’s successful, print something like:

class Form {

	public:

		Form( void );
		Form( std::string, int, int );
		Form( Form const & src );
		virtual ~Form( void );

		int			getGradeToSign( void ) const;
		int			getGradeToExecute( void ) const;
		std::string	getName( void ) const;
		bool		getIsSigned( void ) const;
		void		beSigned(Bureaucrat const &);
		void		isExe(Bureaucrat const & executor) const;

		virtual void 		execute(Bureaucrat const & executor) const = 0;
		Form	&operator= ( Form const & rhs );
		
		class GradeToHighException : public std::exception
		{
			virtual	const char * what( void ) const throw();
		};

		class NotSignedException : public std::exception
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
	private:
		std::string const _name;
		bool _isSigned;
		int const _gradeToExecute;
		int const _gradeToSign;
};

std::ostream &operator<< (std::ostream &, Form const &);

#endif