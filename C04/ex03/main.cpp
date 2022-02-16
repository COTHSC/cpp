#include "AMateria.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main(void)
{
	Ice test;
	AMateria *test2;
	AMateria *test5;
	Character test3("name?");
	ICharacter *test4 = new Character("Jim");
	MateriaSource Well;

	std::cout << "\n\n";

	test2 = test.clone();
	test4->equip(test2);
	test4->unequip(0);
	test4->equip(test2);
	test4->equip(test2);
	test4->equip(test2);
	test4->equip(test2);
	test4->equip(test2);

	test4->unequip(0);
	test4->unequip(1);
	test4->unequip(2);
	test4->unequip(3);
	test4->unequip(0);


	test4->equip(test2);
	test4->equip(test2);
	test4->equip(test2);
	test4->equip(test2);
	test4->equip(test2);

	test4->use(1, *test4);
	test4->use(0, *test4);
	test4->use(2, *test4);
	test4->use(3, *test4);

	Well.learnMateria(test2);
	test5 = Well.createMateria("ice");

	test4->unequip(0);
	test4->unequip(1);
	test4->unequip(2);
	test4->unequip(3);
	test4->unequip(0);
	
	test4->equip(test5);
	delete test5;
	delete test4;
	delete test2;


	std::cout << "\n\n";


}