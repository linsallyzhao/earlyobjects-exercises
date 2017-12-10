#include <iostream>

int main()
{
    const int PRICE = 99;
    int num;
    double cost;

    std::cout << "How many do you wanna buy? \n";
    std::cin >> num;

    if (num < 0)
        std::cout << "We don't sell that. \n";
    else if (num < 10)
        std::cout << "No discout for you. \n";
    else if (num < 20)
    {
        cost = PRICE * 0.8 * num;
        std::cout << "Your cost will be " << cost << " dollars. \n";
    }
    else if (num < 50)
    {
        cost = PRICE * 0.7 * num;
        std::cout << "Your cost will be " << cost << " dollars. \n";
    }
    else if (num < 100)
    {
        cost = PRICE * 0.6 * num;
        std::cout << "Your cost will be " << cost << " dollars. \n";
    }
    else
    {
        cost = PRICE * 0.5 * num;
        std::cout << "Your cost will be " << cost << " dollars. \n";
    }

    return 0;
}
