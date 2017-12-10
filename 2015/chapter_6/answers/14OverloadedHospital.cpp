#include <iostream>
#include <iomanip>

void getInfo(int &days, double &dailyPay, double &services, double &medi, char &inOut);
double totalCost(int days, double dailyPay, double services, double medi);
double totalCost(double services, double medi);

int main()
{
    int days;
    double dailyPay,
           services,
           medi,
           total;
    char inOut;

    getInfo(days, dailyPay, services, medi, inOut);
    if (inOut == 'i' || inOut == 'I')
        total = totalCost(days, dailyPay, services, medi);
    else
        total = totalCost(services, medi);
    std::cout << "Your total cost is $" << std::fixed << std::setprecision(2)
              << total << std::endl;
    return 0;
}

void getInfo(int &days, double &dailyPay, double &services, double &medi, char &inOut)
{
    std::cout << "Please enter your hospital service charge and medication charge.\n";
    std::cin >> services >> medi;
    while (services < 0 || medi < 0)
    {
        std::cout << "Charges cannot be less than zero. Please re-enter.\n";
        std::cout << "Please enter your hospital service charge and medication charge.\n";
        std::cin >> services >> medi;
    }

    std::cout << "Are you a in-patient or a out-patient? (I/O)\n";
    std::cin >> inOut;
    if (inOut == 'i' || inOut == 'I')
    {
        std::cout << "How many days do your stay in hospital?\n";
        std::cin >> days;
        std::cout << "What is your daily rate?\n";
        std::cin >> dailyPay;
        while ( days < 0 || dailyPay < 0)
        {
            std::cout << "Your number of days or your daily pay rate cannot be negative.\n"
                      << "Please re-enter.\n";
            std::cout << "How many days do your stay in hospital?\n";
            std::cin >> days;
            std::cout << "What is your daily rate?\n";
            std::cin >> dailyPay;
        }
    }
}

double totalCost(int days, double dailyPay, double services, double medi)
{
    double total = medi + services + days * dailyPay;
    return total;
}

double totalCost(double services, double medi)
{
    double total = medi + services;
    return total;
}
    
