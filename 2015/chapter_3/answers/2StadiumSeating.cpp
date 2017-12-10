#include <iostream>
#include <iomanip>

int main()
{
    float priceA = 15,
          priceB = 12,
          priceC = 9,
          numA,
          numB,
          numC,
          total;

    std::cout << "Please enter the amount of seat sold in A, B, C class. \n";
    std::cin >> numA >> numB >> numC;

    total = priceA * numA + priceB * numB + priceC * numC;

    std::cout << "The total income from seat selling is "
              << std::fixed << std::setprecision(2)
              << total << " dollars. \n";

    return 0;
}
