#include <sstream>
#include <iostream>
#include <string>

std::string dollarFormat(std::string);
std::string dollarFormat(double);

int main()
{
    std::string input;
    double number;

    std::cout << "Enter a dollar amount in the form nnnnn.nn: \n";
    std::cin >> input;
    std::cout << "Enter a dollar amount in the form nnnnn.nn: \n";
    std::cin >> number;

    std::cout << "Formatted amount: " << dollarFormat(input) << std::endl;
    std::cout << "Formatted amount: " << dollarFormat(number) << std::endl;

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

std::string dollarFormat (double num)
{
    std::ostringstream strs;
    strs << num;
    std::string amount = strs.str();
    return dollarFormat(amount);
}
