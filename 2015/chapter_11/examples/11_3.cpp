#include <iostream>
#include <iomanip>

#ifndef BUDGET_H
#define BUDGET_H

class Budget
{
    private:
        static double corpBudget;
        double divBudget;
    public:
        Budget() { divBudget = 0; }
        void addBudget(double b)
        {
            divBudget += b; corpBudget += divBudget; 
        }

        double getDivBudget() const { return divBudget; }
        static double getCorpBudget() { return corpBudget; }
        static void mainOffice(double);

};

#endif

double Budget::corpBudget = 0;
void Budget::mainOffice(double budReq)
{
    corpBudget += budReq;
}

int main()
{
    const int N_DIVISIONS = 4;
    std::cout << "Enter the main office's budget request: ";
    double amount;
    std::cin >> amount;

    Budget::mainOffice(amount);

    Budget divisions[N_DIVISIONS];

    for (int count = 0; count < N_DIVISIONS; count++)
    {
        double bud;

        std::cout << "Enter the budget request for division " 
                  << (count + 1) << ": ";
        std::cin >> bud;
        divisions[count].addBudget(bud);
    }
    
    std::cout << std::setprecision(2) << std::showpoint << std::fixed;
    std::cout << "\nHere are the division budget requests: \n";
    for (int count = 0; count < N_DIVISIONS; count++)
    {
        std::cout << "Division " << (count + 1) << "\t$ ";
        std::cout << divisions[count].getDivBudget() << std::endl;
    }

    std::cout << "Total Budget Requests:\t$ ";
    std::cout << Budget::getCorpBudget() << std::endl;
    
    return 0;
}
