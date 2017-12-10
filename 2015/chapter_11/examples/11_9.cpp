#include <iostream>
#include <iomanip>
#include "overload.h"

int main()
{
    NumberArray first(3, 10.5);
    NumberArray second(5, 20.5);

    std::cout << std::setprecision(2) << std::fixed << std::showpoint;
    std::cout << "Value stored in first object is ";
    first.print();
    std::cout << "\nValue stored in second object is ";
    second.print();
    std::cout << std::endl << "Now we assign the second object " 
              << "to the first. " << std::endl;
    first = second;

    std::cout << "Value stored in first object is ";
    first.print();
    std::cout << std::endl << "Value stored in second object is ";
    second.print();

    std::cout << "\nAnd you can still change one object without effect the other\n";

    second.setValue(7.5);
    std::cout << "Value stored in first object is ";
    first.print();
    std::cout << std::endl << "Value stored in second object is ";
    second.print();


    return 0;
}
