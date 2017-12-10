#include <iostream>
#include <string>

int main()
{
    std::string one = "   *   ",
                three = "  ***  ",
                five = " ***** ",
                seven = "*******";

    std::cout << one << std::endl << three << std::endl 
              << five << std::endl << seven << std::endl 
              << five << std::endl << three << std::endl
              << one << std::endl;

    return 0;

}



