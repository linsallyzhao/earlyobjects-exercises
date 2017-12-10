#include <iostream>
#include <cmath>

int squareRoot (int k)
{
    double squareRoot = std::pow(k, 0.5);
    int intRoot = std::pow(k, 0.5);
    if (squareRoot != intRoot)
        throw std::string("Is not perfect square!");
    else
        return intRoot;
}

int main()
{
    int num;
    std::cout << "Please input a number:\n";
    std::cin >> num;
    try
    {
        std::cout << squareRoot(num) << std::endl;
    }
    catch(std::string message)
    {
        std::cout << message << std::endl;
    }

    return 0;
}

