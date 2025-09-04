/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 09:11:57 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/04 12:01:40 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string> //std::string
#include <iostream> //std::cout, std::endl

int main()
{
    std::string str = "HI THIS IS A BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout   << "The memory address of" << "\n" 
                << "string variable: " << &str << "\n" 
                << "stringPTR: " << stringPTR << "\n"
                << "stringREF: " << &stringREF << "\n" << "\n";
    // both original str and reference has to add & to show memory address
    // without it, will only show the real value of them

    std::cout   << "The value of the string variable: " << str << "\n"
                << "The value pointed to by stringPTR: " << *stringPTR << "\n"
                << "The value pointed to by stringREF: " << stringREF << std::endl;
    // to show value of pointer, need to add * in front 



    // just for my own learning

    // std::cout   << "\n" << "[Modify the original value]" << "\n";

    // std::cout   << "stringPTR (old value): " << *stringPTR << std::endl;
    // (*stringPTR) = "THIS IS CPP01 EX02";
    // std::cout   << "stringPTR (new value): " << *stringPTR << std::endl;

    // std::cout   << "stringREF (old value): " << stringREF << std::endl;
    // stringREF = "THIS IS NOW CHANGED";
    // std::cout   << "stringREF (new value): " << stringREF << std::endl;

    return (0);
}