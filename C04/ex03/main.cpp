#include "AMateria.hpp"
#include "Ice.hpp"
#include "Heal.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main(void)
{
	Ice test;
	Heal test8;
	AMateria *test2;
	AMateria *test5;
	AMateria *test6;
	AMateria *test7;
	ICharacter *test4 = new Character("Jim");
	MateriaSource Well;

	std::cout << "\n\n";

	test2 = test.clone();
	test6 = test8.clone();

	std::cout << "\n\n";


	test4->equip(test2);
	test4->unequip(0);

	std::cout << "\n\n";

	test4->equip(test2);
	test4->equip(test2);
	test4->equip(test2);
	test4->equip(test2);
	test4->equip(test2);

	std::cout << "\n\n";

	test4->use(2, *test4);
	test4->use(3, *test4);
	test4->use(0, *test4);
	test4->use(1, *test4);

	std::cout << "\n\n";

	test4->unequip(0);
	test4->unequip(1);
	test4->unequip(2);
	test4->unequip(3);
	test4->unequip(0);

	std::cout << "\n\n";

	test4->equip(test6);
	test4->equip(test6);
	test4->equip(test6);
	test4->equip(test6);
	test4->equip(test6);

	std::cout << "\n\n";

	test4->use(0, *test4);
	test4->use(1, *test4);
	test4->use(2, *test4);
	test4->use(3, *test4);

	std::cout << "\n\n";

	test4->unequip(0);
	test4->unequip(1);
	test4->unequip(2);
	test4->unequip(3);
	test4->unequip(0);

	std::cout << "\n\n";
	
	Well.learnMateria(test2);
	test5 = Well.createMateria("ice");

	std::cout << "\n\n";

	test4->equip(test5);
	test4->equip(test5);
	test4->equip(test5);
	test4->equip(test5);
	test4->equip(test5);

	std::cout << "\n\n";

	test4->unequip(0);
	test4->unequip(2);
	test4->unequip(3);
	test4->unequip(4);

	std::cout << "\n\n";

	test7 = Well.createMateria("heal");
	Well.learnMateria(test6);
	test7 = Well.createMateria("heal");

	std::cout << "\n\n";

	test4->equip(test7);
	test4->equip(test7);
	test4->equip(test7);
	test4->equip(test7);
	test4->equip(test7);

	std::cout << "\n\n";

	test4->unequip(0);
	test4->unequip(2);
	test4->unequip(3);
	test4->unequip(4);

	std::cout << "\n\n";
	
	delete test5;
	delete test7;
	delete test6;
	delete test4;
	delete test2;



	std::cout << "\n\n";
}