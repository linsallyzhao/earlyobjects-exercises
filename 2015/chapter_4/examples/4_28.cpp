#include <iostream>

enum Roster { Tom = 1, Sharon, Bill, Teresa, John };

int main()
{
    int who;

    std::cout << "This program will give you a student's birthday. \n"
              << "Whose birthday do you want to know? \n";
    std::cout << "1 = Tom\n"
              << "2 = Sharon\n"
              << "3 = Bill\n"
              << "4 = Teresa\n"
              << "5 = John\n";
    std::cin >> who;

    switch (who)
    {
        case Tom : std::cout << "\nTom's birthday is Jan. 3. \n";
                   break;
        case Sharon : std::cout << "\nSharon's birthday is Apr. 22. \n";
                   break;
        case Bill: std::cout << "\nBill's birthday is Dec. 19. \n";
                   break;
        case Teresa : std::cout << "\nTeresa's birthday is Feb. 2. \n";
                   break;
        case John : std::cout << "\nJohn's birthday is Jun. 17. \n";
                   break;
        default : std::cout << "\nDude~~, seriously?\n";
    }
    return 0;
}

