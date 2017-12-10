#include <iostream>

int factorial(int);

int main()
{
    int num;

    std::cout << "Entert the number you want to know the factorial of:\n";
    std::cin >> num;

    std::cout << "The factorial of " << num << " is " << factorial(num)
              << std::endl;

    return 0;
}

int factorial(int n)
{
    int product = 1;
    for (int num = 1; num <= n; num++)
        product *= num;
    return product;
}


