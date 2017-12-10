#include <iostream>

int sum(int num1, int num2);

int main()
{
    int value1 = 20,
        value2 = 40,
        total;

    total = sum(value1, value2);

    std::cout << "The sum of " << value1 << " and "
              << value2 << " is " << total << std:: endl;

    return 0;
}

int sum(int num1, int num2)
{
    return num1 + num2;
}
