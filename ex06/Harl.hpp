#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>

enum Levels
{
    DEBUG,
    INFO,
    WARNING,
    ERROR,
    DEFAULT
};

class Harl
{
    // making them static so that i do not need to create an object - cannot do const at the end coz its for objs
    // if i keep them private, ill need another public member function to call them
    public: 
        static void debug( void );
        static void info( void );
        static void warning( void );
        static void error( void );
};

Levels getLevelFromString( std::string str );

#endif