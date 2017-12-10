#include <iostream>

int main()
{
    char employed,
         recentGrad;

    std::cout << "Answer the following questions \n"
              << "with either Y for Yes or N for No. \n";

    std::cout << "Are you employed? ";
    std::cin >> employed;
    std::cout << "Have you graduated from college in the past two years? ";
    std::cin >> recentGrad;

    if (employed == 'Y' && recentGrad == 'Y')
        std::cout << "\nYou qualify for the special interest rate. \n";
    else 
    {
        std::cout << "\nYou must be employed and have graduated from a college \n"
                  << "in the past two years to qualify \n"
                  << "for the special interest rate. ";
    }
    return 0;
}

