#include <iostream>

void message(int);

int main()
{
    message(3);
    return 0;
}

void message(int times)
{
    std::cout << "Message " << times << ".\n";
    if (times > 0)
    {
        message(times - 1);
    }
    std::cout << "Message " << times << " is returnint.\n";
}

