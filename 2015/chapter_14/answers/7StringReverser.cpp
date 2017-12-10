#include <iostream>
#include <string>
#include <sstream>

void reverse(std::string);

int main()
{
    std::string input;
    std::cout << "Please enter a string:\n";
    std::getline(std::cin, input);
    reverse(input);
    return 0;
}

void reverse(std::string in)
{
    char out;
    int leng = in.length();
    if (leng > 0)
    {
        out = in[leng - 1];
        std::cout << out;
        char next[leng];
        for (int index = 0; index < leng - 1; index++)
            next[index] = in[index];
        std::string newString(next, leng-1);
        reverse(newString);
    }
}


