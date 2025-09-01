/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 09:11:49 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/01 09:11:54 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name )
{
    Zombie *army_of_zombies = new Zombie[N];  // use default constructor instead of parameterized constructorbecause it has to make N zombies WITHOUT ARGUMENTS 
    for (int i = 0; i < N; i++)
    {
        army_of_zombies[i].setName(name);
        std::cout << "zombie" << i << "\n";
        army_of_zombies[i].announce();
    }
    return (army_of_zombies);
}

void Zombie::setName( const std::string &name)
{
    this->name = name;
}

void Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
