#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

// • ShrubberyCreationForm: Required grades: sign 145, exec 137
// Create a file <target>_shrubbery in the working directory, and writes ASCII trees
// inside it.

class ShrubberyCreationForm : public Form {

	public:

		ShrubberyCreationForm( std::string target = "Some_target" );
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		~ShrubberyCreationForm( void );
		ShrubberyCreationForm	&operator= ( ShrubberyCreationForm const & rhs );

		void 		execute(Bureaucrat const & executor) const;
	//	void		beSigned(Bureaucrat const &);
	private:
		std::string _target;

};
#endif
