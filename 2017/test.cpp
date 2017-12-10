#include <iostream>
#include <iomanip>

using namespace std;

double profit (int NS, double salPri, double salCom, double purPri, double purCom);
void getInfo (int &, double &, double &, double &, double &);

int main() {
    int NS, num;
    double salPri, salCom, purPri, purCom, prof = 0.0;

    cout << "How many stocks did  you sell?\n";
    cin >> num;

    for (int count = 1; count <= num; count++) {
        getInfo (NS, salPri, salCom, purPri, purCom);
        prof += profit(NS, salPri, salCom, purPri, purCom);
    }

    if (profit >= 0) 
        cout << "Your total profit is " << profit << " dollars\n";
    else
        cout << "Your total lost is " << profit << " dollars\n";

    return 0;
}



double profit (int NS, double salPri, double salCom, double purPri, double purCom) {
    double pro;
    pro = ((NS * salPri) - salCom) - ((NS * purPri) + purCom);
    return pro;
}


void getInfo (int &shaNum, double &priSal, double &comSal, double &priPur, double &comPur) {
    cout << "Please enter you share numbers:\n";
    cin >> shaNum;
    cout << "Please enter your sale and purchase prices:\n";
    cin >> priSal >> priPur;
    cout << "Please enter your sale and purchase commission\n";
    cin >> comSal >> comPur;

    while (shaNum < 0 || priSal < 0 || priPur < 0 || comSal < 0 || comPur < 0) {
        cout << "At least one input is invalid, please enter again:\n";
        cout << "Please enter you share numbers:\n";
        cin >> shaNum;
        cout << "Please enter your sale and purchase prices:\n";
        cin >> priSal >> priPur;
        cout << "Please enter your sale and purchase commission\n";
        cin >> comSal >> comPur;
    }
}
        
