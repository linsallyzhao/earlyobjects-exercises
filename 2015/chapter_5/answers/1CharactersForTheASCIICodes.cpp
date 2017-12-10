#include <iostream>

int main()
{
    char toshow;
    int num = 32;

    for (int line = 1; line <= 6; line++)
    {
        for (int count = 1; count <= 16; count++)
        {
            toshow = num;
            num++;
            std::cout << toshow << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
