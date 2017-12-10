#include <iostream>

bool isPrime(int num);

int main()
{
    int toTest;
    std::cout << "Please enter the number that you wanna test:\n";
    std::cin >> toTest;

    if (isPrime(toTest))
        std::cout << "This number is prime number.\n";
    else
        std::cout << "This number is not prime number. \n";
    return 0;
}
bool isPrime(int num)
{
    bool test = 1;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            test = 0;
            return test;
        }
    }
}


