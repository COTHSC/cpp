#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : virtual public Animal 
{
    public:
        Dog ( void );
        ~Dog( void );
        Dog (Dog const &src);
        Dog &operator=(Dog const &src);
        void makeSound( void ) const;
};

#endif
