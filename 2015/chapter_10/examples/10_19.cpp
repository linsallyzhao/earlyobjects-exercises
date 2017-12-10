#include <iostream>
#include "donlist.h"

int main()
{
    double funds[] = {5, 100, 5, 25, 10, 5, 25, 5, 5, 100, 10, 15, 10, 5, 10};

    DonationList ckGraphics(15, funds);
    std::cout << "The donations sorted in ascending order are:\n";
    ckGraphics.showSorted();
    std::cout << "The donations in their original order are: \n";
    ckGraphics.show();
    return 0;
}


