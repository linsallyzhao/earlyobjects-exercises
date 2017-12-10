#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    const double PRICE_A = 249.0,
                 PRICE_B = 299.0;

    std::string partNum;

    std::cout << "The stereo part numbers are: \n"
              << "Boom Box   : part number S-29A \n"
              << "Shelf Model: part number S-29B \n"
              << "Enter the part number of the stereo you\n"
              << "wish to purchase: ";
    std::cin >> partNum;

    std::cout << std::fixed << std::showpoint << std::setprecision(2);

    if (partNum == "S-29A")
        std::cout << "The price is $" << PRICE_A << std::endl;
    else if (partNum == "S-29B")
        std::cout << "The price is $" << PRICE_B << std::endl;
    else
        std::cout << partNum << " is not a valid part number. \n";

    return 0;
}
