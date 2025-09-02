/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 09:12:17 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/02 13:04:40 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _weapon(NULL), _name(name)
{}
 // standardize it with reference's way, but can also do in {}body but its a bad habit and not clean
 // better to init pointer with NULL rather than it get written with new value over a garbage value

void HumanB::setWeapon( Weapon &new_weapon) // &new_weapon here is the reference
{
    this->_weapon = &new_weapon; // To assign a reference to a pointer, u need the address of the reference above by adding &
}

void HumanB::attack( void )
{
    if (this->_weapon != NULL)
    {
        std::cout   << this->_name 
                    << " attacks with their " 
                    << this->_weapon->getType() // same as (*this->weapon).getType() , use * to access the real value of the weapon since its a pointer
                    << std::endl;
    }
    else
    {
        std::cout   << this->_name 
                    << " has no weapon"
                    << std::endl;
    }
}