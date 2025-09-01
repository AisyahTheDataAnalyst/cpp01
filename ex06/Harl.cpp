/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 09:13:16 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/01 09:13:17 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Levels getLevelFromString( std::string str )
{
    if (str == "DEBUG")
        return DEBUG;
    else if (str == "INFO")
        return INFO;
    else if (str == "WARNING")
        return WARNING;
    else if (str == "ERROR")
        return ERROR;
    else
        return DEFAULT;
}

void Harl::debug( void )
{
    std::cout   << "[ DEBUG ]\n"
                << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\n"
                << "I really do!\n\n";
    info();
}

void Harl::info( void )
{
    std::cout   << "[ INFO ]\n"
                << "I cannot believe adding extra bacon costs more money.\n" 
                << "You did not put enough bacon in my burger!\n" 
                << "If you did, I would not be asking for more!\n\n";
    warning();
}

void Harl::warning( void )
{
    std::cout   << "[ WARNING ]\n"
                << "I think I deserve to have some extra bacon for free.\n"
                << "I have been coming for years whereas you started working here since last month.\n\n";
    error();        
}

void Harl::error( void )
{
    std::cout   << "[ ERROR ]\n"
                << "This is unacceptable! I want to speak to the manager now.\n"
                << std::endl;
}