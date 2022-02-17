#include "Ice.hpp"
#include <iostream>

#include "AMateria.hpp"


Ice::Ice( void ) : AMateria("ice"){

	std::cout << "Ice - Default constructor called\n";
	return ;
};

Ice::Ice( Ice const & src ){

	std::cout << "Ice - Copy constructor called\n";
	*this = src;
	return ;
};

Ice::~Ice( void ){

	std::cout << "Ice - Destructor called\n";
	return;
};

Ice	&Ice::operator= ( Ice const & rhs ){

	*this = rhs;
	return *this;
};

AMateria* Ice::clone() const 
{
	return (new Ice);
}

void Ice::use(ICharacter & character) 
{
	std::cout <<  "* shoots an ice bolt at " << character.getName() << " *" << std::endl;
}