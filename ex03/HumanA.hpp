/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 09:12:12 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/01 09:12:14 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanA
{
    private:
        Weapon &weapon; // reference coz HumanA ALWAYS be armed
        std::string name;
    
    public:
        HumanA( std::string _name, Weapon &_weapon );
        void    attack( void );
};

#endif