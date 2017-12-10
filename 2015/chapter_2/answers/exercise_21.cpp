#include <iostream>
using namespace std;

int main()
{
    double weeks;
    int days;

    cout << "How many weeks left until Christmas?\n";
    cin >> weeks;    

    days = weeks * 7;
    cout << "Oh, only " << days << " days left until Christmas.";
    cout << "\nI should eat some chooooocolate!\n";

    return 0;
}
