#include <iostream>

class Demo
{
    public :
        Demo();
        ~Demo();

};

Demo::Demo()
{
    std::cout << "An object has just been defined, so the constructor \n"
              << "is running.\n";

}

Demo::~Demo()
{
    std::cout << "Now the destructor is running.\n";
}

int main()
{

    Demo demoObj;

    std::cout << "The object now exists, but is about to be destroyed.\n";

    return 0;
}
