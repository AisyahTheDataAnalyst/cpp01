/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 09:12:49 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/04 10:33:15 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // std::cout, std::cerr
#include <fstream> // std::ifstream, std::ofstream
#include <string> // std::string class & its member functions { .length(), .substr(), .find(), .rdbuf() }
#include <sstream> // std::ostringstream, .str()

int main(int ac, char **av) // C++ inherited C's runtime startup convention. )S still passes args as an array of C-strings. we cant accept std::string av coz OS does not pass args in that form
{
    if (ac != 4)
    {
        std::cerr << "Usage: ./program <filename> <s1> <s2>\n";
        return 1;
    }
   
    std::string filename = av[1]; // convert char * to std::string - std::string has a constructor that takes const char *
    std::string s1 = av[2];
    std::string s2 = av[3];

    if (s1.empty())
    {
        std::cerr << "Error: s1 cannot be empty\n";
        return 1;
    }

    std::ifstream input(filename.c_str());        // std::ifstream = opena a file to read in text mode by default, .c_str() converts std::string to const char* since C++98 file-streams constructor don’t accept std::string directly - they want const char*. input = object of type std::ifstream
    if (!input)                                   // c++ stream objects (ifstream, ofstream, fstream) have a boolean conversion operator - true/false - !input means false - same result id use input.is_open() - returns true/false
    {
        std::cerr << "Error open file to read\n";
        return 1;
    }

    std::ostringstream buffer;                    // ostringstream = strictly for output and only write into it, stringstream = for both input/output
    buffer << input.rdbuf();                      // read whole file - it accumulates the data in memory // .rdbuf vs getnextline
    std::string content = buffer.str();           // .str() fn returns all the accumulated characters as a std::string
    
    size_t pos = 0;                                            // pos is the position (index), start searching from beginning 
    while ((pos = content.find(s1, pos)) != std::string::npos) // content.find(s1,pos) = searches for the next occurrence of s1, starting from pos. if not found, it returns std::string::npos if not found (that’s basically the special value size_t(-1)).
    {
        content = content.substr(0, pos)                       // everything before s1, substr(start, length)
                    + s2                                       // the replacement string
                    + content.substr(pos + s1.length());       // pos is where s1 starts, so it skips exactly the right number of characters of s1, length() return num of chars excluding null terminator, since C++ std::string isn’t null-terminated internally like C-strings
        pos += s2.length();                                    // skip replaced part
    }
    
    std::ofstream output((filename + ".replace").c_str());  // std::ofstream = open to write , .c_str() converts std::string to const char* since C++98 streams don’t accept std::string directly
    if (!output)
    {
        std::cerr << "Error: cannot open file to write\n";
        return 1;
    }
    output << content;

    // closing - Streams would auto-close on destruction at end of scope, but explicit close() is fine.
    input.close();
    output.close();

    return 0;
}