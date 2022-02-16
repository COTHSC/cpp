# include <iostream>
#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    for (int i = 0; i < 4 ; i++)
	{
       _source[i] = 0;
	}
	
    std::cout << "Default Constructor for MateriaSource called" << std::endl;
    return ;
};

MateriaSource::MateriaSource(const MateriaSource& newMateriaSource)
{
    std::cout << "Copy Constructor for MateriaSource called" << std::endl;
    *this = newMateriaSource;
    return;
};

MateriaSource::~MateriaSource(void)
{
    std::cout << "Default Destructor for MateriaSource called" << std::endl;
    return ;
};

MateriaSource& MateriaSource::operator=(const MateriaSource& newMateriaSource)
{
    std::cout << "MateriaSource Assignement Operator called" << std::endl;
    return *this;
};

void MateriaSource::learnMateria(AMateria*m) 
{
    for (int i = 0; i < 4 ; i++)
	{
		if (!_source[i])
		{
			_source[i] = m;	    
			std::cout << "Something has been copied into materia source" << std::endl;
			return ;
		}
	}
};

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4 ; i++)
	{
		if (_source[i])
		{
            if (_source[i]->getType() == type)
            {
			    //_source[i] = m;	    
			    std::cout << "Something has been cloned" << std::endl;
			    return _source[i]->clone();
            }
		}
	}
    return NULL;
};
