#include <iostream>

int main()
{
    int num = 4;

    std::cout << num << "   ";
    std::cout << num++ << "    ";
    std::cout << num << "   ";
    std::cout << ++num << "\n\n";

    std::cout << num << "   ";
    std::cout << num-- << "    ";
    std::cout << num << "   ";
    std::cout << --num << "\n\n";

    return 0;
}
