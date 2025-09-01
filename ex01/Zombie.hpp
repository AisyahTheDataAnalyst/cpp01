/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 09:11:45 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/01 09:11:46 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream> // std::cout, std::endl
# include <string> // std::string 

class Zombie
{
    private:
        std::string name;
    
    public:
        void    announce( void );
        void    setName( const std::string &name);
        Zombie( void ); // default constructor
        ~Zombie( void );
};

Zombie *zombieHorde( int N, std::string name );

#endif