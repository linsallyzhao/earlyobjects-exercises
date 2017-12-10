#include <iostream>

int binaSearch(int array[], int, int);

int main()
{
    int lucky[10] = {14523, 21365, 21456, 36548, 37568, 39546,
                     40125, 41568, 51269, 41259};
    int winner;
    int result;

    std::cout << "Please enter winning number: \n";
    std::cin >> winner;

    result = binaSearch(lucky, 10, winner);

    if (result == -1)
        std::cout << "Sorry you didn't win.\n:";
    else
        std::cout << "Congratulations! You win the lottery!\n";

    return 0;
}

int binaSearch(int array[], int size, int value)
{
    int pos = -1;
    int middle;
    int start = 0;
    int end = size - 1;
    bool found = false;

    while (start <= end && !found)
    {
        middle = (start + end) / 2;
        if (array[middle] == value)
        {
            pos = middle;
            found = true;
        }
        else if (array[middle] > value)
            end = middle - 1;
        else
            start = middle + 1;

    }
    return pos;
}
