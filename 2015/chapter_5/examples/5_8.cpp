#include <iostream>

int main()
{
    int score1, score2, score3;
    double average;
    char again;

    do
    {
        std::cout << "\nEnter 3 scores and I will average them: ";
        std::cin >> score1 >> score2 >> score3;

        average = (score1 + score2 + score3) / 3.0;
        std::cout << score1 << "    " << score2 << "    " << score3 << std::endl;
        std::cout << "The average is " << average << "\n\n";

        std::cout << "Do you want to average another set? (Y/N)\n";
        std::cin >> again;
        std::cout << again << std::endl;
    } while (again == 'Y' || again == 'y');
    return 0;
}

