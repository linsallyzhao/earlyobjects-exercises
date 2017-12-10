#include <iostream>

int product(int, int);

int main()
{
    int a, b;
    std::cout << "Please enter two integers:\n";
    std::cin >> a >> b;
    std::cout << "The value of " << a << " * " << b << " is "
              << product(a, b) << std::endl;
    return 0;
}

int product(int a, int b)
{
    if (b > 0)
        return a + product(a, b - 1);
}

