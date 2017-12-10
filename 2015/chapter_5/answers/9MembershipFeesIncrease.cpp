#include <iostream>
#include <iomanip>

int main()
{
    const double RAISE = 0.04;
    double fee = 2500;
    std::cout << "Year      Fees\n"
              << "*******************\n";
    for (int count = 1; count <= 6; count++)
    {
        fee *= (1 + RAISE);
        std::cout << std::setw(4) << count << std::setw(12) 
                  << std::fixed << std::setprecision(2) 
                  << fee << std::endl;
    }
    return 0;
}
