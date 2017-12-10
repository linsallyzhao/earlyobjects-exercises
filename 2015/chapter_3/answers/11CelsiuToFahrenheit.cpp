#include <iostream>

int main()
{
    float Cdegree, Fdegree;

    std::cout << "Please enter the temperature in Celsius: \n";
    std::cin >> Cdegree;

    Fdegree = 9.0 / 5 * Cdegree + 32;

    std::cout << "That is " << Fdegree << " degree in Fehrenheit.";

    return 0;
}
