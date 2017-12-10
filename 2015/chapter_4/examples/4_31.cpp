#include <iostream>
#include <string>
#include <cstdlib>

int main()
{
    std::string career1, career2, career3;

    int randomNum;

    unsigned seed = time(0);
    srand(seed);

    std::cout << "I am a fortune teller. Look into my crystal screen \n"
              << "and enter 3 careers you would like to have. Examples: \n\n"
              << "      chef \n     astronaut \n        CIA agent \n\n"
              << "Then I will predict what you will be. \n\n";

    std::cout << "Career choice 1: ";
    std::getline(std::cin, career1);
    std::cout << "Career choice 2: ";
    std::getline(std::cin, career2);
    std::cout << "Career choice 3: ";
    std::getline(std::cin, career3);

    randomNum = 1 + rand() % 4;

    if (randomNum == 1)
        std::cout << "\nYou will be a " << career1 << ". \n";
    else if (randomNum == 2)
        std::cout << "\nYou will be a " << career2 << ". \n";
    else if (randomNum == 3)
        std::cout << "\nYou will be a " << career3 << ". \n";
    else
        std::cout << "\nSorry. You will not be any of these. \n";

    return 0;
}
    

