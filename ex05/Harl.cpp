/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 09:12:57 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/01 09:12:58 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// lets learn pointers to member functions!
void Harl::complain ( std::string level )
{
    // 1. define a pointer to Harl member fn - void(Harl::*)() rename to HarlFn
    // 1st pointer - defining type = "HarlFn is a pointer-to-member-function type"
    typedef void (Harl::*HarlFn)();

    // 2. array of "levels" we want to check with "level"
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    // 3. array of fn pointers
    // matching the levels
    // each element points to one of Harl's meber functions
    // 2nd pointer - store actual function addresses in an array
    HarlFn actions[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    // 4. search for the right level
    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            // 5. call member fn pointer
            // this-> - fn belongs to an obj, so need to specify which obj, which is "this->"
            // * - "Hey i want to call the function this pointer points to" (syntax to dereference a member function pointer)
            // actions[i] - just a pointer to a member function, just an address not a callable function yet
            // () actually executes the function
            // 3rd pointer - usage / dereference to call them
            (this->*actions[i])();
            return ;
        }
    }

    // if level dosent match
    std::cerr << "Level does not exist\n";
}


void Harl::debug( void )
{
    std::cout   << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" 
                << std::endl;
}

void Harl::info( void )
{
    std::cout   << "I cannot believe adding extra bacon costs more money. " 
                << "You did not put enough bacon in my burger! " 
                << "If you did, I would not be asking for more!"
                << std::endl;
}

void Harl::warning( void )
{
    std::cout   << "I think I deserve to have some extra bacon for free. "
                << "I have been coming for years whereas you started working here since last month."
                << std::endl;
}

void Harl::error( void )
{
    std::cout   << "This is unacceptable! I want to speak to the manager now."
                << std::endl;
}