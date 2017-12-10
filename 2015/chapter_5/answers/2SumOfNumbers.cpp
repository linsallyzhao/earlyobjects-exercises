#include <iostream>

int main()
{
    int lastNum,
        total = 0;

    std::cout << "Please enter a positive integer: \n";
    std::cin >> lastNum;

    while (lastNum <= 0)
    {
        std::cout << "The input has to be positive, reenter please\n";
        std::cin >> lastNum;
    }
    std::cout << "The sum from 1 to " << lastNum << " is "; 
    for (lastNum; lastNum > 0; lastNum--)
        total += lastNum;
    std::cout << total << std::endl;

    return 0;
}
