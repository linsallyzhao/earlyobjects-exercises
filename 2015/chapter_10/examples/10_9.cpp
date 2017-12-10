#include <iostream>

int main()
{
    const int SIZE = 8;
    int set[] = {5, 10, 15, 20, 25, 30, 35, 40};
    int *numPtr;

    numPtr = set;

    std::cout << "The numbers in set are:\n";
    for (int index = 0; index < SIZE; index++)
    {
        std::cout << *numPtr << "   ";
        numPtr++;
    }

    std::cout << "\nThe numbers in set backwards are: \n";
    for (int index = 0; index < SIZE; index++)
    {
        numPtr--;
        std::cout << *numPtr << "   ";
    }
    return 0;
}
