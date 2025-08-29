#include "HumanB.hpp"

HumanB::HumanB( std::string _name ) : weapon(NULL), name(_name)
{}
 // standardize it with reference's way, but can also do in {}body but its a bad habit and not clean
 // better to init pointer with NULL rather than it get written with new value over a garbage value

void HumanB::setWeapon( Weapon &_weapon)
{
    this->weapon = &_weapon;
}

void HumanB::attack( void )
{
    if (weapon != NULL)
    {
        std::cout   << this->name 
                    << " attacks with their " 
                    << weapon->getType() 
                    << std::endl;
    }
    else
    {
        std::cout   << this->name 
                    << " has no weapon"
                    << std::endl;
    }
}