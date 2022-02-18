#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal 
{
    private:
        Brain *_brain;
    public:
        Cat ( void );
        ~Cat( void );
        Cat (Cat const &src);
        Cat &operator=(Cat const &src);
        virtual void makeSound( void ) const;
        virtual void addIdea( std::string idea);
        virtual void showIdeas( void ) const;
};

#endif