/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 09:11:49 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/02 10:01:35 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// factory function = normal fn outside class that manufacture (create and return) a group (horde) of objects
Zombie *zombieHorde( int N, std::string name )
{
    Zombie *army_of_zombies = new Zombie[N];  // use default constructor instead of parameterized constructor because it has to make N zombies WITHOUT ARGUMENTS 
    for (int i = 0; i < N; i++)
        army_of_zombies[i].setName(name);
    return (army_of_zombies);
}
