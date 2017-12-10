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

void magnify(Rectangle *pRect, int mfactor);
int lengthOfName(Person *p);
void output(Rectangle *pRect);

int main()
{
    Rectangle rect;
    rect.width = 4;
    rect.height = 2;
    std::cout << "Initial size of rectangle is ";
    output(&rect);
    magnify(&rect, 3);
    std::cout << "Size of Rectangle after magnification is ";
    output(&rect);

    Person *pPerson = new Person("Susan Wu", 32);
    std::cout << "\n\nThe person's name is " << pPerson->getName();
    std::cout << "\nThe person's age is " << pPerson->getAge() << std::endl;

    return 0;
}

void output(Rectangle *pRect)
{
    std::cout << "width: " << pRect->width << " height: "
              << pRect->height << std::endl;
}

int lengthOfName(Person *p)
{
    std::string name = p->getName();
    return name.length();
}

void magnify(Rectangle *pRect, int factor)
{
    pRect->width = pRect->width * factor;
    pRect->height = pRect->height * factor;
}
