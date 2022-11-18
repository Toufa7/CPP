#include <iostream>
#include <string>
#include <string.h>

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    for (int i = 1; i < ac ; i++)
    {
        for (size_t j = 0; j < strlen(av[i]); j++)
        {
            // Typecast 
            std::cout << char(toupper(av[i][j]));
        }
    }
    return (0);
}