#include <iostream>
#include <string>

class Pstring : public std::string
{
    private:
        std::string target;
    public:
        Pstring(std::string s)
        {
            target = std::string(s);
        }
        bool isPalindrome()
        {
            std::string test = target;
            for (int index = 0; index < target.length(); index++)
            {
                test[target.length() - index - 1] = target[index];
            }
            return test == target;
        }
};

int main()
{
    std::string test;
    std::cout << "Please enter the word you want to test\n";
    std::cin >> test;
    Pstring palin(test);
    std::cout << palin.isPalindrome() << std::endl;

    return 0;
}

