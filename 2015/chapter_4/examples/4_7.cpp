#include <iostream>

int main()
{
    const int MIN_A_SCORE = 90,
              MIN_B_SCORE = 80,
              MIN_C_SCORE = 70,
              MIN_D_SCORE = 60;

    int testScore;
    char grade;

    std::cout << "Enter your numeric test score and I will \n"
              << "tell you the letter grade you earned: ";
    std::cin >> testScore;

    if (testScore >= MIN_A_SCORE)
        grade = 'A';
    else if (testScore >= MIN_B_SCORE)
        grade = 'B';
    else if (testScore >= MIN_C_SCORE)
        grade = 'C';
    else if (testScore >= MIN_D_SCORE)
        grade = 'D';
    else if (testScore >= 0)
        grade = 'F';

    std::cout << "Your grade is " << grade << ". \n";

    return 0;
}
