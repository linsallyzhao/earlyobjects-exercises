#include <iostream>

int main()
{
    int length, width, num1, num2;

    std::cout << "Please give me two integers between 2 and 10. \n";
    std::cin >> num1 >> num2;

    while ((num1 < 2) || (num1 > 10) || (num2 < 2) || (num2 > 10))
    {
        std::cout << "Do you speak english? Or do you know numbers?\n"
                  << "Do it again!\n";
        std::cin >> num1 >> num2;
    }
    if (num1 > num2)
    {
        length = num1;
        width = num2;
    }
    else
    {
        length = num2;
        width = num1;
    }
    for (int line = 1; line <= width; line++)
    {
        for (int row = 1; row <= length; row++)
            std::cout << "X";
        std::cout << std::endl;
    }
    return 0;
}

