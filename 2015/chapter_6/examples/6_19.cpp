#include <iostream>

void california();

const int BIRDS = 500;

int main()
{
    std::cout << "In main there are " << BIRDS << " birds. \n";
    california();
    return 0;
}

void california()
{
    const int BIRDS = 10000;
    std::cout << "In california there are " << BIRDS << " birds. \n";
}

