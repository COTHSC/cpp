#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : virtual public Animal 
{
    private:
        Brain *_brain;
    public:
        Dog ( void );
        ~Dog( void );
        Dog (Dog const &src);
        Dog &operator=(Dog const &src);
        void makeSound( void ) const;
        // virtual void addIdea( std::string idea);
        // virtual void showIdeas( void ) const;
};

#endif
