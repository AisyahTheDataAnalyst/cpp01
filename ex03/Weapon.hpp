
#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
    private:
        std::string type;
    
    public:
        Weapon( std::string type );
        void setType( const std::string &new_type );
        const std::string getType( void ) const;
};

#endif