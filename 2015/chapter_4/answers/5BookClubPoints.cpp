#include <iostream>

int main()
{
    int books;

    std::cout << "How many books did you purcase this month? \n";
    std::cin >> books;

    if (books < 0)
        std::cout << "Not very good at number do you? \n";
    else
    {
        switch (books)
        {
            case 0: std::cout << "No awards points for you. \n";
                    break;
            case 1: std::cout << "5 awards points for you. \n";
                    break;
            case 2: std::cout << "15 awards points, not bad. \n";
                    break;
            case 3: std::cout << "30 awards points. \n";
                    break;
            default: std::cout << "60 awards points. \n";
        }
    }
    return 0;
}

