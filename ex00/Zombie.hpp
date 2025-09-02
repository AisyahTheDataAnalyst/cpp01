/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 12:23:33 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/02 09:49:16 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_HPP
# define EX00_HPP

# include <string> // std::string
# include <iostream> //std::cout, std::endl

class Zombie
{
    private:
        std::string _name;
        Zombie( void ); // private constructor - as a guard
        
    public:
        void    announce( void );
        Zombie( std::string name );
        ~Zombie( void );
};
 
Zombie  *newZombie( std::string name );
void    randomChump( std::string name );

#endif