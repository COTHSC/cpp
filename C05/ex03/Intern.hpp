#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"

class Intern {

	public:

		Intern( void );
		Intern( Intern const & src );
		~Intern( void );

		Intern	&operator= ( Intern const & rhs );

		Form	*createForm(std::string, std::string);
		Form	*createPresidentialPardon(std::string);
		Form	*createRobotomyRequest(std::string);
		Form	*createShrubberyRequest(std::string);
};
#endif
