#include <iostream>
#include <string>

int frequency(char ch, std::string inputString, int pos);

int main()
{
    std::string inputString = "abcddddef";

    std::cout << "The letter d appears "
              << frequency('d', inputString, 0) << " times.\n";
    return 0;
}

int frequency(char ch, std::string inputString, int position)
{
    if (position == inputString.length())
        return 0;
    if (inputString[position] == ch)
        return 1 + frequency(ch, inputString, position + 1);
    else
        return frequency(ch, inputString, position + 1);
}

