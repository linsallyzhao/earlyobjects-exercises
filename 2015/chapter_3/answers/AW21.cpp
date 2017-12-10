#include <iostream>

int main()
{
    int score1,
        score2,
        score3;
    double avg;

    std::cout << "Please enter your scores for three games. ";
    std::cin >> score1 >> score2 >> score3;

    avg = static_cast<double>(score1 + score2 + score3) / 3;

    std::cout << "Your average score is: " << avg << std::endl;

    return 0;
}
