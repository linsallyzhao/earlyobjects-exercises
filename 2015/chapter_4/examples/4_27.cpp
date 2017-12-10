#include <iostream>
#include <iomanip>

int main()
{
    const double ADULT_RATE = 120.0,
                 CHILD_RATE = 60.0,
                 SENIOR_RATE = 100.0;

    int choice;
    int months;
    double charges;

    std::cout << "  Health Club Membership Menu\n\n"
              << "1. Standard Adult Membership\n"
              << "2. Child Membership\n"
              << "3. Senior Citiaen Membership\n"
              << "4. Quit the Program\n\n"
              << "Enter your choice \n";
    std::cin >> choice;

    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    
    if (choice >= 1 && choice <= 3)
    {
        std::cout << "For how many months? ";
        std::cin >> months;

        switch (choice)
        {
            case 1: charges  = months * ADULT_RATE;
                    break;
            case 2: charges  = months * CHILD_RATE;
                    break;
            case 3: charges  = months * SENIOR_RATE;
        }
        std::cout << std::fixed << std::showpoint << std::setprecision(2);
        std::cout << "\nThe total charges are $" << charges << std::endl;
    }

    else if (choice != 4)
    {
        std::cout << "\nThe valid choices are 1 through 4. \n"
                  << "Run the program again and select one of those. \n";
    }

    return 0;
}


