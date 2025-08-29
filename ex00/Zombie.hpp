/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 12:23:33 by aimokhta          #+#    #+#             */
/*   Updated: 2025/08/27 13:22:01 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_HPP
# define EX00_HPP

# include <string> // std::string
# include <iostream> //std::cout, std::endl

class Zombie
{
    private:
        std::string name;
        Zombie( void ); // private constructor - as a guard
        
    public:
        void    announce( void );
        Zombie  *newZombie( std::string name );
        void    randomChump( std::string name );
        Zombie( std::string name );
        ~Zombie( void );
};
 
#endif