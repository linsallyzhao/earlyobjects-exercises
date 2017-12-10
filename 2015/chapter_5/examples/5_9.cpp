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

    do
    {
        std::cout << "\n    Health Club Membership Menu\n\n"
                  << "1. Standard Adult Membership\n"
                  << "2. Child Membership\n"
                  << "3. Senior Citizen Membership\n"
                  << "4. Quit the program\n\n"
                  << "Enter your choice: ";
        std::cin >> choice;

        while ((choice < 1) || (choice > 4))
        {
            std::cout << "Please, do you wannt know or not?";
            std::cin >> choice;
        }
        if (choice != 4)
        {
            std::cout << "For how many months? ";
            std::cin >> months;

            switch (choice)
            {
                case 1: charges = months * ADULT_RATE;
                        break;
                case 2: charges = months * CHILD_RATE;
                        break;
                case 3: charges = months * SENIOR_RATE;
                        break;
            }

            std::cout << std::fixed << std::showpoint << std::setprecision(2)
                      << "The total chares are $" << charges << std::endl;
        }
    } while (choice != 4);

    return 0;
}


