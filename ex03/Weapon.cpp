#include "Weapon.hpp"

Weapon::Weapon( std::string type )
{
    this->type = type;
}

// setters
void Weapon::setType( const std::string &new_type )
{
    this->type = new_type;
}

// getters
const std::string Weapon::getType( void ) const
{
    return ( this->type );
}