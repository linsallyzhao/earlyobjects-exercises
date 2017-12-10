#include <iostream>

int main()
{
    const char *p, *q;

    p = "Hello ";
    q = "Bailey";

    std::cout << p << q << std::endl;

    std::cout << p << " is stored at " << int(p) << std::endl;
    std::cout << q << " is stored at " << int(q) << std::endl;

    std::cout << "String literal stored at " << int("literal");
    return 0;
}
