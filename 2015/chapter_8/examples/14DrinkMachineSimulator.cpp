#include <iostream>
#include <iomanip>
#include <string>

struct Soda
{
    std::string name;
    double cost;
    int numLeft;
    Soda()
    {
        cost = 1.0;
        numLeft = 20;
    }
};

class SellMachine
{
    private:
        Soda drinks[5];
        double moneyEarn;
        double inputMoney(double monIn, int choice);
        void dailyReport();


    public:
        SellMachine()
        {
            drinks[0].name = "Cola";
            drinks[1].name = "Root beer";
            drinks[2].name = "Orange soda";
            drinks[3].name = "Grape soda";
            drinks[4].name = "Bottled water";
            drinks[4].cost = 1.5;
            moneyEarn = 0;
        }
        void displayChoices();
        void buyDrink(int choice, double inputMon);

        ~SellMachine()
        {
            dailyReport();
        }
};

void SellMachine::displayChoices()
{
    std::cout << "Here are your choices of drinks: \n";
    std::cout << "  Drink             Price\n";
    for (int index = 0; index < 5; index++)
    {
        std::cout << (index + 1) << ". " 
                  <<  std::setw(15) << std::left <<  drinks[index].name
                  << std::fixed << std::setprecision(2) 
                  << drinks[index].cost << std::endl;
    }
}


void SellMachine::buyDrink(int choice, double inputMon)
{
    double changeMon = inputMoney(inputMon, choice);
    if (changeMon == 0)
    {
        std::cout << "Here is your drink. Thank you. \n";
        drinks[choice - 1].numLeft--;
        moneyEarn += drinks[choice - 1].cost;

    }
    else if (changeMon == -1)
    {
        std::cout << "The drink is sold out. Sorry\n";
    }
    else if (changeMon == -2)
    {
        std::cout << "Not enough money\n";
    }
    else
    {
        std::cout << "Here is your change $" << std::fixed
                  << std::setprecision(2) << changeMon << std::endl;
        std::cout << "Here is your drink\n";
        drinks[choice - 1].numLeft--;
        moneyEarn += drinks[choice - 1].cost;
    }
}

double SellMachine::inputMoney(double monIn, int choice)
{
    double giveBack = 0;
    if (monIn < drinks[choice - 1].cost)
        giveBack = -2;
    else if (drinks[choice - 1].numLeft == 0)
        giveBack = -1;
    else if (monIn > drinks[choice - 1].cost)
        giveBack = monIn - drinks[choice - 1].cost;

    return giveBack;
}

void SellMachine::dailyReport()
{
    std::cout << "Drinks left\n";
    std::cout << "Drink         Num\n";
    for (int index = 0; index < 5; index++)
    {
        std::cout << std::setw(15) << std::left <<  drinks[index].name
                  << std::fixed << std::setprecision(2) 
                  << drinks[index].numLeft << std::endl;
    }
    std::cout << "The total amount of money collected today is $"
              << moneyEarn << std::endl;
}


int main()
{
    int userChoice;
    double money;
    SellMachine machine;
    machine.displayChoices();
    std::cout << "Please enter your choice or -1 to quit: ";
    std::cin >> userChoice;
    while ( userChoice != -1)
    {
        while (userChoice < 1 || userChoice > 5)
        {
            std::cout << "We don't sell that\n";
            std::cout << "Do you wanna buy another drink?\n";
            std::cin >> userChoice;
        }
        std::cout << "Please enter the money\n";
        std::cin >> money;
        while (money < 0)
        {
            std::cout << "You should give me drink then\n";
            std::cout << "Please re-enter:\n";
            std::cin >> money;
        }
        machine.buyDrink(userChoice, money);

        machine.displayChoices();
        std::cout << "Do you wanna buy another drink?\n";
        std::cin >> userChoice;
    }
    return 0;
}




