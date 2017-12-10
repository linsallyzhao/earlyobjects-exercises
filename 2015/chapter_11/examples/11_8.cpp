#include <iostream>
#include <iomanip>
#include "NumberArray2.h"

int main()
{
    NumberArray first(3, 10.5);

    NumberArray second = first;

    std::cout << std::setprecision(2) << std::fixed << std::showpoint;
    std::cout << "Value stored in first object is ";
    first.print();
    std::cout << "\nValue stored in second object is ";
    second.print();
    std::cout << std::endl << "Only the value in second object " 
              << "will be changed. " << std::endl;

    second.setValue(20.5);
    std::cout << "Value stored in first object is ";
    first.print();
    std::cout << std::endl << "Value stored in second object is ";
    second.print();

    return 0;
}
