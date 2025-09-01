/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 09:12:26 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/01 09:12:28 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanB
{
    private:
        Weapon *weapon; // pointer, can be NULL coz HumanB MAY NOT ALWAYS HAVE A WEAPON
        std::string name;
    
    public:
        HumanB( std::string _name );
        void    setWeapon( Weapon &_weapon );
        void    attack( void );
};

#endif