/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 09:12:41 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/02 12:19:46 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
    private:
        std::string _type;
    
    public:
        Weapon( std::string type );
        void setType( const std::string &new_type );
        std::string getType( void ) const;
};

// [ const std::string getType( void ) const; ]
// const (before function) - means "Im returning a const string"
// ❌ REDUNDANT coz youre returning by value- the copy only
// caller can modify the copy withpout affecting the original anyway
//
// const (after function) - means "Im not modifying the object"
// ✅ very useful and good for safety assurance
//
// const obj can only call const function member
// non-const obj can call both const and non-const function member
//
// rule of thumb:
// if a method changes the data like setters - dont put const
// if a method only reads data like getters or printing only - add const

#endif