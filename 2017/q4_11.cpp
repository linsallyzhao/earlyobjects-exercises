#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int choice;
    double para1, para2;
    const double PI = 3.14159;
    double area = 0.0;

    cout << "What shape?\n";
    cout << "1. Circle\n";
    cout << "2. Rectangle\n";
    cout << "3. Triangle\n";
    cin >> choice;

    switch (choice){
        case 1: cout << "What is the radius?\n";
                cin >> para1;
                area = PI * pow(para1, 2);
                cout << "The area is " << area << endl;
                break;

        case 2: cout << "What is the length and width?\n";
                cin >> para1 >> para2;
                area = para1 * para2;
                cout << "The area is " << area << endl;
                break;
        case 3: cout << "What is the base and height?\n";
                cin >> para1 >> para2;
                area = 0.5 * para1 * para2;
                cout << "The area is " << area << endl;
                break;
        case 4: break;
        default: cout << "Invalid input! LOL bye\n";
    }


    return 0;
}

