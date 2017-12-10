#include <iostream>
#include <iomanip>

struct PayInfo
{
    int hours;
    double payRate;
};

int main()
{
    const int NUM_EMPS = 3;
    int index;
    PayInfo workers[NUM_EMPS];
    double grossPay;

    std::cout << "Enter the hours worked and hourly pay rates of "
              << NUM_EMPS << " employees. ";

    for (index = 0; index < NUM_EMPS; index++)
    {
        std::cout << "\nHours worked by employee #" << (index + 1);
        std::cout << ": ";
        std::cin >> workers[index].hours;
        std::cout << "Hourly pay rate for employee #"
                  << (index + 1) << ": ";
        std::cin >> workers[index].payRate;
    }

    std::cout << "\nHere is the gross pay for each employee:\n";
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    for (index = 0; index < NUM_EMPS; index++)
    {
        grossPay = workers[index].hours * workers[index].payRate;
        std::cout << "Employee #" << (index + 1);
        std::cout << ": $" << std::setw(7) << grossPay << std::endl;
    }
    return 0;
}
