#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <stdlib.h>
// • RobotomyRequestForm: Required grades: sign 145, exec 137
// Create a file <target>_shrubbery in the working directory, and writes ASCII trees
// inside it.

class RobotomyRequestForm : public Form {

	public:

		RobotomyRequestForm( std::string target = "Some_target" );
		RobotomyRequestForm( RobotomyRequestForm const & src );
		~RobotomyRequestForm( void );
		RobotomyRequestForm	&operator= ( RobotomyRequestForm const & rhs );

		void 		execute(Bureaucrat const & executor) const;
	private:
		std::string _target;

};
#endif
