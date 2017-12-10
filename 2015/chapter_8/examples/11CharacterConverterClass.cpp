#include <iostream>
#include <string>

class CharConverter
{
    private:
        std::string target;

    public:
        CharConverter(std::string a = "")
        {
            target = a;
        }
        std::string uppercase();
        std::string properWords();

};
std::string CharConverter::uppercase()
{
    std::string newstring = target;
    for (int index = 0; index < target.length(); index++)
    {
        newstring[index] = toupper(target[index]);
    }
    return newstring;
}

std::string CharConverter::properWords()
{
    std::string converted = target;
    converted[0] = toupper(target[0]);
    for (int index = 1; index < target.length();  index++)
    {
        if (target[index] == ' ')
        {
            converted[index + 1] = toupper(target[index + 1]);
        }
    }
    return converted;
}

int main()
{
    std::string toConvert;
    std::cout << "Please enter the sentence you want to convert: \n";
    std::getline(std::cin, toConvert);
    while (toConvert != "QUIT")
    {
        CharConverter test(toConvert);
        std::cout << "Uppercase: \n";
        std::cout << test.uppercase() << std::endl;
        std::cout << "Proper words:\n";
        std::cout << test.properWords() << std::endl;

        std::cout << "Next sentence\n";
        std::getline(std::cin, toConvert);
    }
    return 0;
}
