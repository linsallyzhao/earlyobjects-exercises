#include <iostream>
#include <iomanip>
#include <cstdlib>

int main()
{
    int target, guess;
    unsigned seed = time(0);
    srand(seed);
    target = rand() % 100 + 1;

    std::cout << "Please guess\n";
    std::cin >> guess;
    
    while (guess != target)
    {
        if (guess > target)
            std::cout << "Too high.Try again\n";
        else
            std::cout << "Too low. Try again\n";
        std::cin >> guess;
    }
    std::cout << "Congratulations. You figured out my number.\n";
    return 0;
}
