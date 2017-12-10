#include <iostream>
#include <iomanip>

int main()
{
    const int NUM_EMPS = 5;
    int index;
    int hours[NUM_EMPS];
    double payRate[NUM_EMPS];
    double grossPay;

    std::cout << "Enter the hours worked and hourly pay rates of "
              << NUM_EMPS << " employees. \n";

    for (index = 0; index < NUM_EMPS; index++)
    {
        std::cout << "Hours worked by employee #" << (index + 1) << ": ";
        std::cin >> hours[index];
        std::cout << "Hourly pay rate for employee #" << (index + 1) << ": ";
        std::cin >> payRate[index];
    }

    std::cout << "\nHere is the gross pay for each employee:\n";
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    for (index =  0; index < NUM_EMPS; index++)
    {
        grossPay = hours[index] * payRate[index];
        std::cout << "Employee #" << (index + 1);
        std::cout << ": $" << std::setw(7) << grossPay << std::endl;
    }
    return 0;
}
