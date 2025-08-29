#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name )
{
    Zombie *army_of_zombies = new Zombie[N];  // use default constructor instead of parameterized constructorbecause it has to make N zombies WITHOUT ARGUMENTS 
    for (int i = 0; i < N; i++)
    {
        army_of_zombies[i].setName(name);
        std::cout << "zombie" << i << "\n";
        army_of_zombies[i].announce();
    }
    return (army_of_zombies);
}

void Zombie::setName( const std::string &name)
{
    this->name = name;
}

void Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
