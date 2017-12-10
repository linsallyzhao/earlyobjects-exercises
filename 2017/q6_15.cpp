#include <iostream>
#include <iomanip>

using namespace std;

void getInfo (int &start, int &birth, int &death, int &in, int &out, int &years);
double endPopu (int start, int birth, int death, int in, int out);

int main() {
    int start, birth, death, in, out, years;
    double end;

    getInfo (start, birth, death, in, out, years);
    for (int count = 1; count <= years; count++) {

        end = endPopu (start, birth, death, in, out);
        cout << "At the end of year " << count << " the population will be "
             << end << endl;
        start = static_cast<int>(end);
    }

    return 0;
}


void getInfo (int &start, int &birth, int &death, int &in, int &out, int &years) {
    cout << "Please input start population, birth rate, death rate, typical "
         << "move in and move out number:\n";
    cin >> start >> birth >> death >> in >> out;
    cout << "How many years do you want to know?\n";
    cin >> years;

    while (start < 0 || birth < 0 || death < 0 || in < 0 || out < 0 || years < 0) {
        cout << "At least one input is invalid. Try again\n";
        cout << "Please input start population, birth rate, death rate, typical "
             << "move in and move out number:\n";
        cin >> start >> birth >> death >> in >> out;
        cout << "How many years do you want to know?\n";
        cin >> years;
    }
}

double endPopu (int start, int birth, int death, int in, int out) {
    double endPopu;
    endPopu = start * ( 1 + birth / 1000.0) * (1 - death / 1000.0);
    return endPopu;
}
