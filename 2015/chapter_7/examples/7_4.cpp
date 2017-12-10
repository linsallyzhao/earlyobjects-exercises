#include <iostream>

class Demo
{
    public :
        Demo()
        {
            std::cout << "Now the constructor is running. \n";
        }
};

int main()
{
    std::cout << "This is displayed before the object is created.\n";
    Demo demoObj, demoObj1;

    std::cout << "This is displayed after the object is created.\n";

    return 0;
}
