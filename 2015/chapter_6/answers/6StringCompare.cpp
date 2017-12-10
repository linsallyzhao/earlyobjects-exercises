#include <iostream>
#include <string>

std::string upperCaseIt(std::string s);
bool sameString(std::string s1, std::string s2);

int main()
{
    std::string name1, name2;

    std::cout << "Please entee two names:\n";
    std::cin >> name1 >> name2;
    if (sameString(name1, name2))
        std::cout << "The two names are the same.\n";
    else
        std::cout << "They are different names.\n";
    return 0;
}
bool sameString(std::string s1, std::string s2)
{
    bool same;
    std::string left, right;
    left = upperCaseIt(s1);
    right = upperCaseIt(s2);
    (left == right) ? (same = 1) : (same = 0);
    return same;
}
std::string upperCaseIt(std::string s)
{
    std::string result, piece;
    for (std::string::size_type i = 0; i < s.length(); i++)
    {
        piece = std::toupper(s[i]);
        std::cout << piece;
        result.append(piece);
    }
    std::cout << std::endl;
    return result;
}

