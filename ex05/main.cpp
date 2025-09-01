/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 09:13:07 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/01 09:13:10 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl karen_guy;

    karen_guy.complain("DEBUG");
    karen_guy.complain("INFO");
    karen_guy.complain("WARNING");
    karen_guy.complain("ERROR");
    karen_guy.complain("HUNGRY");
    return 0;
}