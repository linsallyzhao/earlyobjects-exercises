#include <iostream>
#include <iomanip>

char getChoice();
double calcWeeklyPay(int, double);
double calcWeeklyPay(double);

int main()
{
    char selection;
    int worked;
    double rate, yearly;

    std::cout << std::fixed << std::showpoint << std::setprecision(2);

    std::cout << "Do you want to calculate the weekly pay of \n"
              << "(H) an hourly-wage employee, or \n"
              << "(S) an salaried employee?";
    selection = getChoice();

    switch (selection)
    {
        case 'H':
        case 'h': std::cout << "How many hours were worked? ";
                  std::cin >> worked;
                  std::cout << "What is the hourly pay rate? ";
                  std::cin >> rate;
                  std::cout << "The gross weekly pay is $";
                  std::cout << calcWeeklyPay(worked, rate) << std::endl;
                  break;
        case 'S':
        case 's': std::cout << "What is the annual salary? ";
                  std::cin >> yearly;
                  std::cout << "The gross weekly pay is $";
                  std::cout << calcWeeklyPay(yearly) << std::endl;

    }
    return 0;
}

char getChoice()
{
    char letter;
    std::cin >> letter;

    while ( letter != 'H' && letter != 'h' && letter != 'S' && letter != 's')
    {
        std::cout << "Enter H or S: ";
        std::cin >> letter;
    }
    return letter;
}

double calcWeeklyPay(int hours, double payRate)
{
    return hours * payRate;
}

double calcWeeklyPay(double annSalary)
{
    return annSalary / 52.0;
}
