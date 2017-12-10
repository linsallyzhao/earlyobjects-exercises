#include <iostream>
using namespace std;

int main()
{
    double miles, gallons, milesPerGallon;

    cout << "How many miles did your vehicle traveled? \n";
    cin >> miles;

    cout << "How many gallons gas did it use? \n";
    cin >> gallons;

    milesPerGallon = miles / gallons;
    cout << "Your vehicle travles " << milesPerGallon
         << " miles for each gallon gas. \n"
         << "You should really walk to work :( \n";
    
    return 0;
}
