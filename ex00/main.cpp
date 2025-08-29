

#include "Zombie.hpp"

int main( void )
{
    Zombie a("Foo");
    a.announce();
    Zombie *z = a.newZombie("Aisyah");
    a.randomChump("Mokhtar");
    delete( z );
    return (0);
}