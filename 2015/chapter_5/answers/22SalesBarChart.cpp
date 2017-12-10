#include <iostream>

int main()
{
    int sale1, sale2, sale3, max, line;

    std::cout << "Please enter sales of three stores, rounded to nearest $100. \n";
    std::cin >> sale1 >> sale2 >> sale3;

    while ((sale1 % 100 != 0) || (sale2 % 100 != 0) || (sale3 % 100 != 0))
    {
        std::cout << "At lease one of your sales is not rounded to $100.\n"
                  << "Wanna try again?\n";
        std::cin >> sale1 >> sale2 >> sale3;
    }
    max = sale1;
    if (sale2 > max)
        max = sale2;
    if (sale3 > max)
        max = sale3;
    line = max / 100;

    std::cout << "Lengend: * $100\n";
    std::cout << " Store1  Store2  Store3\n";
    for (int count = 1; count <= line; count++)
    {
        if (sale1 > 0)
            std::cout << "   *    ";
        if (sale2 > 0)
            std::cout << "   *   ";
        if (sale3 > 0)
            std::cout << "   *   ";
        sale1 -= 100;
        sale2 -= 100;
        sale3 -= 100;
        std::cout << std::endl;
    }
    return 0;
}
