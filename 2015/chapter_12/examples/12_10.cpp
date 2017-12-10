#include <iostream>
#include <cstring>
#include <cstdlib>

int main()
{
    const int LENGTH = 20;
    char input[LENGTH];

    int total = 0,
        count = 0;
    double average;

    std::cout << "This program will average a series of numbers. \n";
    std::cout << "Enter the first number or Q to quit: ";
    std::cin.getline(input, LENGTH);
    while ((strcmp(input, "Q") != 0) && (strcmp(input, "q") != 0))
    {
        total += atoi(input);
        count++;
        std::cout << "Enter the next number or Q to quit: ";
        std::cin.getline(input, LENGTH);
    }

    if (count != 0)
    {
        average = double(total) / count;
        std::cout << "average: " << average << std::endl;
    }
    return 0;
}
