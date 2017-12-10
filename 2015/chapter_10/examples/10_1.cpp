#include <iostream>

char letter;
short number;
float amount;
double profit;
char ch;

int main()
{
    std::cout << "Address of letter is: "
              << long(&letter) << std::endl;
    std::cout << "Address of number is: "
              << long(&number) << std::endl;
    std::cout << "Address of amount is: "
              << long(&amount) << std::endl;
    std::cout << "Address of profit is: "
              << long(&profit) << std::endl;
    std::cout << "Address of ch is: "
              << long(&ch) << std::endl;
    return 0;
}
