#include <iostream>

template <class T>
T sum(T val1, T val2)
{
    return val1 + val2;
}

template <class T>
T sum(T val1, T val2, T val3)
{
    return val1 + val2 + val3;
}

int main()
{
    double num1, num2, num3;

    std::cout << "Enter two values: ";
    std::cin >> num1 >> num2;
    std::cout << "Their sum is " << sum(num1, num2) << std::endl;
    std::cout << "Enter three values: ";
    std::cin >> num1 >> num2 >> num3;
    std::cout << "Their sum is " << sum(num1, num2, num3) << std::endl;

    return 0;
}
