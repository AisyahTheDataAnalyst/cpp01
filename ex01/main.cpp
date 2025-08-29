#include "Zombie.hpp"

int main()
{
    Zombie *army = zombieHorde(5, "Mokhtar");
    delete [] army; // the way to delete an array 
    return (0);
}