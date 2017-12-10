#include <iostream>
#include <string>

void moveDisks(int, std::string, std::string, std::string);

int main()
{
    moveDisks(3, "peg 1", "peg 3", "peg 2");
    std::cout << "All the disks have been moved!";

    return 0;
}

void moveDisks(int n, std::string source, std::string dest,
                std::string temp)
{
    if (n > 0)
    {
        moveDisks(n - 1, source, temp, dest);
        std::cout << "Move a disk from " << source << " to "
                  << dest << std::endl;
        moveDisks(n - 1, temp, dest, source);
    }
}

