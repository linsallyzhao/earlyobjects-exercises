#include <iostream>
#include "mystring.h"

int main()
{
    MyString object1("This"), object2("is");
    MyString object3("a test.");
    MyString object4 = object1;
    MyString object5("is only a test.");
    char string1[] = "a test. ";

    std::cout << "Object1: " << object1 << std::endl;
    std::cout << "Object2: " << object2 << std::endl;
    std::cout << "Object3: " << object3 << std::endl;
    std::cout << "Object4: " << object4 << std::endl;
    std::cout << "Object5: " << object5 << std::endl;
    std::cout << "String1: " << string1 << std::endl;
    object1 += " ";
    object1 += object2;
    object1 += " ";
    object1 += object3;
    object1 += " ";
    object1 += object4;
    object1 += " ";
    object1 += object5;
    std::cout << "object1: " << object1 << std::endl;

    return 0;
}
