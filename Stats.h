#ifndef STATS_H
#define STATS_H

class Stats {
private:
    static const int NUM = 30;
    double data[NUM];
    int count = 0;

public:
    bool storeValue(double input) {
        
        bool goodInput = true;

        if (count < NUM) {
            data[count] = input;
            count++;
        } else 
            goodInput = false;
        return goodInput;
    }

    double total() {
        double total = 0.0;
        for (int index = 0; index < count; index++) {
            total += data[index];
        }

        return total;
    }

    double average() {
        double avg = 0.0;
        double total = 0.0;
        for (int index = 0; index < count; index++) {
            total += data[index];
        }

        avg = total / (count - 1);

        return avg;
    }

    int highIn() {
        double high = data[0];
        int highIn = 0;
        for (int index = 0; index < count; index++) {
            if (data[index] > high)
                highIn = index;
        }

        return highIn;
    }


    int lowIn() {
        double low = data[0];
        int lowIn = 0;
        for (int index = 0; index < count; index++) {
            if (data[index] < low)
                lowIn = index;
        }
        return lowIn;
    }

    double getOneTime(int index) {
        return data[index];
    }
};

#endif
