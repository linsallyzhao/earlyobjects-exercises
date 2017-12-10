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

    if (employed == 'Y')
    {
        if (recentGrad == 'Y')
        {
            std::cout << "You qualify for the special interest rate. \n";
        }
        else 
        {
            std::cout << "You must have graduated from college in the past \n"
                      << "two years to qualify for the special interest rate. \n";
        }
    }
    else
    {
        std::cout << "You must be employed to qualify for the \n"
                  << "special interest rate. \n";
    }
    return 0;
}
