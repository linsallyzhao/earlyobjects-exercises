#include <iostream>
#include <string>

int main()
{
    int index;
    const int MAX = 20;
    int userChoice;
    std::string roman[20] = {"I", "II", "III", "IV", "V", "VI", "VII",
                             "VIII", "IX", "X", "XI", "XII", "XIII", "XIV",
                             "XV", "XVI", "XVII", "XVIII", "XIX", "XX"};

    std::cout << "Please enter the number you want to convert or 0 to quit.\n";
    std::cin >> userChoice;
    while (userChoice != 0 && userChoice < MAX)
    {
        std::cout << roman[userChoice - 1] << std::endl;
        std::cout << "Next number you want to convert: ";
        std::cin >> userChoice;
    }
    return 0;
}

