#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int		main()
{
	Animal		*peta[10];

	for (int i = 0; i < 10; i++)
	{
		if (i%2 == 0)
		{
			std::cout << "Cat" << std::endl;
			peta[i] = new Cat();
		}
		else
		{
			std::cout << "Dog" << std::endl;
			peta[i] = new Dog();
		}
	}
	for (int i = 0; i < 10; i++)
		delete peta[i];
	return 0;
}
