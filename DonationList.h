#ifndef DONATIONLIST_H
#define DONATIONLIST_H

class DonationList {
private:
    int numDonations;
    double *donations;
    double **arrPtr;
    void selectSort();
public:
    DonationList(int num, double gifts[]);
    ~DonationList();
    void show();
    void showSorted();
};

DonationList::DonationList(int num, double gifts[]) {
    numDonations = num;

    donations = new double[numDonations];
    arrPtr = new double* [numDonations];
    for (int index = 0; index < numDonations; index++) {
        donations[index] = gifts[index];
        arrPtr[index] =  &(donations[index]);
    }
    selectSort();

}

DonationList::~DonationList() {
    delete [] donations;
    donations = 0;
    delete [] arrPtr;
    arrPtr = 0;
}


void DonationList::selectSort() {
    double *min;
    int minIn;
    for (int start = 0; start < (numDonations -1); start++) {
        min = arrPtr[start];
        minIn = start;
        for (int index = start + 1; index < numDonations; index++) {
            if (*arrPtr[index] < *min) {
                min = arrPtr[index];
                minIn = index;
            }
        }
        arrPtr[minIn] = arrPtr[start];
        arrPtr[start] = min;
    }
}

void DonationList::show() {
    for (int index = 0; index < numDonations; index++) {
        std::cout << donations[index] << " ";
    }

    std::cout << std::endl;
}

void DonationList::showSorted() {
    for (int index = 0; index < numDonations; index++) {

        std::cout << *(arrPtr[index]) << " ";
    }

    std::cout << std::endl;
}

#endif
