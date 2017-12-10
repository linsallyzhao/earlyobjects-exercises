#include <iostream>
#include "mystring.h"

int main()
{
    MyString name1("Billy"), name2("Sue");
    MyString name3("Joe");
    MyString string1("ABC"), string2("DEF");

    std::cout << "name1: " << name1.getValue() << std::endl;
    std::cout << "name2: " << name2.getValue() << std::endl;
    std::cout << "name3: " << name3.getValue() << std::endl;
    std::cout << "string1: " << string1.getValue() << std::endl;
    std::cout << "string2: " << string2.getValue() << std::endl;

    if (name1 == name1)
        std::cout << "name1 is equal to name2. \n";
    else
        std::cout << "name1 is not equal to name2. \n";
    if (name3 == "Joe")
        std::cout << "name3 is equal to Joe.\n";
    else
        std::cout << "name3 is not equal to Joe. \n";
    if (string1 > string2)
        std::cout << "string1 is greater than string2. \n";
    else
        std::cout << "string1 is not greater than string2. \n";
    if (string1 < string2)
        std::cout << "string1 is less than string2. \n";
    else
        std::cout << "string1 is not less than string2. \n";
    if (string1 >= string2)
        std::cout << "string1 is greater than or equal to "
                  << "string2.\n";
    else
        std::cout << "string1 is not greater than or equal to "
                  << "string2. \n";
    if (string1 <= string2)
        std::cout << "string1 is less than or equal to "
                  << "string2.\n";
    else
        std::cout << "string1 is not less than or equal to "
                  << "string2. \n";
    if (string1 >= "ABC")
        std::cout << "string1 is greater than or equal to "
                  << "ABC. \n";
    else
        std::cout << "string1 is not greater than or equal to "
                  << "ABC. \n";
    if (string2 <= "DEF")
        std::cout << "string2 is less than or equal to "
                  << "DEF. \n";
    else
        std::cout << "string2 is not less than or equal to "
                  << "DEF. \n";

    return 0;
}





