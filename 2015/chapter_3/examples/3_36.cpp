#include <iostream>
#include <iomanip>

const double PRICE_PER_CUBIC_YD = 22.00;

int main()
{
    double squareFeet;
    int depth;
    double cubicFeet,
           cubicYards,
           totalPrice;

    std::cout << "Number of square feet to be coverd with mulch: ";
    std::cin >> squareFeet;
    std::cout << "Number of inches deep: ";
    std::cin >> depth;

    cubicFeet = squareFeet * depth / 12;
    cubicYards = cubicFeet / 27;
    totalPrice = cubicYards * PRICE_PER_CUBIC_YD;

    std::cout << "\nNumber of cubic yards needed: "
              << cubicYards << std::endl
              << std::fixed << std::showpoint << std::setprecision(2)
              << "Price per cubic yard: $" << std::setw(7)
              << PRICE_PER_CUBIC_YD << std::endl
              << "Total price:          $" << std::setw(7)
              << totalPrice << std::endl << std::endl;

    return 0;
}
