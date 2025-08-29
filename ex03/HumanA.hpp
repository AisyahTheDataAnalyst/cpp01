#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanA
{
    private:
        Weapon &weapon; // reference coz HumanA ALWAYS be armed
        std::string name;
    
    public:
        HumanA( std::string _name, Weapon &_weapon );
        void    attack( void );
};

#endif