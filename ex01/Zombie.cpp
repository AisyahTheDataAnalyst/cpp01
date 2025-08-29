#include "Zombie.hpp"

Zombie::Zombie( void )
{
    name = ""; //unnamed because we will use the name parameter in the zombieHorde function
}

Zombie::~Zombie( void )
{
    std::cout << "Zombie " << name << " is dead" << std::endl;
}

