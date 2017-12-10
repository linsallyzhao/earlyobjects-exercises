#include <iostream>
#include <string>
using namespace std;

int main(){
    
    int num;
    string roman;
    cout << "Please enter the num you want to convert." << endl;
    cin >> num;

    if (num < 1 || num > 10)
        cout << "Your num is out of range dummy." << endl;
    else {
            switch (num){
                case 1 : roman = "I";
                         break;

                case 2 : roman = "II";
                         break;

                case 3 : roman = "III";
                         break;

                case 4 : roman = "IV";
                         break;

                case 5 : roman = "V";
                         break;

                case 6 : roman = "VI";
                         break;

                case 7 : roman = "VII";
                         break;

                case 8 : roman = "VIII";
                         break;

                case 9 : roman = "IX";
                         break;

                case 10 : roman = "X";
                         break;
            }
        }
        cout << "The converted num is " << roman << endl;

        return 0;
    }
