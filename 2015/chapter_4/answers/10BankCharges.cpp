#include <iostream>

int main()
{
    int check;
    double plain = 10,
           total;

    std::cout << "How many checks did you write last month? \n";
    std::cin >> check;

    if (check < 0)
        std::cout << "They should pay you some money. \n";
    else if (check < 20)
    {
        total = plain + check * 0.1;
        std::cout << "Your fee is " << total << "dollars. \n";
    }
    else if (check < 40)
    {
        total = plain + check * 0.08;
        std::cout << "Your fee is " << total << "dollars. \n";
    }
    else if (check < 60)
    {
        total = plain + check * 0.06;
        std::cout << "Your fee is " << total << "dollars. \n";
    }
    else
    {
        total = plain + check * 0.04;
        std::cout << "Your fee is " << total << "dollars. \n";
    }

    return 0;
}

