#include <iostream>
#include <iomanip>

int main()
{
    const int NUM_WORKERS = 5;
    int hours[NUM_WORKERS];
    double payRate;

    std::cout << "Enter the hours worked by \n";
    for (int worker = 0; worker < NUM_WORKERS; worker++)
    {
        std::cout << "Employee #" << (worker + 1) << ": ";
        std::cin >> hours[worker];
    }

    std::cout << "\nEnter the hourly pay rate for all the employees: ";
    std::cin >> payRate;

    std::cout << "\nHere is the gross pay for each employee:\n";
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    for (int worker = 0; worker < NUM_WORKERS; worker++)
    {
        double grossPay = hours[worker] * payRate;
        std::cout << "Employee #" << (worker + 1)
                  << ": $" << std::setw(7) << grossPay << std::endl;
    }
    return 0;
}
