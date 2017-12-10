#include <iostream>
#include <cstdlib>

int main()
{
    int num1, num2, answer, result, choice;

    unsigned seed = time(0);
    srand(seed);
    num1 = rand() % 41 + 10;
    num2 = rand() % 41 + 10;
    std::cout << "Please choose the type of problem you want to practice\n"
              << "1.addition\n"
              << "2.subtraction\n"
              << "3.multiplication\n"
              << "Enter 4 to quit\n";
    std::cin >> choice;

    while ((choice < 1) || (choice > 4))
    {
        std::cout << "Invalid choice. Try again. \n";
        std::cin >> choice;
    }
    if (choice != 4)
    {
        switch (choice)
        {
            case 1: result = num1 + num2;
                    std::cout << num1 << " + " << num2 << std::endl;
                    break;
            case 2: result = num1 - num2;
                    std::cout << num1 << " - " << num2 << std::endl;
                    break;
            case 3: result = num1 * num2;
                    std::cout << num1 << " * " << num2 << std::endl;
                    break;
            default:std::cout << "Please choose the type of problem you want to practice\n"
                              << "1.addition\n"
                              << "2.subtraction\n"
                              << "3.multiplication\n"
                              << "Enter 4 to quit\n";
                    std::cin >> choice;
        }
        std::cin >> answer;
        if (answer == result)
            std::cout << "Congrat! \n";
        else
            std::cout << "The correct answer is " << result << std::endl;
    }
    return 0;
}

