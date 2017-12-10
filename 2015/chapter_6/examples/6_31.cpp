#include <iostream>
#include <iomanip>

void getLotteryInfo(int&, int&);
long int computeWays(int, int);
long int factorial(int);

int main()
{
    int pickFrom,
        numPicks;
    long int ways;

    std::cout << "This program will tell you your probability of \n"
              << "winning \"Little Lottl\". \n";
    getLotteryInfo(pickFrom, numPicks);
    ways = computeWays(pickFrom, numPicks);

    std::cout << std::fixed << std::showpoint << std::setprecision(4);

    std::cout << "\nYour chance of winning the lottery is "
              << "1 chance in " << ways << ". \n"
              << "This is a probability of " << (1.0 / ways) << std::endl;
    return 0;
}

void getLotteryInfo(int &pickFrom, int &numPicks)
{
    std::cout << "\nHow many numbers (1 - 12) are there to pick  from? \n";
    std::cin >> pickFrom;
    while (pickFrom < 1 || pickFrom > 12)
    {
        std::cout << "There must be between 1 and 12 numbers.\n"
                  << "How many numbers (1 - 12) are there to pick from?\n";
        std::cin >> pickFrom;
    }

    std::cout << "How many numbers must you pick to play>\n";
    std::cin >> numPicks;
    while (numPicks < 1 || numPicks > pickFrom)
    {
        if (numPicks < 1)
            std::cout << "You must pick at least one number. \n";
        else
            std::cout << "You must pick " << pickFrom << " or fewer numbers. \n";
        std::cout << "How many numbers must you pick to play?\n";
        std::cin >> numPicks;
    }
}

long int computeWays(int n, int k)
{
    return (factorial(n) / factorial(k) / factorial(n - k));
}

long int factorial(int number)
{
    long int factTotal = 1;

    for (int count = number; count > 0; count--)
    {
        factTotal *= count;
    }
    return factTotal;
}
