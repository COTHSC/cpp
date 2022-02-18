#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

// • PresidentialPardonForm: Required grades: sign 145, exec 137
// Create a file <target>_shrubbery in the working directory, and writes ASCII trees
// inside it.

class PresidentialPardonForm : public Form {

	public:

		PresidentialPardonForm( std::string target = "Some_target" );
		PresidentialPardonForm( PresidentialPardonForm const & src );
		~PresidentialPardonForm( void );
		PresidentialPardonForm	&operator= ( PresidentialPardonForm const & rhs );

		void 		execute(Bureaucrat const & executor) const;
	private:
		std::string _target;

};
#endif
