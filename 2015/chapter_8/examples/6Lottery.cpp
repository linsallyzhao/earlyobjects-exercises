#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
    int winning[5];
    int user[5];
    srand(time(NULL));

    for (int index = 0; index < 5; index++)
    {
        int temp;
        temp = rand() % 10;
        winning[index] = temp;
    }
    std::cout << "Please enter your choice (each number should be among 0 to 9):\n";
    for (int index = 0; index < 5; index++)
    {
        std::cin >> user[index];
    }

    int match = 0;

    for (int index = 0; index < 5; index++)
    {
        if (winning[index] == user[index])
            match++;
    }

    std::cout << "The winning number is: ";
    for (int index = 0; index < 5; index++)
    {
        std::cout << winning[index];
    }
    std::cout << std::endl;

    std::cout << "Your number is: ";
    for(int index = 0; index < 5; index++)
    {
        std::cout << user[index];
    }
    std::cout << std::endl;

    std::cout << "There are " << match << " matching numbers. \n";

    return 0;
}


