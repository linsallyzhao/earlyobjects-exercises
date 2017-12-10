#include <iostream>
#include <string>

class BCheckString : public std::string
{
    public:
        BCheckString (std::string word)
            : std::string(word)
        {
        }
        class BoundsException
        {};
        char operator[](int k)
        {
            if (k < 0 || k > this->length())
            {
                throw BoundsException();
            }
            else
                return std::string((*this))[k]; 
        }
};

int main()
{
    std::string temp;
    std::cout << "Please input a string:\n";
    std::getline(std::cin, temp);
    BCheckString test(temp);
    std::cout << "Test constructor: " << test << std::endl;
    std::cout << "Please enter a index:\n";
    int index;
    std::cin >> index;
    try
    {
        std::cout << test[index] << std::endl;
    }
    catch (BCheckString::BoundsException)
    {
        std::cout << "Invalid index\n";
    }

    return 0;
}
