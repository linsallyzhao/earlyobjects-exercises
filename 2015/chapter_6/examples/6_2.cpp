#include <iostream>

void displayMessage()
{
    std::cout << "Hello from the function displayMessage. \n";
}

int main()
{
    std::cout << "Hellow from main. \n";
    
    for (int count = 0; count < 3; count++)
        displayMessage();

    std::cout << "Back in function main again. \n";
    return 0;
}

