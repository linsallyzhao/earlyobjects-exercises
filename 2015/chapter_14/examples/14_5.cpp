#include <iostream>

int gcd(int, int);

int main()
{
    int num1, num2;
    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;
    std::cout << "The greatest common divisor of "
              << num1 << " and " << num2 << " is "
              << gcd(num1, num2) << std::endl;

    return 0;
}

int gcd(int x, int y)
{
    if (x % y == 0)
        return y;
    else
        return gcd(y, x % y);
}

