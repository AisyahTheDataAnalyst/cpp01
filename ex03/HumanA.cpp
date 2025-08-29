#include "HumanA.hpp"

HumanA::HumanA( std::string _name, Weapon &_weapon )
    : weapon(_weapon), name(_name) {}
// when you write a constructor, u can add member initializer list after parameter list, before {} body, starts with a colon :
// initialize member weapon with constructor parameter _weapon

void HumanA::attack( void )
{
    std::cout   << this->name 
                << " attacks with their "
                << this->weapon.getType()
                << std::endl;
}