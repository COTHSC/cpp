#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

static void test(void)
{
	std::cout << "  **  Construct  **" << std::endl;
	Animal* 	medor = new Dog();
	Animal*		papillon = new Cat();
	std::cout << "---------------------------------------------------" << std::endl;
	std::cout << "Papillon is a " << papillon->getType() << " -> ";

	papillon->addIdea("Eat a mouse !!");
	papillon->addIdea("jump on butterflies !");
	papillon->addIdea("make my toilet");
	papillon->addIdea("sleeping on parents bed");

	std::cout << "the Papillon's ideas : " << std::endl;
	papillon->showIdeas();
	delete papillon;
	std::cout << "---------------------------------------------------" << std::endl;
	std::cout << "medor is a " << medor->getType() << " -> ";

	medor->addIdea("take a walk in the trash!");
	medor->addIdea("pissing on the neighbor's lawn");
	medor->addIdea("Playing with my favorite bone");
	std::cout << "the Medor's ideas : " << std::endl;
	medor->showIdeas();
	delete medor;
	std::cout << "***************************************************" << std::endl;
	std::cout << "--------------------TEST DEEP COPY-----------------" << std::endl;
	std::cout << "***************************************************" << std::endl;
	Cat	*originalCat = new Cat();
	originalCat->addIdea("Une idée en l'air");
	std::cout << "  ** copy by constructor copy** " << std::endl;	
	Cat	copyCat(*originalCat);
	std::cout << "------------" << std::endl;
	std::cout << " ideas of originalCat : " << std::endl;
	originalCat->showIdeas();
	std::cout << " ideas of copyCat : (with different memory addresses)" << std::endl;
	copyCat.showIdeas();
	std::cout << "------------" << std::endl;
	std::cout << "  ** copy by operator = ** " << std::endl;
	Cat	*copyCat2 = new Cat();
	*copyCat2 = *originalCat;
	std::cout << " ** delete originalCat **" << std::endl;
	delete originalCat;
	std::cout << " ideas of copyCat : " << std::endl;
	copyCat2->showIdeas();
	delete copyCat2;
}

int		main(int argc, char **argv)
{
	(void) argv;
	if (argc == 1)
	{
		Animal		*spa[10];
		for (int i = 0; i < 10; i++)
		{
			if (i%2 == 0)
			{
				std::cout << "Cat" << std::endl;
				spa[i] = new Cat();
			}
			else
			{
				std::cout << "Dog" << std::endl;
				spa[i] = new Dog();
			}
		}
		for (int i = 0; i < 10; i++)
			delete spa[i];
		return 0;
	}
	test();
	return 0;
}
