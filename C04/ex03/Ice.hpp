#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"


class Ice : public AMateria {

	public:
		Ice( void );
		Ice( Ice const & src );
		~Ice( void );
		Ice	&operator= ( Ice const & rhs );
		void	use(ICharacter & character); 
		virtual AMateria* clone() const ;
	private:

};
#endif