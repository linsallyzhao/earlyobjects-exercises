#include <iostream>
#include <cstdlib>

int main()
{
    unsigned seed;
    std::cout << "Enter a seed value: ";
    std::cin >> seed;
    std::cin.ignore(50, '\n');

    std::srand(seed);

    int num1, num2, sum;
    num1 = std::rand() % 9 + 1;
    num2 = std::rand() % 9 + 1;
    sum = num1 + num2;

    std::cout << "Please sum number " << num1 << " and " << num2 << std::endl;
    std::cin.get();
    std::cout << "The correct answer is " << sum << std::endl;

    return 0;
}
