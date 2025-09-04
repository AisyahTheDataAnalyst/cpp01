/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 09:13:20 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/04 11:50:02 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
// need to do enum coz switch dosent accept char * or std::string

Levels getLevelFromString( std::string str ); // make it as a normal function - design choice - coz its purpose to just transform av[1] to enum - used in complain()

class Harl
{
    private: 
        static void debug( void );
        static void info( void );
        static void warning( void );
        static void error( void );
    
    public:
        static void complain( Levels level );
    
    // making them static - own by class - cannot do const at the end coz its for objs
};

#endif