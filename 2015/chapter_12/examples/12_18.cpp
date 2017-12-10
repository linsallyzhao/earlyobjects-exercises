#include <iostream>

int main(int argc, char** argv)
{
    extern char ** environ;

    int k = 0;
    while (environ[k] != 0)
    {
        std::cout << environ[k] << std::endl;

        k++;
    }

    return 0;
}
