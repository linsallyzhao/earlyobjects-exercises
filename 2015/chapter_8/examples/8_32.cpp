#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

const std::string name[4] = {" ", "rock", "paper", "scissors"};

int main()
{
    int computerChoice,
        playerChoice,
        computerPoints = 0,
        playerPoints = 0;

    srand(time(NULL));

    std::cout << "Let's  play Rock-Paper-Scissors!\n";
    std::cout << "The first player to score 5 points wins. \n\n";

    do
    {
        computerChoice = 1 + rand() % 3;

        std::cout << "Pick 1(rock), 2(paper), or 3(scissors): ";
        std::cin >> playerChoice;

        if (computerChoice == playerChoice)
        {
            std::cout << "I chose " << name[computerChoice]
                      << " too, so we tied. \n\n";
        }

        else if ((playerChoice == 1 && computerChoice ==2) ||
                 (playerChoice == 2 && computerChoice ==3) ||
                 (playerChoice == 3 && computerChoice ==1) )
        {
            std::cout << "I chose " << name[computerChoice] << ", so "
                      << name[computerChoice] << " beats "
                      << name[playerChoice] << ". \n";
            computerPoints++;
        }
        else
        {
            std::cout << "I chose " << name[computerChoice] << ", so "
                      << name[playerChoice] << " beats "
                      << name[computerChoice] << ". \n\n";
            playerPoints++;
        }
    }while(playerPoints < 5 && computerPoints < 5);

    std::cout << "Let's see how you did :\n"
              << "You won " << playerPoints << " points and I won "
              << computerPoints << " points. \n";

    if (playerPoints == 5)
        std::cout << "Congratulations! You're the champ!\n";
    else
        std::cout << "Hurray for me! I'm the champ!\n";
    return 0;
}

