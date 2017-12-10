#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const double CAL_PER_GRAM_FAT = 9.0;
    double calories, fatGram, calFromFat, percentage;

    cout << "Please enter the fat gram and the total calories:\n";
    cin >> fatGram >> calories;

    calFromFat = fatGram * CAL_PER_GRAM_FAT;

    if (fatGram >= 0 && calories > 0 && calFromFat <= calories){
    
        percentage = calFromFat / calories * 100;
        cout << "Percentage of calories from fat is " 
             << fixed << showpoint << setprecision(2)
             << percentage << "%.\n";

        if (percentage < 0.3)
            cout << "This food is low in fat\n";
    }
    else
        cout << "Invalid input dickhead!" << endl;

    return 0;
}
