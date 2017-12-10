#include <iostream>

int main()
{
    const int MIN_PLAYERS = 9,
              MAX_PLAYERS = 15;

    int players,
        teamSize,
        numTeams,
        leftOver;

    std::cout << "How many players do you wish per team?\n";
    std::cout << "(Enter a value int he range "
              << MIN_PLAYERS << " - " << MAX_PLAYERS << "): ";
    std::cin >> teamSize;

    while (teamSize < MIN_PLAYERS || teamSize > MAX_PLAYERS)
    {
        std::cout << "\nTeam size should be "
                  << MIN_PLAYERS << " to " << MAX_PLAYERS << " players. \n";
        std::cout << "How many players do you wish per team? \n";
        std::cin >> teamSize;
    }

    std::cout << "\nHow many players are available?\n";
    std::cin >> players;

    while (players <= 0)
    {
        std::cout << "Please enter a positive number: ";
        std::cin >> players;
    }

    numTeams = players / teamSize;
    leftOver = players % teamSize;

    std::cout << "\nThere will be " << numTeams << " teams with ";
    std::cout << leftOver << " players left over. \n";
    return 0;
}
