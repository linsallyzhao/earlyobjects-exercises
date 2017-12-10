#include <iostream>
#include <string>

std::string dollarFormat(std::string);

int main()
{
    std::string input;

    std::cout << "Enter a dollar amount in the form nnnnn.nn: \n";
    std::cin >> input;

    std::cout << "Formatted amount: " << dollarFormat(input) << std::endl;

    return 0;
}

std::string dollarFormat(std::string original)
{
    std::string formatted = original;
    int dp = formatted.find('.');
    int pos = dp;
    while (pos > 3)
    {
        pos -= 3;
        formatted.insert(pos, ",");
    }
    formatted.insert(0, "$");
    return formatted;
}
