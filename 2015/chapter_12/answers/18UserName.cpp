#include <iostream>
#include <cstring>
#include <cstdlib>

int main(int argc, char** argv)
{
    extern char ** environ;
    int k = 0;
    std::cout << "Hello, ";
    while (environ[k] != 0)
    {
        char *sPtr = NULL;
        sPtr = strstr(environ[k], "USER");
        if (sPtr != NULL)
            std::cout << environ[k] + 5 << std::endl;
        k++;
    }
    return 0;
}

