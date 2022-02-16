#include "Character.hpp"
#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

Character::Character( void ){

	std::cout << "Character - Default constructor called\n";
	return ;
};

Character::Character( std::string name ) : _name(name) {
	for (int i = 0 ; i < 256 ; i++)
	{
		_materiaBuffer[i] = 0;
	}

	std::cout << "Character - Default constructor called\n";
	return ;
};

Character::Character( Character const & src ){

	std::cout << "Character - Copy constructor called\n";
	*this = src;
	return ;
};

Character::~Character( void ){

	std::cout << "Character - Destructor called\n";
	return;
};

Character	&Character::operator= ( Character const & rhs ){

	this->_name = rhs._name;
	return *this;
};

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4 ; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;	
			std::cout << "Charachter is now equipped with smth" << std::endl;
			return ;
		}
	}
}

void	Character::_storeOldAddress(int idx) 
{
	for (int i = 0 ; i < 256 ; i++)
	{
		if(!_materiaBuffer[i])
		{
			_materiaBuffer[i] = _inventory[idx];
			return ;
		}
	}
	std::cout << "IIIIIIIIIIIIIII\n";
	delete _materiaBuffer[255];
	_materiaBuffer[255] = _inventory[idx];
};

void Character::unequip(int idx)
{
	if (_inventory[idx])
	{
		_storeOldAddress(idx);
		_inventory[idx] = NULL;
		std::cout << "Character has been unequipped of something" << std::endl;
	}
}

void Character::use(int idx, ICharacter& target)
{
	_inventory[idx]->use(target);
}

std::string const & Character::getName() const {

	return _name;
};


