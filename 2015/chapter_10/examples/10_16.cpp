#include <iostream>
#include <string>

class Person
{
    private:
        std::string name;
        int age;
    public:
        Person(std::string name1, int age1)
        {
            name = name1;
            age = age1;
        }
        int getAge()
        {
            return age;
        }
        std::string getName()
        {
            return name;
        }
};

struct Rectangle
{
    int width, height;
};

int main()
{
    Rectangle *pRect;
    Person *pPerson;

    Rectangle rect;
    pRect = &rect;
    (*pRect).height = 12;
    pRect->width = 10;
    std::cout << "Area of the first rectangle is "
              << pRect->width * pRect->height;

    pRect = new Rectangle;
    pRect->height = 6;
    pRect->width = 5;
    std::cout << "\nArea of the second rectangle is " 
              << pRect->width * pRect->height;

    pPerson = new Person("Miguel E. Gonzalez", 23);
    std::cout << "\n\nThe person's name is " << pPerson->getName();
    std::cout << "\nThe person's age is " << pPerson->getAge() << std::endl;

    return 0;
}
