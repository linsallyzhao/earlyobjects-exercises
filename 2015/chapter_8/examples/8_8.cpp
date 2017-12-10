#include <iostream>

int main()
{
    const int SIZE = 7;
    int numbers[SIZE] = {1, 2, 4, 8};

    std::cout << "Here are the contents of the array:\n";
    for (int index = 0; index < SIZE; index++)
    {
        std::cout << numbers[index] << " ";
    }

    std::cout << std::endl;
    return 0;
}

