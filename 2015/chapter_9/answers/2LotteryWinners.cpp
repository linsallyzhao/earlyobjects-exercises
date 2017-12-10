#include <iostream>

int linSearch(int array[], int, int);

int main()
{
    int lucky[10] = {14523, 21365, 21456, 36548, 37568, 39546,
                     40125, 41568, 51269, 41259};
    int winner;
    int result;

    std::cout << "Please enter winning number: \n";
    std::cin >> winner;

    result = linSearch(lucky, 10, winner);

    if (result == -1)
        std::cout << "Sorry you didn't win.\n:";
    else
        std::cout << "Congratulations! You win the lottery!\n";

    return 0;
}

int linSearch(int array[], int size, int value)
{
    int pos = -1;
    int index = 0;
    bool found = false;

    while (index < size && !found)
    {
        if (array[index] == value)
        {
            pos = index;
            found = true;
        }
        index++;
    }
    return pos;
}
