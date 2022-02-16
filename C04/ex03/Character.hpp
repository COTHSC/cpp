#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "Ice.hpp"
#include "AMateria.hpp"



class Character : public ICharacter {

	public:

		Character( void );		
		Character( std::string name );

		Character( Character const & src );
		~Character( void );
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
		Character	&operator= ( Character const & rhs );

	private:
		std::string _name;
		AMateria *_inventory[4];
		AMateria *_materiaBuffer[256];
		void	_storeOldAddress(int idx);
};
#endif
