#include <iostream>
#include <string>

std::string replaceSubstring(std::string, std::string, std::string);

int main()
{
    std::string string1, string2, string3;

    std::cout << "Please enter the sentence\n";
    std::getline(std::cin, string1);
    std::cout << "Please enter the word you want to replace\n";
    std::getline(std::cin, string2);
    std::cout << "Please enter the word you want to change to\n";
    std::getline(std::cin, string3);
    std::string result = replaceSubstring(string1, string2, string3);

    std::cout << result << std::endl;

    return 0;
}

std::string replaceSubstring(std::string a, std::string b, std::string c)
{
    a.replace(a.find(b, 0), b.length(), c);
    return a;
}



