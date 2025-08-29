
#include "Zombie.hpp"

Zombie *Zombie::newZombie( std::string name )
{
    Zombie *z = new Zombie( name );
    z->announce(); // this is not mentioned in the pdf though
    return (z);
}