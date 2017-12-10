#include <iostream>

int main()
{
    const int SIZE = 5;
    int numbers[SIZE];

    std::cout << "Enter " << SIZE << " numbers: ";
    for (int count = 0; count < SIZE; count++)
        std::cin >> *(numbers + count);

    std::cout << "Here are the numbers you entered: \n";
    for (int count = 0; count < SIZE; count++)
        std::cout << *(numbers + count) << " ";
    std::cout << std::endl;
    return 0;
}
