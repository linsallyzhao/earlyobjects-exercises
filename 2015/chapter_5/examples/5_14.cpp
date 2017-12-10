#include <iostream>
#include <cmath>

int main()
{
    double number;

    std::cout << "Enter 5 positive numbers separated by spaces and \n"
              << "I will fine their square roots: ";

    for (int count = 1; count <= 5; count++)
    {
        std::cin >> number;
        if (number >= 0.0)
        {
            std::cout << "\nThe square root of " << number << " is "
                      << sqrt(number);
        }
        else
        {
            std::cout << "\n\n" << number << " is negative. \n"
                      << "I cannot fine the square root of a negative number.\n"
                      << "The program is terminate. \n";
            break;
        }
    }
    return 0;
}
