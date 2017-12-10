#include <iostream>

void showSum(int num1, int num2, int num3);

int main()
{
    int value1, value2, value3;

    std::cout << "Enter three integers and I will display\n"
              << "their sum:\n";
    std::cin >> value1 >> value2 >> value3;

    showSum(value1, value2, value3);
    return 0;
}

void showSum(int num1, int num2, int num3)
{
    int sum = num1 + num2 + num3;
    std::cout << "The sum is " << sum << std::endl;
}
