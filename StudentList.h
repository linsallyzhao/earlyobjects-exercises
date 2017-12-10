struct Student {
    std::string name;
    int score;
};

#ifndef STUDENTLIST_H
#define STUDENTLISHT_H

class StudentList {
private:
    int numStu;
    Student *pStu;
    double total = 0.0;
    double average;
    void selectSort();

public:
    StudentList(std::string *names, int *scores, int size) {
        pStu = new Student [size];
        numStu = size;
        for (int index = 0; index < size; index++) {
            (pStu + index)->name = names[index];
            (pStu + index)->score = scores[index];
        }
        selectSort();
    }

    ~StudentList() {
        delete [] pStu;
        pStu = 0;
    }

    double getAverage() {
        for (int index = 0; index < numStu; index++) {
            total += pStu[index].score;
        }

        average = total / numStu;

        return average;
    }

    void display() {
        for (int index = 0; index < numStu; index++) {
            std::cout << "Score for " << (pStu + index)->name << " is " 
                 << (pStu + index)->score << std::endl;
        }
    }
};

void StudentList::selectSort() {


    int minIn;
    Student min;
    for (int start = 0; start < ( numStu -1); start++) {
        min = pStu[start];
        minIn = start;
        for (int index = (start + 1); index < numStu; index++) {
            if(pStu[index].score < min.score) {
                min = pStu[index];
                minIn = index;
            }
        }
        pStu[minIn] = pStu[start];
        pStu[start] = min;
    }

}

#endif
