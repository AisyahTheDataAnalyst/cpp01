/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 09:12:37 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/02 12:20:09 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type )
{
    this->_type = type;
}

// setters
void Weapon::setType( const std::string &new_type )
{
    this->_type = new_type;
}

// getters
std::string Weapon::getType( void ) const
{
    return ( this->_type );
}