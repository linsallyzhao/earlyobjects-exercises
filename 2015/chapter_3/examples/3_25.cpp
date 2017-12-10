#include <iostream>
#include <string>

int main()
{
    std::string firstName,
                lastName,
                fullName,
                stars;
    int numStars;

    std::cout << "Please enter yoru first name: ";
    std::getline(std::cin, firstName);

    std::cout << "plaese enter yoru last name: ";
    std::getline(std::cin, lastName);

    fullName = firstName + " " + lastName;

    numStars = fullName.length();
    stars.assign(numStars, '*');

    std::cout << std::endl
              << stars << std::endl
              << fullName << std::endl
              << stars << std::endl;

    return 0;
}
