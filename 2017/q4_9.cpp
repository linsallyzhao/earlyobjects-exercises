#include <iostream>
using namespace std;

int main(){
    const double PRICE = 99.0;
    int purchase;
    double total;

    cout << "How many do you need?" << endl;
    cin >> purchase;
    if (purchase < 0){
        cout << "Purchase cannot be negetive! Try again!\n";
    }
    else{

        if (purchase < 10 ){
            cout << "Not discount for you!";
            total = purchase * PRICE;
            cout << "Your total cost is " << total << " dollars. \n";
        }
        else if (purchase < 20){
            cout << "You got a 20% " << "discount.\n Your total cost is ";
            total = purchase * PRICE * .8;
            cout << total << " dollars.\n";
        }
        else if (purchase < 50){
            cout << "You got a 30% " << "discount.\n Your total cost is ";
            total = purchase * PRICE * .7;
            cout << total << " dollars.\n";
        }
        else if (purchase < 100){
            total = purchase * PRICE * .6;
            cout << "You get a 40% " << "discount.\n Your toatl cost is "
                 << total << " dollars.\n";
        }
        else if (purchase >= 100){
            total = purchase * PRICE * 0.5;
            cout << "Thank you for your purchase. You got a half price!\n"
                 << "Your total cost will be " << total << " dollars.\n";
        }
    }
    return 0;
}

