#include "AMateria.hpp"

class MateriaSource
{
    public:
        MateriaSource( void );
        MateriaSource(const MateriaSource& newMateriaSource);
        MateriaSource& operator=(const MateriaSource& newMateriaSource);
        ~MateriaSource();
        virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const & type);
    private:
        AMateria *_source[4];
};