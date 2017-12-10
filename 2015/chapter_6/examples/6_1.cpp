#include <iostream>

void displayMessage()
{
    std::cout << "Hello from the function displayMessage. \n";
}

int main()
{
    std::cout << "Hellow from main. \n";
    displayMessage();
    std::cout << "Back in function main again. \n";
    return 0;
}

