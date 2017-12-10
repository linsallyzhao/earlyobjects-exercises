#include <iostream>
#include <cstring>
#include <iomanip>

int main()
{
    const double A_PRICE = 49.0, B_PRICE = 69.95;
    const int PART_LENGTH = 8;
    char partNum[PART_LENGTH];

    std::cout << "The computer part numbers are:\n";
    std::cout << "\tBlu-ray Disk Drive, part number S147-29A\n";
    std::cout << "\tWierless Router, part number S147-29B\n";
    std::cout << "Enter the part number of the item you "
              << "wish to purchase: ";

    std::cin >> std::setw(9);
    std::cin >> partNum;

    std::cout << std::showpoint << std::fixed << std::setprecision(2);
    if (strcmp(partNum, "S147-29A") == 0)
        std::cout << "The price is $" << A_PRICE << std::endl;
    else if(strcmp(partNum, "S147-29B") == 0)
        std::cout << "The price is $" << B_PRICE << std::endl;
    else
        std::cout << partNum << " is not a valid part number. \n";

    return 0;
}
