#include <iostream>

int main()
{
    const int A_SCORE = 90,
              B_SCORE = 80,
              C_SCORE = 70,
              D_SCORE = 60,
              MIN_SCORE = 0,
              MAX_SCORE = 100;

    int testScore;

    std::cout << "Enter your numeric test score and I will \n"
              << "tell you the letter grade you earned: ";

    std::cin >> testScore;

    if (testScore >= MIN_SCORE && testScore <= MAX_SCORE)
    {
        if (testScore >= A_SCORE)
            std::cout << "Your grade is A. \n";
        else if (testScore >= B_SCORE)
            std::cout << "Your grade is B. \n";
        else if (testScore >= C_SCORE)
            std::cout << "Your grade is C. \n";
        else if (testScore >= D_SCORE)
            std::cout << "Your grade is D. \n";
        else
            std::cout << "Your grade is F. \n";
    }
    else
    {
        std::cout << "That is an invalid score. Run the program\n"
                  << "again and enter a value in the range of \n"
                  << MIN_SCORE << " through " << MAX_SCORE << std::endl;
    }
    return 0;
}

