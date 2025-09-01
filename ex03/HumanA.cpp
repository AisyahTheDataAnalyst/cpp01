/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 09:12:08 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/01 09:12:09 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string _name, Weapon &_weapon )
    : weapon(_weapon), name(_name) {}
// when you write a constructor, u can add member initializer list after parameter list, before {} body, starts with a colon :
// initialize member weapon with constructor parameter _weapon

void HumanA::attack( void )
{
    std::cout   << this->name 
                << " attacks with their "
                << this->weapon.getType()
                << std::endl;
}