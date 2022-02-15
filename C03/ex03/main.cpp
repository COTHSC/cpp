#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "diamondTrap.hpp"

int main()
{
	ClapTrap one("Clap");

	one.attack("foo");
	one.attack("foo");
	one.attack("foo");
	one.takeDamage(5);
	one.beRepaired(5);
	one.attack("foo");
	one.takeDamage(10);

	ScavTrap two("Scav");

	two.attack("foo");
	two.guardGate();
	
	FragTrap three("Frag");

	three.highFivesGuys();
	three.takeDamage(95);
	three.attack("bar");
	three.beRepaired(25);
	three.takeDamage(30);

	DiamondTrap four("Diamond");

	four.whoAmI();
	four.highFivesGuys();
	four.takeDamage(95);
	four.attack("bar");
	four.beRepaired(25);
	four.takeDamage(30);
}
