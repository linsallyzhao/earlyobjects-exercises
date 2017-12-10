#include <iostream>

int main()
{
    char choice;

    std::cout << "Enter A, B, or C: ";
    std::cin >> choice;

    switch (choice)
    {
        case 'A': std::cout << "You entered A. \n";
                  break;
        case 'B': std::cout << "You entered B. \n";
                  break;
        case 'C': std::cout << "You entered C. \n";
                  break;

        default: std::cout << "You did not enter A, B, or C! \n";
    }
    return 0;
}
