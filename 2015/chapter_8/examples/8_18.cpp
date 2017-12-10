#include <iostream>
#include <iomanip>

double sumArray  (const double[], int);
double getHighest(const double[], int);
double getLowest (const double[], int);

int main()
{
    const int NUM_DAYS = 5;
    double sales[NUM_DAYS],
           total,
           average,
           highest,
           lowest;

    std::cout << "Enter the sales for this week. \n";
    for (int day = 0; day < NUM_DAYS; day++)
    {
        std::cout << "Day " << (day + 1) << ": ";
        std::cin >> sales[day];
    }

    total = sumArray(sales, NUM_DAYS);
    average = total / NUM_DAYS;

    highest = getHighest(sales, NUM_DAYS);
    lowest = getLowest(sales, NUM_DAYS);

    std::cout << std::fixed << std::showpoint << std::setprecision(2) << std::endl;
    std::cout << "The total sales are         $"
              << std::setw(9) << total << std::endl;
    std::cout << "The average sales amount is $"
              << std::setw(9) << average << std::endl;
    std::cout << "The highest sales amount is $"
              << std::setw(9) << highest << std::endl;
    std::cout << "The lowest sales amount is  $"
              << std::setw(9) << lowest << std::endl;

    return 0;
}

double sumArray(const double array[], int size)
{
    double total = 0.0;

    for (int count = 0; count < size; count++)
        total += array[count];
    return total;
}

double getHighest(const double array[], int size)
{
    double highest = array[0];

    for (int count = 1; count < size; count++)
    {
        if (array[count] > highest)
            highest = array[count];
    }
    return highest;
}

double getLowest(const double array[], int size)
{
    double lowest = array[0];

    for (int count = 1; count < size; count++)
    {
        if (array[count] < lowest)
            lowest = array[count];
    }
    return lowest;
}

