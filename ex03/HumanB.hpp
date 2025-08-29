#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanB
{
    private:
        Weapon *weapon; // pointer, can be NULL coz HumanB MAY NOT ALWAYS HAVE A WEAPON
        std::string name;
    
    public:
        HumanB( std::string name );
        void    setWeapon( Weapon &weapon );
        void    attack( void );
};

#endif