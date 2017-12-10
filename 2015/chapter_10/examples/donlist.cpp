#include <iostream>
#include "donlist.h"

DonationList::DonationList(int num, double gifts[])
{
    numDonations = num;
    if (num > 0)
    {
        donations = new double [num];
        arrPtr = new double *[num];

        for (int count = 0; count < numDonations; count++)
        {
            donations[count] = gifts[count];
            arrPtr[count] = &donations[count];
        }
        selectSort();
    }
}

DonationList::~DonationList()
{
    if (numDonations > 0)
    {
        delete [] donations;
        donations = 0;
        delete [] arrPtr;
        arrPtr = 0;
    }
}

void DonationList::selectSort()
{
    int minIndex;
    double *minElem;
    for (int scan = 0; scan < (numDonations - 1); scan++)
    {
        minIndex = scan;
        minElem = arrPtr[scan];
        for (int index = scan + 1; index < numDonations; index++)
        {
            if (*(arrPtr[index]) < *minElem)
            {
                minElem = arrPtr[index];
                minIndex = index;
            }
        }
        arrPtr[minIndex] = arrPtr[scan];
        arrPtr[scan] = minElem;
    }
}

void DonationList::show()
{
    for (int count = 0; count < numDonations; count++)
        std::cout << donations[count] << "  ";
    std::cout << std::endl;
}

void DonationList::showSorted()
{
    for (int count = 0; count < numDonations; count++)
    {
        std::cout << *(arrPtr[count]) << "  ";
    }
    std::cout << std::endl;
}


