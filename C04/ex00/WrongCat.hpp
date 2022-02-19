#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal 
{
    public:
        WrongCat ( void );
        ~WrongCat( void );
        WrongCat (WrongCat const &src);
        WrongCat &operator=(WrongCat const &src);
        // virtual void makeSound( void ) const;
};

#endif
