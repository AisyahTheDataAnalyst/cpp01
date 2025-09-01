/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 09:10:57 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/01 09:11:01 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
    Zombie a("Foo");
    a.announce();
    Zombie *z = a.newZombie("Aisyah");
    a.randomChump("Mokhtar");
    delete( z );
    return (0);
}