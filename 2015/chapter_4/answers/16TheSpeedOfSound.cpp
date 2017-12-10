#include <iostream>
#include <iomanip>

int main()
{
    int choice;
    double distance, time;

    std::cout << "What media does sound wave tralel? \n"
              << "1. Air\n"
              << "2. Water\n"
              << "3. Steel\n";
    std::cout << "Please enter your selection (1-3):\n";
    std::cin >> choice;

    if ((choice >=1) && (choice <= 3))
    {
        std::cout << "How far in feet does the sound travel?\n";
        std::cin >> distance;
        if (distance >= 0)
        {
            switch (choice)
            {
                case 1: time = distance / 1100;
                        break;
                case 2: time = distance / 4900;
                        break;
                case 3: time = distance / 16400;
                        break;
            }
            std::cout << "It will take " 
                      << std::fixed << std::setprecision(4)
                      << time << " seconds. \n";
        }
        else
            std::cout << "Invalid input\n";
    }
    else
        std::cout << "You wanna know or not? \n";
    return 0;
}
