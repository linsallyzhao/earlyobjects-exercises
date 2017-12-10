#include <iostream>
#include <cstdlib>

void someFunction();

int main()
{
    someFunction();
    return 0;
}

void someFunction()
{
    std::cout << "This program terminates with the exit function. \n";
    std::cout << "Bye!\n";
    exit(0);
    std::cout << "This message will never be displayed\n"
              << "because the program has already terminated. \n";
}
