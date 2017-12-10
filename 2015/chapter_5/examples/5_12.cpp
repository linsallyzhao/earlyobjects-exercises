#include <iostream>

int main()
{
    int game = 1,
        points,
        total = 0;
    std::cout << "Enter the number of points your team has earned\n"
              << "so far hisi season. Then genter -1 when finished.\n\n"
              << "Enter the points for game " << game << ": ";
    std::cin >> points;

    while (points != -1)
    {
        total += points;
        game++;
        std::cout << "Enter the points for game " << game << ": ";
        std::cin >> points;
    }
    std::cout << "\nThe total points are " << total << std::endl;
    return 0;
}
