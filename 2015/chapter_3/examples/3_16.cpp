#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    int intValue = 3928;
    double doubleValue = 91.5;
    std::string stringValue = "Jill Valentine";

    std::cout << "(" << std::setw(5) << intValue << ")" << std::endl;
    std::cout << "(" << std::setw(8) << doubleValue << ")" << std::endl;
    std::cout << "(" << std::setw(16) << stringValue << ")" << std::endl;

    return 0;
}
