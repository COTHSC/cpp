#include "Heal.hpp"
#include <iostream>

#include "AMateria.hpp"


Heal::Heal( void ) : AMateria("heal"){

	std::cout << "Heal - Default constructor called\n";
	return ;
};

Heal::Heal( Heal const & src ){

	std::cout << "Heal - Copy constructor called\n";
	*this = src;
	return ;
};

Heal::~Heal( void ){

	std::cout << "Heal - Destructor called\n";
	return;
};

Heal	&Heal::operator= ( Heal const & rhs ){

	this->_type = rhs._type;
	return *this;
};

AMateria* Heal::clone() const 
{
	return (new Heal);
}

void Heal::use(ICharacter & character) 
{
	//: "* heals <name>’s wounds *"
	std::cout <<  "* heals " << character.getName() << "'s wounds *" << std::endl;
}