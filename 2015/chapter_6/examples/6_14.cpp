#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

void displayMenu();
int getChoice();
void showFees(std::string category, double rate, int months);

int main()
{
    const double ADULT_RATE = 120.0,
                 CHILD_RATE = 60.0,
                 SENIOR_RATE = 100.0;

    int choice,
        months;

    std::cout << std::fixed << std::showpoint << std::setprecision(2);

    do
    {
        displayMenu();
        choice = getChoice();

        if (choice != 4)
        {
            std::cout << "For how many months? \n";
            std::cin >> months;

            switch (choice)
            {
                case 1: showFees("Adult", ADULT_RATE, months);
                        break;
                case 2: showFees("Child", CHILD_RATE, months);
                        break;
                case 3: showFees("Senior", SENIOR_RATE, months);
            }
        }
    }while (choice != 4);
    return 0;
}

void displayMenu()
{
    system("clear");
    std::cout << "\n   Health Club Membership Menu\n\n"
              << "1. Standard Adult Membership\n"
              << "2. Child Membership\n"
              << "3. Senior Citizen Membership\n"
              << "4. Quit the program\n\n";
}

int getChoice()
{
    int choice;

    std::cin >> choice;

    while (choice < 1 || choice > 4)
    {
        std::cout << "The only valid choices are 1 - 4. Please re-enter.\n";
        std::cin >> choice;
    }
    return choice;
}

void showFees(std::string memberType, double rate, int months)
{
    std::cout << std::endl
              << "Membership Type  : " << memberType << "   "
              << "Number of months : " << months << std::endl
              << "Total charges    : " << (rate * months) << std::endl;

    std:: cout << "\nPress the Entre key to return to the menu. ";
    std::cin.get();
    std::cin.get();
}
