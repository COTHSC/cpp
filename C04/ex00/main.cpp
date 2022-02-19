#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int		main()
{
	Animal		*dog = new Dog;
	Animal		*cat = new Cat;
	Animal		*someAnimal = new Animal;
	WrongAnimal *wrong_cat = new WrongCat;

	std::cout << "\n\n --- Checking the getType() function ---\n\n";
	
	std::cout <<  dog->getType() << std::endl;
	std::cout <<  cat->getType() << std::endl;
	std::cout <<  someAnimal->getType() << std::endl;

	std::cout << "\n\n --- Checking the makeSound() function ---\n\n";

	dog->makeSound();
	cat->makeSound();
	someAnimal->makeSound();

	std::cout << "\n\n--- Testing WrongCats---\n\n";


	std::cout <<  wrong_cat->getType() << std::endl;
	wrong_cat->makeSound();
	std::cout << "\n\n--- Tests done. ---\n\n";

	delete dog;
	delete cat;
	delete wrong_cat;
	delete someAnimal;
	return 0;
}
