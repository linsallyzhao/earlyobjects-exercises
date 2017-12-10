#include <iostream>
#include <iomanip>
#include "budget.h"

int main()
{
    const int N_DIVISIONS = 4;
    std::cout << "Enter the main office's budget request: ";
    double amount;
    std::cin >> amount;

    Budget::mainOffice(amount);

    Budget divisions[N_DIVISIONS];
    Aux auxOffice[N_DIVISIONS];

    std::cout << "\nEnter the budget requests for the divisions and"
              << "\ntheir auxiliary offices as prompted: \n";

    for (int count = 0; count < N_DIVISIONS; count++)
    {
        double bud;

        std::cout << "Enter the budget request for division " 
                  << (count + 1) << ": ";
        std::cin >> bud;
        divisions[count].addBudget(bud);
        std::cout << "Enter the budget request for division "
                  << (count + 1) << "'s auxiliary office: ";
        std::cin >> bud;
        auxOffice[count].addBudget(bud);
    }
    
    std::cout << std::setprecision(2) << std::showpoint << std::fixed;
    std::cout << "\nHere are the division budget requests: \n";
    for (int count = 0; count < N_DIVISIONS; count++)
    {
        std::cout << "\tDivision " << (count + 1) << "\t\t\t$ ";
        std::cout << std::setw(7);
        std::cout << divisions[count].getDivBudget() << std::endl;
        std::cout << "\tAuxiliary office of Division " << (count + 1)
                  << "\t$ " << auxOffice[count].getDivBudget() << std::endl;

    }

    std::cout << "\tTotal Budget Requests (including main office):\t$ ";
    std::cout << Budget::getCorpBudget() << std::endl;
    
    return 0;
}
