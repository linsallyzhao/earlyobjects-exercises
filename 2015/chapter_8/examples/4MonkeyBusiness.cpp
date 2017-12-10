#include <iostream>

double getHighest(const double food[][7], int row);
double getLowest(const double food[][7], int row);

int main()
{
    int row, col;
    double monkeyFood[3][7];
    double total = 0;
    double avg;
    double high, low;

    for (row = 0; row < 3; row++)
    {
        std::cout << "Please input food for monkey #" << (row + 1) << ": \n";
        for (col = 0; col < 7; col++)
        {
            std::cout << "How much did he or she eat in day #" << (col + 1) 
                      << ": ";
            std::cin >> monkeyFood[row][col];
            total += monkeyFood[row][col];
        }
    }
    std::cout << std::endl;
    avg = total / 7;

    high = getHighest(monkeyFood, 3);
    low = getLowest(monkeyFood, 3);

    std::cout << "On average, they eat " << avg << " per day. \n";
    std::cout << "The least food eaten was " << low << std::endl;
    std::cout << "The greatest amount eaten was " << high << std::endl;

    return 0;
}

double getHighest(const double food[][7], int numRow)
{
    int row = 0,
        col = 0;
    double highest = food[row][col];

    for (row = 1;row < numRow; row++)
    {
        for (col = 1; col < 7; col++)
        {
            if (food[row][col] > highest)
                highest = food[row][col];
        }
    }
    return highest;
}



double getLowest(const double food[][7], int numRow)
{
    int row = 0,
        col = 0;
    double lowest = food[row][col];

    for (row = 1;row < numRow; row++)
    {
        for (col = 1; col < 7; col++)
        {
            if (food[row][col] < lowest)
                lowest = food[row][col];
        }
    }
    return lowest;
}
