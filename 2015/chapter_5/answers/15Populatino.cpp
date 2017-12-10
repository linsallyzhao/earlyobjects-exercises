#include <iostream>
#include <iomanip>

int main()
{
    int days;
    double increaseRate, start;

    std::cout << "Please enter the start number, daily increase rate and the \n"
              << "number of days the population grow.\n"
              << "The start number should be greater than or equal to two, \n"
              << "the increasing rate should be positive and the number of days\n"
              << "should be greater than or equal to one.\n";
    std::cin >> start >> increaseRate >> days;

    while ((start < 2) || (increaseRate < 0) || (days < 1))
    {
        std::cout << "Invalid input. Please reenter all the data.\n";
        std::cin >> start >> increaseRate >> days;
    }

    std::cout << "Days      Population\n"
              << "*******************************\n";
    for (int count = 1; count <= days; count++)
    {
        start *= (1 + increaseRate);
        std::cout << std::setw(4) << count << std::fixed << std::setprecision(2)
                  << std::setw(15) << start << std::endl;
    }
    return 0;
}


