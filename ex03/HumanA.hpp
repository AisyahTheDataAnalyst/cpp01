/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 09:12:12 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/02 13:06:55 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

// Usually in C++, we prefer references when we want “must always exist” semantics
// and pointers when “may be missing” is allowed.

class HumanA
{
    private:
        Weapon &_weapon; // reference coz HumanA ALWAYS be armed
        std::string _name;
    
    public:
        HumanA( std::string name, Weapon &weapon );
        void attack( void );
};

#endif