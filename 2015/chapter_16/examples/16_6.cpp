#include <iostream>
#include <iomanip>

template <class T>
T square (T number)
{
    return number * number;
}

int main()
{
    int iValue;
    std::cout << std::setprecision(5);
    std::cout << "Enter an integer: ";
    std::cin >> iValue;

    std::cout << "The square is " << square(iValue);

    std::cout << "\nEnter a double: ";
    double dValue;
    std::cin >> dValue;

    std::cout << "The square is " << square(dValue) << std::endl;

    return 0;
}
