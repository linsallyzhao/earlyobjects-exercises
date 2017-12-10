#include <iostream>
using namespace std;

    void sortArray(int *movies, int numStu);
    void displayArray(int *movies, int numStu);
    double average(int *movies, int numStu);
    double getmidian(int *movies, int numStu);
    int getmode(int *movies, int numStu);


int main(){ 
    int *movies;
    int numStu;


    cout << "How many student do you want to ask?\n";
    cin >> numStu;

    movies = new int [numStu];

    cout << "Please enter the number of movies for each student: \n";
    for (int index = 0; index < numStu; index++) {
        cout << "Student number " << (index + 1) << ": ";
        cin >> movies[index];

    }

    displayArray(movies, numStu);
    sortArray(movies, numStu);
    displayArray(movies, numStu);
    double avg = average(movies, numStu);
    double mid = getmidian(movies, numStu);
    int mode = getmode(movies, numStu);
    
    delete [] movies;
    movies = 0;

    cout << "The average is " << avg << endl;
    cout << "The midian is " << mid << endl;
    cout << "The mode is " << mode << endl;


    return 0;
}

    void sortArray(int *movies, int numStu) {
        int min, minIn;
        for (int start = 0; start < (numStu - 1); start++) {
            min = movies[start];
            minIn = start;
            for (int index = (start + 1); index < numStu; index++) {
                if (movies[index] < min) {
                    min = movies[index];
                    minIn = index;
                }
            }

            movies[minIn] = movies[start];
            movies[start] = min;
        }
    }

    void displayArray(int *movies, int numStu) {
        for (int index = 0; index < numStu; index++) {
            cout << movies[index] << " " ;
        }
        cout << endl << endl;
    }

    double average(int *movies, int numStu) {
        double total = 0.0;
        for (int index = 0; index < numStu; index++) {
            total += movies[index];
        }

        return (total / numStu);
    }

    double getmidian(int *movies, int numStu) {
        if (numStu % 2 == 1) 
            return movies[(numStu - 1) / 2];
        else {
            double midian;
            midian = (movies[(numStu / 2) - 1] + movies[numStu / 2]) / 2.0;
            return midian;
        }
    }

    int getmode(int *movies, int numStu) {
        int *unique, *count;

        unique = new int [numStu];
        count = new int [numStu];
        unique[0] = movies[0];
        count[0] = 1;
        int countUnique = 1;
        bool newUnique = true;
        for (int index = 1; index < numStu; index++) {
            for (int i = 0; i < countUnique; i++) {
                if (movies[index] == unique[i]) {
                    count[i]++;
                    newUnique = false;
                }
            }

            if (newUnique) {
            cout << "New unique number " << movies[index] << endl;
                unique[countUnique] = movies[index];
                count[countUnique] = 1;
                countUnique++;
            }

            newUnique = true;
        }

       int highcount = count[0];
       int highCountIndex = 0;

       for (int num = 0; num < countUnique; num++) {
            if(count[num] > highcount) {
                highcount = count[num];
                highCountIndex = num;
            }
        }

        int mode = unique[highCountIndex];

        delete [] unique;
        unique = 0;
        delete [] count;
        count = 0;

        return mode;

    }

