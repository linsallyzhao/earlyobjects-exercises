#include <iostream> 

int main()
{
    float actualValue, taxRate, tax;

    std::cout << "What is the actual value of your property? " << std::endl;
    std::cin >> actualValue;
    std::cout << "What is the current tax rate? " << std::endl;
    std::cin >> taxRate;

    tax = actualValue * 0.6 * taxRate;

    std::cout << "You should pay tax " << tax << " dollars. ";

    return 0;

}
