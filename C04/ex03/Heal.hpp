#ifndef HEAL_HPP
#define HEAL_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"


class Heal : public AMateria {

	public:
	 Heal( void );
	 Heal( Heal const & src );
	 ~Heal( void );
	 Heal	&operator= ( Heal const & rhs );
	 void	use(ICharacter & character); 
	 virtual AMateria* clone() const ;
	private:
};
#endif