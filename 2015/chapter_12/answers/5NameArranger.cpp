#include <iostream>
#include <cstring>
#include <cstdlib>

int main()
{
    char first[20];
    char middle[20];
    char last[80];

    std::cout << "Please enter your name:\n";
    std::cin.getline(first, 20, ' ');
    std::cout << first << std::endl;
    std::cin.getline(middle, 20, ' ');
    std::cin.getline(last, 20);
    
    char temp1[] = ", ";
    char temp2[] = " ";

    strcat(last, temp1);
    strcat(last, first);
    strcat(last, temp2);
    strcat(last, middle);

    std::cout << last << std::endl;

    return 0;
}
    

