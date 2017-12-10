#include <iostream>
#include <string>

template <class T1, class T2, class T3>
void echoAndReverse(T1 a1, T2 a2, T3 a3)
{
    std::cout << "Original order is: "
              << a1 << " " << a2 << " " << a3 << std::endl;
    std::cout << "Reversed order is: "
              << a3 << " " << a2 << " " << a1 << std::endl;
}

int main()
{
    echoAndReverse("Computer", 'A', 18);
    echoAndReverse("One", 4, "All");

    return 0;
}
