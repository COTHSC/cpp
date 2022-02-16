#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {

	public:
		AMateria( void );
		AMateria( AMateria const & src );
		virtual ~AMateria( void );

		AMateria	&operator= ( AMateria const & rhs );
		AMateria(std::string const & type);

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;
	protected:
		std::string _type;
};

#endif