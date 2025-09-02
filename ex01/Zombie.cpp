/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 09:11:40 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/02 10:00:17 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
    this->_name = ""; //unnamed because we will use the name parameter in the zombieHorde function
}

Zombie::~Zombie( void )
{
    std::cout << "Zombie " << this->_name << " is dead" << std::endl;
}

void Zombie::setName( const std::string &name)
{
    this->_name = name;
}

void Zombie::announce( void )
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}