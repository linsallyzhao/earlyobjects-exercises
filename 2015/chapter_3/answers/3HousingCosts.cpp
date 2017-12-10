#include <iostream>

int main()
{
    float rentOrMortgage,
          phones,
          utilities,
          cable,
          monthlyTotal,
          annualTotal;

    std::cout << "Please enter your monly cost for rent or mortage payment \n";
    std::cin  >> rentOrMortgage;
    std::cout << "for phones \n";
    std::cin >> phones;
    std::cout << "for utilities \n";
    std::cin >> utilities;
    std::cout << "cable \n";
    std::cin >> cable;

    monthlyTotal = rentOrMortgage + phones + utilities + cable;
    annualTotal = monthlyTotal * 12;

    std::cout << "Monthly, you spend " << monthlyTotal << "dollars on housing"
              << "\nAnnually, the cost is " << annualTotal << std::endl;

    return 0;
}
