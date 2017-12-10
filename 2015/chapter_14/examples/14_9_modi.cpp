#include <iostream>
#include <string>

int moveDisks(int, int, std::string, std::string, std::string);

int main()
{
    int count = 0;
    int num;
    std::cout << "Enter the number of disks:\n";
    std::cin >> num;
    count = moveDisks(count, num, "peg 1", "peg 3", "peg 2");
    std::cout << "All the disks have been moved!" << std::endl;
    std::cout << num << " disks cost " << count << " steps.\n";

    return 0;
}

int moveDisks(int c, int n, std::string source, std::string dest,
                std::string temp)
{
    if (n > 0)
    {
        c = moveDisks(c, n - 1, source, temp, dest);
        c++;
        c = moveDisks(c, n - 1, temp, dest, source);
    }
    return c;
}

