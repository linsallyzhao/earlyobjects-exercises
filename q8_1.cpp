#include <iostream>
using namespace std;

void getScores(int scores[], int size);
int countPerfect(const int scores[], int size);

int main() {
    const int NUM_SC = 20;
    int data[NUM_SC];
    getScores(data, NUM_SC);
    cout << "There are " << countPerfect(data, NUM_SC) << " perfect scores.\n";

    return 0;
}

void getScores(int scores[], int size) {
    int tempSc;

    for (int index = 0; index < size; index++) {
        cout << "Enter score #" << (index + 1) << " :";
        cin >> tempSc;
        while (tempSc > 100 || tempSc < 0) {
            cout << "This is invalid! Please enter again: ";
            cin >> tempSc;
        }
        scores[index] = tempSc;

    }

}


int countPerfect(const int scores[], int size) {
    int count = 0;

    for (int index = 0; index < size; index++) {
        if (scores[index] == 100) 
            count++;
    }
    return count;
}
