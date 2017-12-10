#include <iostream>
#include <iomanip>

int main()
{
    double fDegree;
    
    std::cout << "Celsius   Fahrenheit\n"
              << "************************\n";

    for (int count = 0; count <=20; count++)
    {
        fDegree = 9.0 * count / 5 + 32;
        std::cout << std::setw(5) << count << std::setw(18) << fDegree << std::endl;
    }
    return 0;
}
