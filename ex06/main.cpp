#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Usage: ./program <level>\n";
        return 1;
    }

    std::string argument = av[1];
    Levels level = getLevelFromString(argument);

    switch(level)
    {
        case DEBUG:
            Harl::debug();
            break;
        case INFO:
            Harl::info();
            break;
        case WARNING:
            Harl::warning();
            break;
        case ERROR:
            Harl::error();
            break;
        case DEFAULT:
            std::cout << "[ Probably complaining about insignificant problems ]\n" << std::endl;
            break;
    }

    return 0;
}