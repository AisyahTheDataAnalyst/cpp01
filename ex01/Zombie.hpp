#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream> // std::cout, std::endl
# include <string> // std::string 

class Zombie
{
    private:
        std::string name;
    
    public:
        void    announce( void );
        void    setName( const std::string &name);
        Zombie( void ); // default constructor
        ~Zombie( void );
};

Zombie *zombieHorde( int N, std::string name );

#endif