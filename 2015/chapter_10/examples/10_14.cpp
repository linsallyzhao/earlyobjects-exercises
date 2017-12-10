#include <iostream>
#include <iomanip>

int main()
{
    double *sales,
           total = 0.0,
           average;
    int numDays;

    std::cout << "How many days of sales figures do you wish to process?\n";
    std::cin >> numDays;

    sales = new double[numDays];
    std::cout << "Enter the sales figures below. \n";
    for (int count = 0; count < numDays; count++)
    {
        std::cout << "Day " << (count + 1) << ": ";
        std::cin >> sales[count];
    }

    for (int count = 0; count < numDays; count++)
    {
        total += sales[count];
    }

    average = total / numDays;

    std::cout << std::setprecision(2) << std::fixed << std::showpoint;
    std::cout << "\n\nTotal sales: $" << total << std::endl
              << "Average sales:  $" << average << std::endl;

    delete [] sales;
    sales = 0;
    return 0;
}
