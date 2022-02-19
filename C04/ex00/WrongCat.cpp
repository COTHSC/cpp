#include "WrongCat.hpp"

WrongCat::WrongCat ( void ) : WrongAnimal("cat")
{
    std::cout << "A cat has been defaultly constructed" << std::endl;
    return ;
}

WrongCat::WrongCat (WrongCat const &src)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = src; 
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
    std::cout << "WrongCat assignation operator called" << std::endl;
    if (this != &rhs)
        this->_type = rhs.getType();
    return *this;
}

// void WrongCat::makeSound( void ) const
// {
    // std::cout << "meow?" << std::endl;
// }


WrongCat::~WrongCat ( void )
{
    std::cout << "A cat has been destroyed" << std::endl;
    return ;
}
