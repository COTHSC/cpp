#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie retZombie(name);
    retZombie.announce();
}
