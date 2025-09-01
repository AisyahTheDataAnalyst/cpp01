/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 09:11:40 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/01 09:11:41 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
    name = ""; //unnamed because we will use the name parameter in the zombieHorde function
}

Zombie::~Zombie( void )
{
    std::cout << "Zombie " << name << " is dead" << std::endl;
}

