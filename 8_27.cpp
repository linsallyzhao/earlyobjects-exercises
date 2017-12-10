#include <iostream>
#include <vector>

using namespace std;

double avgVector(vector<int>);

int main() {
    vector<int> values;
    int numValues;
    double average;

    cout << "How manu values do you wish to average? ";
    cin >> numValues;

    for (int index = 0; index < numValues; index++) {
        int tempNum;
        cout << "Enter value #" << (index + 1) << " :";
        cin >> tempNum;
        values.push_back(tempNum);
    }
    
    average = avgVector(values);
    cout << "Average: " << average << endl;
    return 0;
}

double avgVector(vector<int> vect) {
    int total = 0;
    double avg = 0.0;

    if (vect.empty()) 
        cout << "No values to average.\n";
    else {
        for (int count = 0; count < vect.size(); count++) 
            total += vect[count];
        avg = static_cast<double> (total) / vect.size();
    }

    return avg;

}

