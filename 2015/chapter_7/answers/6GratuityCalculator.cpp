#include <iostream>
#include <iomanip>

class Tips
{
    private:
        double taxRate;

    public:
        Tips(double tr = 0.065)
        {
            taxRate = tr;
        }
        double computeTip(double tot, double tipR)
        {
            return (tot / (1 + taxRate)) * tipR;
        }
};

int main()
{
    int choice;
    double tax;
    double tot;
    double tipR;
    std::cout << "Enter choice: \n";
    std::cin >> choice;

    while (choice > 0)
    {
        std::cout << "Tax rate for meal: \n";
        std::cin >> tax;
        std::cout << "Total bill including tax: \n";
        std::cin >> tot;
        std::cout << "Tip rate: \n";
        std::cin >> tipR;

        Tips tip(tax);
        std::cout << "You shoudl pay tip $" << std::fixed << std::showpoint 
                  << std::setprecision(2) << tip.computeTip(tot, tipR) << std::endl;
        std::cout << "Enter choice again: \n";
        std::cin >> choice;
    }
    return 0;
}

