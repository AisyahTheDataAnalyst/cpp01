/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 09:13:24 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/01 09:13:25 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Usage: ./program <level>\n";
        return 1;
    }

    std::string argument = av[1];
    Levels level = getLevelFromString(argument);

    switch(level)
    {
        case DEBUG:
            Harl::debug();
            break;
        case INFO:
            Harl::info();
            break;
        case WARNING:
            Harl::warning();
            break;
        case ERROR:
            Harl::error();
            break;
        case DEFAULT:
            std::cout << "[ Probably complaining about insignificant problems ]\n" << std::endl;
            break;
    }

    return 0;
}