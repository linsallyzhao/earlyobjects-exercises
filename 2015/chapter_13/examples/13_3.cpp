#include <iostream>
#include <iomanip>

int main()
{
    int a, b;
    std::cout << "Enter two decimal numbers: ";
    std::cin >> a >> b;

    std::cout << "The number in decimal: " << a << '\t' << b << std::endl;
    std::cout << "The number in hexadeciman: " << std::hex 
              << std::showbase << a << '\t' << b << std::endl;
    std::cout << "The numbers in octol: " << std::oct
              << a << '\t' << b << std::endl;

    std::cout << "Enter two hexadecimal numbers: ";
    std::cin >> std::hex >> a >> b;
    std::cout << "You entered decimal " << std::dec
              << a << '\t' << b << std::endl;

    std::cout << "Enter two octal numbers: ";
    std::cin >> std::oct >> a >> b;
    std::cout << "You entered decimal " << std::dec
              << a << '\t' << b << std::endl;

    return 0;
}
