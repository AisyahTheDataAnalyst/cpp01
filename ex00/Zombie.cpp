/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 09:11:22 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/02 10:15:41 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// this Zombie.cpp is only for function members of the class only
// normal functions has their own individual file

Zombie::Zombie (std::string name )
{
    this->_name = name;
}

Zombie::~Zombie ( void )
{
    std::cout << "Zombie " << this->_name << " is now dead" << std::endl;
}

void Zombie::announce( void )
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

