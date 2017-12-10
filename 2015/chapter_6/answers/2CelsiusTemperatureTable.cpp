#include <iostream>
#include <iomanip>

double celsius(double fDegree);

int main()
{
    std::cout << "Fahrenheit" << "      " << "Celsius" << std::endl;
    for (int count = 1; count <= 20; count++)
    {
        std::cout << std::setw(6) << count << "       " 
                  << std::setw(9) << std::fixed << std::setprecision(2)
                  << celsius(count) << std::endl;

    }
    return 0;
}
double celsius(double fDegree)
{
    return 5 / 9.0 * (fDegree - 32);
}

