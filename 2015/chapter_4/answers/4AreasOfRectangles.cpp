#include <iostream>

int main()
{
    float length1, length2, width1, width2;

    std::cout << "Please enter the length and width of the first \n"
              << "rectangle. \n";
    std::cin >> length1 >> width1;

    std::cout << "Please enter the length and width of the second \n"
              << "rectangle. \n";
    std::cin >> length2 >> width2;

    if (length1 * width1 > length2 * width2)
        std::cout << "The first rectangle is bigger. \n";
    else if (length1 * width1 < length2 * width2)
        std::cout << "The second rectangle is bigger. \n";
    else
        std::cout << "They are of the same area.\n ";

    return 0;
}

