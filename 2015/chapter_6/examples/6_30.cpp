#include <iostream>
#include <string>

void showFees(std::string, double, int);

int main()
{
    std::cout << "Calling the showFees function with arguments"
              << " Adult, 120.0, 3. \n";
    showFees("Adult", 120.0, 3);

    std::cout << "Calling the showFees function with arguments"
              << " Child, 62.0, 2)\n";
    showFees("Child", 60.0, 2);

    std::cout << "Calling the showFees function with arguments"
              << " Senior, 100.0, 4. \n";
    showFees("Senior", 100.0, 4);

    return 0;
}

void showFees(std::string memberType, double rate, int months)
{
    std::cout << std::endl
              << "Membership Type  : " << memberType << "   "
              << "Monthly rate $" << rate << std::endl
              << "Number of months : " << months << std::endl
              << "Total charges    : $" << (rate * months)
              << std::endl << std::endl;
}
