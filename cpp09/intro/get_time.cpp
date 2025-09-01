#include <iostream>
#include <string>
#include <ctime>
#include <cstdio>   // for sscanf

int main(int ac, char *av[])
{
    if (ac != 2)
        return (-42);

    std::string input = av[1];
    int year, month, day;

    // Expecting format: YYYY-MM-DD
    if (std::sscanf(input.c_str(), "%d-%d-%d", &year, &month, &day) != 3)
    {
        std::cout << "Error reading date" << std::endl;
        return (-42);
    }

    if (year < 1900 || month > 12 || month < 1 || day > 31 || day < 1)
    {
        std::cout << "Error date" << std::endl;
        return (-42);
    }

    std::cout << "year: " << year << " month: " << month << " day: " << day << std::endl;
    return (0);
    
}