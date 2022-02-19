#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( std::string type ) : _type(type)
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
	std::cout << "WrongAnimal assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs.getType();
		this->_nbIdeas = rhs._nbIdeas;
	}
	return *this;
}

std::string WrongAnimal::getType( void ) const
{
	return _type;
}

void    WrongAnimal::makeSound( void ) const 
{ 
	std::cout << "Undefined animals do not know how to speak." << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor has been called" << std::endl;
}