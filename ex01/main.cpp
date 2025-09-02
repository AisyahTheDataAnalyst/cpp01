/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 09:11:33 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/02 10:02:53 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *army = zombieHorde(5, "Mokhtar");
    for (int i = 0; i < 5; i++)
    {
        std::cout << "zombie" << i << "\n";
        army[i].announce();
    }
    delete [] army; // the way to delete an array 
    return (0);
}