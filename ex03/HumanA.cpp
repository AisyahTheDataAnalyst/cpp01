/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 09:12:08 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/02 12:23:14 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ) 
: _weapon(weapon), _name(name) {}
// when you write a constructor, u can add member initializer list after parameter list, before {} body, starts with a colon :
// initialize member weapon with constructor parameter _weapon

void HumanA::attack( void )
{
    std::cout   << this->_name 
                << " attacks with their "
                << this->_weapon.getType()
                << std::endl;
}