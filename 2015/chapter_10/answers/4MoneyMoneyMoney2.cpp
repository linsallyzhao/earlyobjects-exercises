#include <iostream>
#include "donlist.h"

int main()
{
    double *fundPtr = 0;
    int numDon = 0;
    std::cout << "How many donation do you have? \n";
    std::cin >> numDon;
    fundPtr = new double[numDon];
    for (int index = 0; index < numDon; index++)
    {
        std::cout << "Please enter the amount of donation: \n";
        std::cin >> fundPtr[index];
    }

    DonationList ckGraphics(numDon, fundPtr);
    std::cout << "The donations sorted in ascending order are:\n";
    ckGraphics.showSorted();
    std::cout << "The donations sorted in descending order are:\n";
    ckGraphics.showDecSorted();
    std::cout << "The donations in their original order are: \n";
    ckGraphics.show();
    delete [] fundPtr;
    fundPtr = 0;
    return 0;
}


