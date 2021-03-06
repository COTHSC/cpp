#include "Cat.hpp"


Cat::Cat ( void ): _brain(new Brain)
{
    _type = "cat";
    std::cout << "A cat has been defaultly constructed" << std::endl;
    return ;
}

Cat::Cat (Cat const &src): _brain(new Brain)
{
    std::cout << "Cat copy constructor called" << std::endl;
    
    std::cout << "\n\nThis is the address of Brain in CopyCat: " << _brain << "\n";
    std::cout << "\n\nThis is the address of Brain in OG: " << src._brain << "\n\n";

    *this->_brain = *src._brain;
}

Cat &Cat::operator=(Cat const &rhs)
{
    if (this != &rhs)
        this->_type = rhs.getType();
    return *this;
}

void Cat::makeSound( void ) const
{
    std::cout << "meow?" << std::endl;
}

// void Cat::showIdeas( void ) const
// {
    // _brain->show(_nbIdeas);
// }
// 
// void Cat::addIdea(std::string str)
// {
    // _brain->add(_nbIdeas, str);
    // _nbIdeas++;
    // if (_nbIdeas >= 100)
        // _nbIdeas = 99;
// }

Cat::~Cat ( void )
{
    std::cout << "A cat has been destroyed" << std::endl;
    delete _brain;
    return ;
}
