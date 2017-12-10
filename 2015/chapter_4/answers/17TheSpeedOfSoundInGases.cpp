#include <iostream>
#include <iomanip>

int main()
{
    int choice;
    double distance, time;

    std::cout << "What media does sound wave tralel? \n"
              << "1. Carbon dioxide\n"
              << "2. Air\n"
              << "3. Helium\n"
              << "4. Hydrogen\n";
    std::cout << "Please enter your selection (1-4):\n";
    std::cin >> choice;

    if ((choice >=1) && (choice <= 4))
    {
        std::cout << "How long in sesconds does the sound travel?\n";
        std::cin >> time;
        if (time >= 0)
        {
            switch (choice)
            {
                case 1: distance = time * 258.0;
                        break;
                case 2: distance = time * 331.5;
                        break;
                case 3: distance = time * 927.0;
                        break;
                case 4: distance = time * 1270.0;
                        break;
            }
            std::cout << "It traveled " 
                      << std::fixed << std::setprecision(4)
                      << distance << " meters. \n";
        }
        else
            std::cout << "Invalid input\n";
    }
    else
        std::cout << "You wanna know or not? \n";
    return 0;
}
