/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 09:13:07 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/04 11:51:09 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Usage ./program <level>\n";
        return 1;
    }

    Harl karen_guy;

    karen_guy.complain(av[1]); // we can directly take char * as a parameter that expected std::string
    return 0;
}

// av[1] is a char* (C-string)
// std::string has a constructor: std::string(const char*)
// compiler auto-converts char* → std::string using that constructor

// [ from C string to std::string ]
// char* → std::string: automatic (constructor handles it).

// [ from std::string to C-string ]
// std::string → const char*: manual, use .c_str().