#include <iostream>
#include <string>

class Numbers
{
    private:
        int number;
        static std::string lessThan20[];
        static std::string tens[];
        static std::string hundred;
        static std::string thousand;
    public:
        Numbers(int n = 0)
        {
            while (n < 0 || n > 9999)
            {
                std::cout << "Invalid input\n";
            }
            number = n;
        }
        void print();
};

std::string Numbers::lessThan20[] =
    {"zero", "one", "two", "three", "four",
    "five", "six", "seven", "eight", "nine",
    "ten", "eleven", "twelve", "thirteen", "fourteen",
    "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
std::string Numbers::tens[] =
    {" ", " ", "twenty", "thirty", "forty", "fifty", "sixty",
    "seventy", "eighty", "ninety"};
std::string Numbers::hundred = "hundred";
std::string Numbers::thousand = "thousand";

void Numbers::print()
{
    if (number > 999)
    {
        std::cout << lessThan20[number / 1000] << " " << thousand << " ";
        number -= ((number / 1000) * 1000);
    }
    if (number > 99)
    {
        std::cout << lessThan20[number / 100] << " " << hundred << " ";
        number -= ((number / 100) * 100);
    }
    if (number >= 20)
    {
        std::cout << tens[number / 10] << " ";
        number -= ((number / 10) * 10);
    }
    if (number > 0)
    {
        std::cout << lessThan20[number] << std::endl;
    }
}

int main()
{
    std::cout << "Enter the number\n";
    int num;
    std::cin >> num;
    Numbers test(num);
    test.print();

    return 0;
}
