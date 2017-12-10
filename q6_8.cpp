#include <iostream>
#include <iomanip>

using namespace std;

void getData(double&, double&, double&, double&, double&);
double average(double, double, double ,double, double);
double findLow (double, double, double, double, double);
double findHigh (double, double, double, double, double);

int main() {
    double score1, score2, score3, score4, score5, avg;

    getData (score1, score2, score3, score4, score5);

    avg = average (score1, score2, score3, score4, score5);

    cout << fixed << showpoint << setprecision(2);

    cout << "The final score is " << avg << endl;
    
    return 0;
}


void getData(double& num1, double& num2, double& num3, double& num4, double& num5) {
    cout << "Please enter the five scores\n";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    while (num1 < 0 || num1 > 10 || num2 < 0 || num2 > 10 
          || num3 < 0 || num3 > 10 || num4 < 0 || num4 > 10 
          || num5 < 0 || num5 > 10 ) {
          cout << "At least one of the input is illegal, try again!\n";
    
           cin >> num1 >> num2 >> num3 >> num4 >> num5;
    }
}


double average(double sco1, double sco2, double sco3, double sco4, double sco5) {
    double avg = (sco1 + sco2 + sco3 + sco4 + sco5
                 - findLow(sco1, sco2, sco3, sco4, sco5)
                 - findHigh(sco1, sco2, sco3, sco4, sco5)) / 3.0;

    return avg;
}

double findLow (double num1, double num2, double num3, double num4, double num5) {
    double low = num1;
    if (num2 < low)
        low = num2;
    if (num3 < low)
        low = num3;
    if (num4 < low)
        low = num4;
    if (num5 < low)
        low = num5;
    return low;
}

double findHigh (double num1, double num2, double num3, double num4, double num5) {
    double high = num1;
    if (num2 > high)
        high = num2;
    if (num3 > high)
        high = num3;
    if (num4 > high)
        high = num4;
    if (num5 > high)
        high = num5;
    return high;
}
    
