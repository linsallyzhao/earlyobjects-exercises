#include <iostream>
#include <cstdlib>

int main()
{
    int num1, num2, answer, result;

    unsigned seed = time(0);
    srand(seed);
    num1 = rand() % 41 + 10;
    num2 = rand() % 41 + 10;
    result = num1 + num2;

    std::cout << num1 << std::endl << num2 << std::endl;
    std::cin >> answer;

    if (answer == result)
        std::cout << "Congrat! \n";
    else
        std::cout << "The correct answer is " << result << std::endl;
    return 0;
}

