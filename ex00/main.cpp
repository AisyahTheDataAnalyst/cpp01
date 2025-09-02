/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 09:10:57 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/02 09:56:45 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
    // Zombie p; // not be able to compile - private constructor a s a guard
    Zombie a("Foo");
    a.announce();
    Zombie *z = newZombie("Aisyah");
    z->announce();
    randomChump("Mokhtar");
    delete( z );
    return (0);
}