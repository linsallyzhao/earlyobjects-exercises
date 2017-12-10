#include <iostream>
#include <iomanip>

int main()
{
    int score1, score2, score3;
    double average;

    std::cout << "Enter 3 test scores and I will average them: ";
    std::cin >> score1 >> score2 >> score3;

    average = (score1 + score2 + score3) / 3.0;
    std::cout << std::fixed << std::showpoint << std::setprecision(1);
    std::cout << "Your avarage is " << average << std::endl;

    if (average == 100)
    {   std::cout << "Congratulations! ";
        std::cout << "That\'s a perfect score! \n";
    }

    return 0;
}
