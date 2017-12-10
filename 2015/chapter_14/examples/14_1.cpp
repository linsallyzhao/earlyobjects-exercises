#include <iostream>

void message(int);

int main()
{
    message(3);
    return 0;
}

void message(int times)
{
    if (times > 0)
    {
        std::cout << "Message " << times << "\n";
        message(times - 1);
    }
}

