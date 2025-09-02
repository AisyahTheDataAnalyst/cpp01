/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 09:12:26 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/02 13:06:39 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

// Usually in C++, we prefer references when we want “must always exist” semantics
// and pointers when “may be missing” is allowed.

class HumanB
{
    private:
        Weapon *_weapon; // pointer, can be NULL coz HumanB MAY NOT ALWAYS HAVE A WEAPON
        std::string _name;
    
    public:
        HumanB( std::string name );
        void    setWeapon( Weapon &new_weapon );
        void    attack( void );
};

#endif