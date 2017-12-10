#include <iostream>
using namespace std;

int main(){
    const int F_ETHYL_ALCOHOL = -173,
              F_MERCURY = -38,
              F_OXYGEN = -362,
              F_WATER = 32,
              B_ETHYL_ALCOHOL = 172,
              B_MERCURY = 676,
              B_OXYGEN = -306,
              B_WATER = 212;

    int temp, fZone, bZone;

    cout << "Please enter a temperature\n";
    cin >> temp;

    if (temp <= -362) 
        fZone = 1;
    else if (temp <= -173)
        fZone = 2;
    else if (temp <= -38)
        fZone = 3;
    else if (temp <= 32)
        fZone = 4;
    else 
        fZone = 5;


    switch (fZone){
        case 1: cout << "Oxygen will freeze\n";
        case 2: cout << "Ethyl alcohol will freeze\n";
        case 3: cout << "Mercury will freeze\n";
        case 4: cout << "Water will freeze\n";
                break;
        case 5: cout << "Nothing will freeze\n";
    }


    if (temp >= 676) 
        bZone = 1;
    else if (temp >= 212)
        bZone = 2;
    else if (temp >= 172)
        bZone = 3;
    else if (temp >= -306)
        bZone = 4;
    else 
        bZone = 5;


    switch (bZone){
        case 1: cout << "Mercury will boil\n";
        case 2: cout << "Water alcohol will boil\n";
        case 3: cout << "Ethyl alcohol will boil\n";
        case 4: cout << "Oxygen will boil\n";
                break;
        case 5: cout << "Nothing will boil\n";
    }

    return 0;
}
