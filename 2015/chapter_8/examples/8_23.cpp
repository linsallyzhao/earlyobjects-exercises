#include <iostream>
#include <iomanip>
#include <vector>

int main()
{
    std::vector<int> hours;
    std::vector<double> payRate;
    double grossPay;
    int numEmployees;
    int index;

    std::cout << "How many employees do you have? ";
    std::cin >> numEmployees;

    std::cout << "Enter the hours worked and hourly pay rates of the "
              << numEmployees << " employees. \n";
    for (index = 0; index < numEmployees; index++)
    {
        int tempHours;
        double tempRate;

        std::cout << "Hours worked by employee #" << (index + 1) << ": ";
        std::cin >> tempHours;
        hours.push_back(tempHours);
        std::cout << "Hourly pay rate for employee #" << (index + 1) << ": ";
        std::cin >> tempRate;
        payRate.push_back(tempRate);
    }

    std::cout << "\nHere is the gross pay for each employee:\n";
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    for (index = 0; index < numEmployees; index++)
    {
        grossPay = hours[index] * payRate[index];
        std::cout << "Employee #" << (index + 1);
        std::cout << ": $" << std::setw(7) << grossPay << std::endl;
    }
    return 0;
}

