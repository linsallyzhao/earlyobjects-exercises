#include <iostream>

class BaseDemo
{
    public:
        BaseDemo()
        {
            std::cout << "This is the BaseDemo constructor. \n";
        }
        ~BaseDemo()
        {
            std::cout << "This is the BaseDemo desstructor. \n";
        }
};

class DeriDemo: public BaseDemo
{
    public:
        DeriDemo()
        {
            std::cout << "This is the DeriDemo constructor. \n";
        }
        ~DeriDemo()
        {
            std::cout << "This is the DeriDemo destructor. \n";
        }
};

int main()
{
    std::cout << "We will now create a DeriDemo object.\n";
    DeriDemo object;
    std::cout << "The program is now going to end. \n";

    return 0;
}
