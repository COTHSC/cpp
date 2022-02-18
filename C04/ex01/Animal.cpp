#include "Animal.hpp"

Animal::Animal( void ) : _type("undefined")
{
    std::cout << "Animal default constructor called" << std::endl;
    return ;
}

Animal::Animal(Animal const &src)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

Animal &Animal::operator=(Animal const &rhs)
{
    std::cout << "Animal assignation operator called" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs.getType();
        this->_nbIdeas = rhs._nbIdeas;
    }
    return *this;
}

std::string Animal::getType( void ) const
{
    return _type;
}

/* void    Animal::makeSound( void ) const */
/* { */
/*     std::cout << "Undefined animals do not know how to speak." << std::endl; */
/* } */

void    Animal::showIdeas( void ) const
{

}

void    Animal::addIdea( std::string idea )
{

}

Animal::~Animal(void)
{
    std::cout << "Animal destructor has been called" << std::endl;
}
