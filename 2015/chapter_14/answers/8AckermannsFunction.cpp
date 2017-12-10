#include <iostream>

int ackermann(int, int);

int main()
{
    std::cout << "0, 0 :" << ackermann(0, 0) << std::endl;
    std::cout << "0, 1 :" << ackermann(0, 1) << std::endl;
    std::cout << "1, 1 :" << ackermann(1, 1) << std::endl;
    std::cout << "1, 2 :" << ackermann(1, 2) << std::endl;
    std::cout << "1, 3 :" << ackermann(1, 3) << std::endl;
    std::cout << "2, 2 :" << ackermann(2, 2) << std::endl;
    std::cout << "3, 2 :" << ackermann(3, 2) << std::endl;

    return 0;
}

int ackermann(int m, int n)
{
    if (m == 0)
        return n + 1;
    if (n == 0 && m > 0)
        return ackermann(m-1, 1);
    if (m > 0 && n > 0)
        return ackermann(m-1, ackermann(m, n-1));
}


