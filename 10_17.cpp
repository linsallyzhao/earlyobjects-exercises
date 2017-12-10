#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;
public:
    Person(string name1, int age1) {
        name = name1;
        age = age1;
    }

    int getAge() const {return age;}
    string getName() const {return name;}

};

struct Rectangle {  
    int width, height;
};

void magnify (Rectangle *pRect, int mfactor);
int lengthOfName(Person *pPer);
void output(Rectangle *pRect);

int main() {
    Rectangle rect;
    rect.width = 4;
    rect.height = 2;

    cout << "Initial size of the rectangle is ";
    output(&rect);
    magnify(&rect, 3);
    cout << "Size of Rectangle after magnification is ";
    output(&rect);

    Person *pPerson = new Person("Susan Wu", 32);
    cout << "The name " << pPerson->getName() << " has lenght " 
         << lengthOfName(pPerson) << endl;

    return 0;
}


void magnify (Rectangle *pRect, int mfactor) {
    pRect->width *= mfactor;
    pRect->height *= mfactor;
}
int lengthOfName(Person *pPer){
    string name = pPer->getName();
    return name.length();
}
void output(Rectangle *pRect) {
    cout << "Width " << pRect->width << endl << "Height " << pRect->height << endl;
}
