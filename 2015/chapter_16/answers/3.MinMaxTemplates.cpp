#include <iostream>
#include <string>

template <class T>
T min(T a, T b)
{
    if (a > b)
        return b;
    else if (a < b)
        return a;
    else
        throw std::string("Equal");
}

template <class T>
T max (T a, T b)
{
    if (a > b)
        return a;
    else if (a < b)
        return b;
    else
        throw std::string("Eequal");
}

int main()
{
    double d1, d2;
    int i1, i2;
    try
    {
        std::cout << "Please enter doubles:\n";
        std::cin >> d1 >> d2;
        std::cout << "The bigger double is " << max(d1, d2) << std::endl;
        std::cout << "Please enter integers:\n";
        std::cin >> i1 >> i2;
        std::cout << "The smaller integer is " << min(i1, i2) << std::endl;
    }
    catch (std::string message)
    {
        std::cout << message << std::endl;
    }

    return 0;
}

