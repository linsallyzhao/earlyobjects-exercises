#include "InvBin.h"

#ifndef BINMANAGER_H
#define BINMANAGER_H

class BinManager {
    private:
        InvBin bin[30];
        int numBins;
        int searchDescription(std::string key);

    public:
        BinManager() {  
            numBins = 0;
        }

        BinManager(int size, std::string d[], int q[]) {
            for (int index = 0; index < size; index++) {
                bin[index].setDescription(d[index]);
                bin[index].setQty(q[index]);

            }
        }

        std::string getDescription(int index) const {
            return bin[index].getDescription();
        }

        int getQuantity (int index) const {
            return bin[index].getQty();
        }

        int getQuantiry (std::string des) {
            int pos = searchDescription(des);
            if (pos == -1) 
                return 0;
            else
                return bin[pos].getQty();
        }

        bool addParts(int binIndex, int q) {
            bool add = true;
            if (q < 1) {
                add = false;
            } else {
                int currentQ = bin[binIndex].getQty();
                bin[binIndex].setQty(currentQ + q);
            }

            return add;
        }

        bool addParts(std::string des, int q) {
            int pos = searchDescription(des);
            bool add;
            if (pos == -1 || q < 1)
                add = false;
            else {
                int currentQ = bin[pos].getQty();
                bin[pos].setQty(currentQ + q);
            }

            return add;
        }
            

        bool removeParts (int binIndex, int q) {
            bool remove = true;
            if (q > bin[binIndex].getQty() ) {
                remove = false;
            } else {
                int currentQ = bin[binIndex].getQty();
                bin[binIndex].setQty(currentQ - q);
            }

            return remove;
        }

        bool removeParts(std::string des, int q) {
            int pos = searchDescription(des);
            bool remove;
            if (pos == -1)
                remove = false;
            else if (q > bin[pos].getQty())
                remove = false;
            else {
                int currentQ = bin[pos].getQty();
                bin[pos].setQty(currentQ - q);
            }

            return remove;
        }

};

int BinManager::searchDescription(std::string key) {
    int index = -1;
    int count = 0;
    bool found = false;
    
    while ( count < 30 && !found) {
        if(bin[count].getDescription() == key) {
            found = true;
            index = count;
        }
        count++;
    }

    return index;
}


#endif
