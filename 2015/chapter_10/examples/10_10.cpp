#include <iostream>

int main()
{
    const int SIZE = 8;
    int set[] = {5, 10, 15, 20, 25, 30, 35, 40};
    int *numPtr = set;

    std::cout << "The numbers in set are: \n";
    std::cout << *numPtr << "   ";
    while (numPtr < &set[SIZE - 1])
    {
        numPtr++;
        std::cout << *numPtr << "   ";
    }

    std::cout << "\nThe numbers in set backwords are: \n";
    std::cout << *numPtr << "   ";
    while (numPtr > set)
    {
        numPtr--;
        std::cout << *numPtr << "   ";
    }
    return 0;
}
